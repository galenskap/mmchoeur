<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
global $base_url;
?>


<!doctype html>
<html xmlns="http://www.w3.org/1999/xhtml" xmlns:v="urn:schemas-microsoft-com:vml" xmlns:o="urn:schemas-microsoft-com:office:office">

<head>
    <title> </title>
    <!--[if !mso]><!-- -->
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <!--<![endif]-->
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <style type="text/css">
        <?php if ($css): ?>
            <!--
            <?php print $css ?>
            -->
        <?php endif; ?>
        #outlook a {
            padding: 0;
        }

        .ReadMsgBody {
            width: 100%;
        }

        .ExternalClass {
            width: 100%;
        }

        .ExternalClass * {
            line-height: 100%;
        }

        body {
            margin: 0;
            padding: 0;
            -webkit-text-size-adjust: 100%;
            -ms-text-size-adjust: 100%;
        }

        table,
        td {
            border-collapse: collapse;
            mso-table-lspace: 0pt;
            mso-table-rspace: 0pt;
        }

        img {
            border: 0;
            height: auto;
            line-height: 100%;
            outline: none;
            text-decoration: none;
            -ms-interpolation-mode: bicubic;
        }

        p {
            display: block;
            margin: 13px 0;
        }
    </style>
    <!--[if !mso]><!-->
    <style type="text/css">
        @media only screen and (max-width:480px) {
            @-ms-viewport {
                width: 320px;
            }
            @viewport {
                width: 320px;
            }
        }
    </style>
    <!--<![endif]-->
    <!--[if mso]>
    <xml>
        <o:OfficeDocumentSettings>
            <o:AllowPNG/>
            <o:PixelsPerInch>96</o:PixelsPerInch>
        </o:OfficeDocumentSettings>
    </xml>
    <![endif]-->
    <!--[if lte mso 11]>
    <style type="text/css">
        .outlook-group-fix { width:100% !important; }
    </style>
    <![endif]-->
    <!--[if !mso]><!-->
    <link href="https://fonts.googleapis.com/css?family=Open+Sans:300,400,500,700" rel="stylesheet" type="text/css">
    <style type="text/css">
        @import url(https://fonts.googleapis.com/css?family=Open+Sans:300,400,500,700);
    </style>
    <!--<![endif]-->
    <style type="text/css">
        @media only screen and (min-width:480px) {
            .mj-column-per-100 {
                width: 100% !important;
                max-width: 100%;
            }
        }
    </style>
    <style type="text/css">
    </style>
</head>

<body style="background-color:#e2e2e2;" id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
<div style="background-color:#e2e2e2;">
    <table align="center" border="0" cellpadding="0" cellspacing="0" role="presentation" style="background:linear-gradient(to right, #362f2d 0%, #362f2d 12%, #f32f21 12%, #f32f21 37%, #00aef1 37%, #00aef1 62%, #00a650 62%, #00a650 87%, #fef568 87%, #fef568 100%);;background-color:linear-gradient(to right, #362f2d 0%, #362f2d 12%, #f32f21 12%, #f32f21 37%, #00aef1 37%, #00aef1 62%, #00a650 62%, #00a650 87%, #fef568 87%, #fef568 100%);;width:100%;">
        <tbody>
        <tr>
            <td>
                <!--[if mso | IE]>
                <table
                        align="center" border="0" cellpadding="0" cellspacing="0" class="" style="width:600px;" width="600"
                >
                    <tr>
                        <td style="line-height:0px;font-size:0px;mso-line-height-rule:exactly;">
                <![endif]-->
                <div style="Margin:0px auto;max-width:600px;">
                    <table align="center" border="0" cellpadding="0" cellspacing="0" role="presentation" style="width:100%;">
                        <tbody>
                        <tr>
                            <td style="direction:ltr;font-size:0px;padding:3px;text-align:center;vertical-align:top;">
                                <!--[if mso | IE]>
                                <table role="presentation" border="0" cellpadding="0" cellspacing="0">

                                    <tr>

                                    </tr>

                                </table>
                                <![endif]-->
                            </td>
                        </tr>
                        </tbody>
                    </table>
                </div>
                <!--[if mso | IE]>
                </td>
                </tr>
                </table>
                <![endif]-->
            </td>
        </tr>
        </tbody>
    </table>
    <table align="center" border="0" cellpadding="0" cellspacing="0" role="presentation" style="background:#FFFFFF;background-color:#FFFFFF;width:100%;">
        <tbody>
        <tr>
            <td>
                <!--[if mso | IE]>
                <table
                        align="center" border="0" cellpadding="0" cellspacing="0" class="" style="width:600px;" width="600"
                >
                    <tr>
                        <td style="line-height:0px;font-size:0px;mso-line-height-rule:exactly;">
                <![endif]-->
                <div style="Margin:0px auto;max-width:600px;">
                    <table align="center" border="0" cellpadding="0" cellspacing="0" role="presentation" style="width:100%;">
                        <tbody>
                        <tr>
                            <td style="direction:ltr;font-size:0px;padding:20px 0;text-align:center;vertical-align:top;">
                                <!--[if mso | IE]>
                                <table role="presentation" border="0" cellpadding="0" cellspacing="0">

                                    <tr>

                                        <td
                                                class="" style="vertical-align:top;width:600px;"
                                        >
                                <![endif]-->
                                <div class="mj-column-per-100 outlook-group-fix" style="font-size:13px;text-align:left;direction:ltr;display:inline-block;vertical-align:top;width:100%;">
                                    <table border="0" cellpadding="0" cellspacing="0" role="presentation" style="vertical-align:top;" width="100%">
                                        <tr>
                                            <td align="center" style="font-size:0px;padding:10px 25px;word-break:break-word;">
                                                <div style="font-family:'Open Sans', Sans-serif;font-size:30px;font-weight:400;line-height:1;text-align:center;color:#28292b;"> <a href="<?php echo $base_url ?>" class="link-nostyle" style="color: inherit; text-decoration: none;">Music'M Choeur</a> </div>
                                            </td>
                                        </tr>
                                        <tr>
                                            <td align="center" style="font-size:0px;padding:10px 25px;word-break:break-word;">
                                                <div style="font-family:'Open Sans', Sans-serif;font-size:17px;font-weight:400;line-height:1;text-align:center;color:#28292b;"> Chorale à Saint Maur des fossés </div>
                                            </td>
                                        </tr>
                                    </table>
                                </div>
                                <!--[if mso | IE]>
                                </td>

                                </tr>

                                </table>
                                <![endif]-->
                            </td>
                        </tr>
                        </tbody>
                    </table>
                </div>
                <!--[if mso | IE]>
                </td>
                </tr>
                </table>
                <![endif]-->
            </td>
        </tr>
        </tbody>
    </table>
    <!--[if mso | IE]>
    <table
            align="center" border="0" cellpadding="0" cellspacing="0" class="" style="width:600px;" width="600"
    >
        <tr>
            <td style="line-height:0px;font-size:0px;mso-line-height-rule:exactly;">
    <![endif]-->
    <div style="Margin:0px auto;max-width:600px;">
        <table align="center" border="0" cellpadding="0" cellspacing="0" role="presentation" style="width:100%;">
            <tbody>
            <tr>
                <td style="direction:ltr;font-size:0px;padding:20px 0;text-align:center;vertical-align:top;">
                    <!--[if mso | IE]>
                    <table role="presentation" border="0" cellpadding="0" cellspacing="0">

                        <tr>

                            <td
                                    align="left" class="" style=""
                            >
                    <![endif]-->
                    <div style="font-family:'Open Sans', Sans-serif;font-size:17px;font-weight:400;line-height:1;text-align:left;color:#28292b;">
                        <?php print $body ?>
                    </div>
                    <!--[if mso | IE]>
                    </td>

                    </tr>

                    </table>
                    <![endif]-->
                </td>
            </tr>
            </tbody>
        </table>
    </div>
    <!--[if mso | IE]>
    </td>
    </tr>
    </table>
    <![endif]-->
    <table align="center" border="0" cellpadding="0" cellspacing="0" role="presentation" style="background:#FFFFFF;background-color:#FFFFFF;width:100%;">
        <tbody>
        <tr>
            <td>
                <!--[if mso | IE]>
                <table
                        align="center" border="0" cellpadding="0" cellspacing="0" class="" style="width:600px;" width="600"
                >
                    <tr>
                        <td style="line-height:0px;font-size:0px;mso-line-height-rule:exactly;">
                <![endif]-->
                <div style="Margin:0px auto;max-width:600px;">
                    <table align="center" border="0" cellpadding="0" cellspacing="0" role="presentation" style="width:100%;">
                        <tbody>
                        <tr>
                            <td style="direction:ltr;font-size:0px;padding:20px 0;text-align:center;vertical-align:top;">
                                <!--[if mso | IE]>
                                <table role="presentation" border="0" cellpadding="0" cellspacing="0">

                                    <tr>

                                        <td
                                                align="center" class="" style=""
                                        >
                                <![endif]-->
                                <div style="font-family:'Open Sans', Sans-serif;font-size:17px;font-weight:400;line-height:1;text-align:center;color:#28292b;"> L'équipe Music'M Choeur </div>
                                <!--[if mso | IE]>
                                </td>

                                </tr>

                                </table>
                                <![endif]-->
                            </td>
                        </tr>
                        </tbody>
                    </table>
                </div>
                <!--[if mso | IE]>
                </td>
                </tr>
                </table>
                <![endif]-->
            </td>
        </tr>
        </tbody>
    </table>
</div>
</body>

</html>