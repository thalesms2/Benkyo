import cv2
img = cv2.imread("lena_color.png", cv2.IMREAD_COLOR)
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
canny = cv2.Canny(gray, 80, 200)
blur = cv2.blur(img, (5, 6))
cv2.imshow('lena', blur)
cv2.waitKey(0)
cv2.destroyAllWindows()
cv2.imwrite("lena_result.png", img)
