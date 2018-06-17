var gulp = require('gulp');
var gulpif = require('gulp-if');
var concat = require('gulp-concat');
var sass = require('gulp-sass');
var sourcemaps = require('gulp-sourcemaps');
var autoprefixer = require('gulp-autoprefixer');
var uglify = require('gulp-uglify');
var imagemin = require('gulp-imagemin');
var consoleReporter = require('gulp-stylelint-console-reporter').default;
var browserSync = require("browser-sync").create();
var reload = browserSync.reload;
var replace = require('gulp-replace');
var argv = require('yargs').argv;

var config = require('./config.json');
var environment = (argv.env)? argv.env : 'dev';
var isProduction = (environment == 'prod')? true : false;
var isDev = (environment == 'dev')? true : false;

gulp.task('sass', function() {
  return gulp.src([config.styles.input])
  .pipe(sourcemaps.init())
  .pipe(sass(config.styles.options[environment]).on('error', sass.logError))
  .pipe(autoprefixer(config.autoprefixer))
  .pipe(sourcemaps.write('.'))
  .pipe(replace(config.img.str_needle, config.img.str_replace))
  .pipe(gulp.dest(config.styles.output))
  .pipe(gulpif(isDev,reload({stream: true})));
});

gulp.task('js', function() {
  return gulp.src([config.js.input])
  .pipe(sourcemaps.init())
  .pipe(concat(gulp.dest(config.js.outputFile)))
  .pipe(gulpif(isProduction,uglify()))
  .pipe(gulp.dest(config.js.output))
  .pipe(gulpif(isDev,reload({stream: true})));
});

gulp.task('img', function() {
  return gulp.src([config.img.input])
  .pipe(imagemin(config.img.options))
  .pipe(gulp.dest(config.img.output));
});

gulp.task('default', function() {
  gulp.start(['sass', 'js', 'img']);
});

gulp.task('watch', function() {
  if (config.browsersync.proxy) {
    browserSync.init({
      proxy: config.browsersync.proxy
    });
  }
  gulp.watch(config.styles.input, ['sass']).on('change', reload);
  gulp.watch(config.js.input, ['js']).on('change', reload);
  gulp.watch(config.img.input, ['img']).on('change', reload);
});
