import smtplib

sender = 'megasoft909@gmail.com'
receivers = ['vikashkumarmegasoft@gmail.com']

message = """From: From Person <megasoft909@gmail.com>
To: To Person <vikashkumarmegasoft@gmail.com>
Subject: SMTP e-mail test

This is a test e-mail message.
"""

try:
   smtpObj = smtplib.SMTP('localhost')
   smtpObj.sendmail(sender, receivers, message) 
   print ("Successfully sent email")
except SMTPException:
   print ("Error: unable to send email")
