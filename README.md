# oblique

Let's automate troubleshooting together.hjkh We will be using python 3.8!

### Current Objective:
Work on mapping iOS 13 settings menu for computer `bool` and human reability `class`.

  #Declare outside the class row by row
  s.ai.pus.cp #settings > Apple ID ... , 0
  s.ai.pus.ac #settings > Apple ID ... , 0

Crazy all encompassing object for each setting. Has sub variables string pathname value if visited etc. Large Objects as end nodes of class structure for max flexibility super object type creation later has path in string to user human readable format #settings > Apple ID

  #If passwords and preview in the same list
  list.pa list.pr
  PUA #PASSWORDS AND ACCOUNTS
  puaus #passwords accounts and security


### Variables:
* '1' stands for 'toggled on,' 'set,' or 'toggled on and off.'
* '0' toggled off, or not set.
* 'None' will stand for settings not vistied during the troubleshooting process.

Variables are declared in this fashion:

    class Settings:
        class Apple_ID:
            class Set_Up_Family_Sharing:
                Cancel_Button = None
    Settings = Settings( )
Variables can be called in this fashion:

    if Settings.Apple_ID.Set_Up_Family_Sharing.Cancel_Button == None:
        print("Have you tried canceling family sharing?")
        print("Navigate to, Settings > Your Name > Set Up Family Sharing > Cancel Button" )        
Variables modified outside the class:

    Settings.Apple_ID.Set_Up_Family_Sharing.Cancel_Button = 1
### Basic Usage
EDITED:
Build your own python venv from a requirements.txt file

1. Clone to desktop. I use github desktop gui.
2. Command to activate virtual environment `$ source <path/to/oblique>/bin/activate` with bash/zsh.
3. Leaving the virtual environment `deactivate`
4. Add files  `touch newfile.py`
5. Add directories `mkdir newdir`
6. Run program.py as `python3 <program.py>`
7. Install packages by `pip3 install <package>`

### Xcode Editing Settings_IOS13.py
 enable-code-folding-by-default
 Go to: **Xcode > Preferences > Text Editing >** and check 'Code folding ribbon'.
