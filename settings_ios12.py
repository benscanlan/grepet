#frind replace ios with ios.settings
#keep all lower case
#cust convert and to & for print directions
#class map of menus
#nv prodigy scooters
class Settings:
    #paragraph_1
    class Apple_ID:
        class Name_Phone_Numbers_Email:
            Change_Password
            Two_Factor_Authentication
            Trusted_Phone_Number_Click_Edit
            Get_Verification_Code
        class _Password_and_Security:
            Receive_Renewal_Receipts_Toggle
            Active
            Expired
        class Payment_and_Shipping:
            Add_Payment_Method
            Add_Shipping_Address
            Edit_Click_Remove
        class Subscriptions:
            pass
        class iCloud:
            class Manage_Storage:
                class Change_Storage_Plan
                    pass
            iCloud_Drive_Toggle
        
        class iTunes_&_App_Store:
            Apple_ID:
            class Automatic_Downloads:
                Music_Toggle
                Apps_Toggle
                Books_&_Audiobooks_Toggle
                App_Updates_Toggle
                        
            class Cellular_Data:
                Automatic_Downloads_Toggle
                App_Downloads
            class Video_Autoplay:
                pass
            In-App_Ratings_&_Reviews_Toggle
            Offload_Unused_Apps_Toggle
                    
        
        class Find_My:
           class Find_My_iPhone:
                Find_My_iPhone_Toggle
                Enable_Offline_Finding_Toggle
                Send_Last_Location_Toggle
                        
            class My_Location:
                Use_This_Phone_as_My_Location
                Share_My_Location_Toggle
        
        class Set_Up_Family_Sharing:
            Cancel_Button
            Get_Started_Prompt
            Learn_More_About_Family_Sharing_Link
        
        Sign_Out_Button:
        pass
    #paragraph_2
    Airplane_Mode = 0 #what about toggle on off for trouble shooting?
    class WiFi:
        pass
    class Bluetooth:
        pass
    class Cellular:
        type = 0
    class Personal_Hotspot:
    #paragraph_3
    class Notifications:
    class Sounds:
    class Do_Not_Disturb:
    class Screen_Time:
    class General:
    class Control_Center:
    class Display_and_Brightness:
    class Wallpaper:
    class Siri_and_Search:
    class Touch_ID_and_Passcode:
    class Emergency_SOS:
    class Battery:
    class Privacy:
    class iTunes_and_App_Store:
    class Wallet_and_Apple_Pay:
    class Passwords_and_Accounts:
    class Mail:
    class Contacts:
    class Calendar:
    class Notes:
    class Reminders:
    class Voice_Memos:
    class Phone:
    class Messages:
    class FaceTime:
    class Maps:
    class Compass:
    class Safari:
    class Music:
    class TV:
    class Photos:
    class Camera:
    class Books:
    class Podcasts:
    class Game_Center:
    class TV_Provider:
    class Third_Party_Apps:
    pass


Settings = Settings() #perfect
# Fill the fields of the record
Settings.Apple_ID.name = 1
Settings.dept = 'computer lab'
Settings.Bluetooth = 1000
#hello.toggle = 1


