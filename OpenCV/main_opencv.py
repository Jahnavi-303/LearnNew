from tkinter.messagebox import showerror
import cv2 as cv
import matplotlib.pyplot as plt

my_image = r"D:\newRepo\LearnNew\OIP.jpg"

image = cv.imread(my_image)

h, w, c = image.shape
print('height: ', h)
print('width:  ', w)
print('channel:', c)

plt.figure(figsize=(10,20))
plt.imshow(image)
plt.show()

new_image=cv.cvtColor(image, cv.COLOR_BGR2RGB)
plt.figure(figsize=(10,10))
plt.imshow(new_image)
plt.show()
