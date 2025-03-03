#David Garcia Time of the day py

import time


first_time = time.gmtime()



current = time.time()



now = time.ctime(current)



local_time = time.localtime(current)
day = local_time.tm_wday
hour = local_time.tm_hour
<<<<<<< HEAD
#print(day)
#print(hour)
#print(local_time) #military time
=======




>>>>>>> b3e1d7a211c4930630db9c8c006f62993033595e
if hour <= 12:
    print("Good morning")
elif hour >= 12 and hour <= 18:
    print("Good afternoon")
else:
    print("Good evening")
