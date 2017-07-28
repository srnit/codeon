from qrtools import QR
 
# creates the QR object
my_QR = QR(data = u"raman@abcd", pixel_size=10)
 
# encodes to a QR code
my_QR.encode()