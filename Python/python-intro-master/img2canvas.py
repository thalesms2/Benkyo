import cv2
# capture video
# from camera device (device index)
# from file (name of video file)
cap = cv2.VideoCapture(0)
while True:
 # Capture frame-by-frame
 ret, frame = cap.read()
 # Our operations on the frame come here
 gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
 canny = cv2.Canny(gray, 0, 0)
 # Display the resulting frame
 cv2.imshow('frame', canny)
 if cv2.waitKey(1) & 0xFF == ord('q'):
     break
# When everything done, release the capture
cap.release()
cv2.destroyAllWindows()
