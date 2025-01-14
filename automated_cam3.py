#from ultralytics import YOLO
import sys
import cv2
import math 
import time
from datetime import datetime

# start webcam
cap = cv2.VideoCapture(3)
cap.set(3, 640)
cap.set(4, 480)
#cap.set(cv2.CAP_PROP_EXPOSURE, -13)

def wait_milliseconds(milliseconds):
    time.sleep(milliseconds / 1000)

while True:
    for i in range(0, 2):
        now = datetime.now()	
        output_filename = now.strftime("%d.%m.%Y.%H.%M.%S") + '-cam3' + '.mp4'	
        fourcc = cv2.VideoWriter_fourcc(*'mp4v')  # Codec for MP4
        fps = 240.0  # Frames per second
        frame_size = (640, 480)  # Resolution of the video
        # Create the VideoWriter object
        out = cv2.VideoWriter(output_filename, fourcc, fps, frame_size)
        out.set(cv2.CAP_PROP_BITRATE, 5000)

        video_start_time = time.time()
        while True: #goes for 5 minutes
            success, img = cap.read()
            #results = model(img, stream=True)
            print(success)
            # Write the frame to the output video
            out.write(img)

            cv2.imshow('Webcam', img)
            video_end_time = time.time()
            if video_end_time - video_start_time >= 20:
                break

            if cv2.waitKey(1) == ord('q'): #break program if q is pressed in terminal
                sys.exit(0)
                break
        wait_milliseconds(5000) #wait 3 hours - 5 minutes

    wait_milliseconds(10000) #21600000) #wait 6 hours
cap.release()
cv2.destroyAllWindows() 

