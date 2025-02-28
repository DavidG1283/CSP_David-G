#David Garcia Time of the day py

import time


first_time = time.gmtime()



current = time.time()



now = time.ctime(current)



local_time = time.localtime(current)
day = local_time.tm_wday
hour = local_time.tm_hour




if hour <= 12:
    print("Good morning")
elif hour >= 12 and hour <= 18:
    print("Good afternoon")
else:
    print("Good evening")
