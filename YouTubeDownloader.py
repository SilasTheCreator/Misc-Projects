#Program for downloading YouTube Videos.
#Make sure to download the latest version of pytube, or else you will receive and HTTP Error 410 Gone.
from pytube import YouTube

#URL
url = input("Enter the video URL: ")
video = YouTube(url)

#Title
print("Title: ",video.title)

#Views
print("Number of Views: ", video.views)

#Length
print("Video Length: ", video.length)

#Description
print("Description: ", video.description)

#Rating
print("Rating: ", video.rating)

#Find highest quality
yts = video.streams.get_highest_resolution()

#Downloading time!
print("Downloading...")
yts.download() #Make sure this is your file location or no download will occur
print("Enjoy your video!")
