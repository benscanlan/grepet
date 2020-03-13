#frind replace ios with ios.settings
#keep all lower case
#cust convert and to and for print directions
#class map of menus
#
class Settings:
    #paragraph_1
    #comment: Apple_ID grossely unchecked for accuracy
    class Apple_ID:
        class Name_Phone_Numbers_Email:
            Change_Password = None
            Two_Factor_Authentication = None
            Trusted_Phone_Number_click_edit = None
            Get_Verification_Code = None
        class _Password_and_Security:
            Receive_Renewal_Receipts_Toggle = None
            Active = None
            Expired = None
        class Payment_and_Shipping:
            Add_Payment_Method = None
            Add_Shipping_Address = None
            Edit_Click_Remove = None
        class Subscriptions:
            pass
        class iCloud:
            class Manage_Storage:
                class Change_Storage_Plan:
                    pass
            iCloud_Drive_Toggle = None
        
        class iTunes_and_App_Store:
            #Apple_ID:
            class Automatic_Downloads:
                Music_Toggle = None
                Apps_Toggle = None
                Books_and_Audiobooks_Toggle = None
                App_Updates_Toggle = None
                        
            class Cellular_Data:
                Automatic_Downloads_Toggle = None
                App_Downloads = None
            class Video_Autoplay:
                pass
            In_App_Ratings_and_Reviews_Toggle = None
            Offload_Unused_Apps_Toggle = None
                    
        
        class Find_My:
            class Find_My_iPhone:
                Find_My_iPhone_Toggle = None
                Enable_Offline_Finding_Toggle = None
                Send_Last_Location_Toggle = None
                        
            class My_Location:
                Use_This_Phone_as_My_Location = None
                Share_My_Location_Toggle = None
        
        class Set_Up_Family_Sharing:
            Cancel_Button = None
            Get_Started_Prompt = None
            Learn_More_About_Family_Sharing_Link = None
        
        #Sign_Out_Button:
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
            pass
        pass
    pass
    #paragraph_3
#    class Notifications:
#    class Sounds:
#    class Do_Not_Disturb:
#    class Screen_Time:
#    class General:
#    class Control_Center:
#    class Display_and_Brightness:
#    class Wallpaper:
#    class Siri_and_Search:
#    class Touch_ID_and_Passcode:
#    class Emergency_SOS:
#    class Battery:
#    class Privacy:
#    class iTunes_and_App_Store:
#    class Wallet_and_Apple_Pay:
#    class Passwords_and_Accounts:
#    class Mail:
#    class Contacts:
#    class Calendar:
#    class Notes:
#    class Reminders:
#    class Voice_Memos:
#    class Phone:
#    class Messages:
#    class FaceTime:
#    class Maps:
#    class Compass:
#    class Safari:
#    class Music:
#    class TV:
#    class Photos:
#    class Camera:
#    class Books:
#    class Podcasts:
#    class Game_Center:
#    class TV_Provider:
#    class Third_Party_Apps:
#    pass


Settings = Settings() #perfect
# Fill the fields of the record
Settings.Apple_ID.name = 1
Settings.dept = 'computer lab'
Settings.Bluetooth = 1000
#hello.toggle = 1

if Settings.Apple_ID.Set_Up_Family_Sharing.Cancel_Button == None:
    print("none")
#models should appear exactly how it appears in the phone
# may even switch vars to class objects later
#will be mapping all paths to human readable form lower case with 'and' is acceptable for variable names.
#print(f'{Settings.Apple_ID.Set_Up_Family_Sharing.Cancel_Button=}'.split('=')[0])
    
#user acceptable objects

