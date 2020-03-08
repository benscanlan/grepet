# save-webpage.py

import urllib.request, urllib.error, urllib.parse

url = 'https://support.apple.com/en-us/HT203977#computer'

response = urllib.request.urlopen(url)
webContent = response.read()

f = open('save1.html', 'wb')
f.write(webContent)
f.close
