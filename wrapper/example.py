from PythonQt.QHexView import *

print("QHexView wrapped by decorators")

# create a new object
hexview = QHexView()

# print the object (to see how it is wrapped)
print (hexview)

# print the methods available
print (dir(hexview))
print (hexview.headerRect())
