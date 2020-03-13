# oblique

Let's automate troubleshooting together. We will be using python 3.8!

### Current Objective:
Work on mapping iOS 13 settings menu for computer `bool` and human reability `class`.

'1' stands for 'toggled on,' 'set,' or 'toggled on and off.' 
'0' toggled off,' or not 'set'. 
'None' will stand for settings not vistied during the troubleshooting process. 

Variables are declared in this fashion: 
    
    class Settings:
        class Apple_ID:
            class Set_Up_Family_Sharing:
                Cancel_Button = None
                Settings = Settings( )

Variables modified outside the class:
    
    Settings.Apple_ID.Set_Up_Family_Sharing.Cancel_Button = 1

Variables can be called in this fashion: 
    
    if Settings.Apple_ID.Set_Up_Family_Sharing.Cancel_Button == None:
        print("Have you tried canceling family sharing?")

### Basic Usage
1. Clone to desktop. I use github desktop gui.
2. Command to activate virtual environment `$ source <path/to/oblique>/bin/activate` with bash/zsh.
3. Leaving the virtual environment `deactivate`
4. Run program.py as `python3 <program.py>`
5. Install packages by `pip3 install <package>`

### Xcode Editing Settings_IOS13.py
 enable-code-folding-by-default
 Go to: **Xcode > Preferences > Text Editing >** and check 'Code folding ribbon'.
