# This Project has Moved!

You can find the new project page on the [Chipmunk2D Website](https://chipmunk-physics.net/git/iPhoneSnap2D.html).

To migrate an existing checkout, you can use the following command, or make a new checkout of the project from the new location.

```
git remote set-url origin https://chipmunk-physics.net/git/iPhoneSnap2D
git fetch origin master
git reset origin/master
```

You may additionally need to run `git checkout .` to cleanup the deleted files. *This will also discard your local changes if you have made any.*

To read more about why this project moved, you can read about it in [PROJECT_HAS_MOVED.md](PROJECT_HAS_MOVED.md)

iPhoneSnap
==========

![Screenshot](http://files.slembcke.net/upshot/upshot_kGBi9W8r.png)
http://www.youtube.com/watch?v=MVDCz1WG2IU

Snap! is modeled after an old wooden board game I used to play. Pieces are placed on the board and a bar compresses them downwards. Players take turns removing pieces one at a time, if they cause the bar to move too far then the player loses points.

The Snap! source code is available under the MIT License. The purpose is to show how simple ChipmunkPro makes using the Chipmunk physics library from Objective-C projects. Snap is also available from the App Store for $.99.

