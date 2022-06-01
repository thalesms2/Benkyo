import cv2
# Ler imagem
 # cv2.IMREAD_COLOR : Carrega imagem com cores
 # cv2.IMREAD_GRAYSCALE : Carrega imagem em escala de cinza
img = cv2.imread("lena_color.png", cv2.IMREAD_COLOR)
# show image
cv2.imshow('lena', img)
# wait until the key 0 is pressed to destroy all windows
cv2.waitKey(0)
cv2.destroyAllWindows()
