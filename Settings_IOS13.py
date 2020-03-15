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
    Airplane_Mode = 0
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
    class Notifications:
        Show_Previews = None
	
        class Announce_Messages_with_Siri:
            Announce_Messages_with_Siri_Toggle = None
            Reply_without_Confirmation = None
				
            class Announce_Messages_From_App:
                Messages_Announce_Messages_with_Siri_Toggle = None
                Messages_Announce_Messages_From = None
					
        # class Siri_Suggestions:
            # Insert get list of installed apps function here
            # Activity_Toggle = None			
			
    class Sounds_and_Haptics:
        Vibrate_on_Ring_Toggle = None
        Vibrate_on_Silent_Toggle = None
        Volume_Level = None
        Change_with_Buttons_Toggle = None
        Ringtone = None
        Text_Tone = None
        New_Voicemail = None
        New_Mail = None
        Sent_Mail = None
        Calendar_Alerts = None
        Reminder_Alerts = None
        AirDrop = None
        Keyboard_Clicks_Toggle = None
        Lock_Sound = None
        System_Haptics = None
		
    class Do_Not_Disturb:
        Do_Not_Disturb_Toggle = None
        Scheduled_Toggle = None
		
        class Scheduled_DND:
            From_Time = None
            To_Time = None
			
        Dim_Lock_Screen_Toggle = None
        Silence = None
        Allow_Calls_From = None
        Repeated_Calls_Toggle = None
        DND_Driving_Activate = None
        AutoReply_To = None
				
#    class Screen_Time:
    class General:
        class About:
            Name = None
            Software_Version = None
            Model_Name = None
            Model_Number = None
            Serial_Number = None
            AppleCare = None
            Songs = None
            Videos = None
            Photos = None
            Applications = None
            Capacity = None
            Available = None
            Wifi_Address = None
            Bluetooth_Address = None
            Model_Firmware = None
            SEID = None
            EID = None
            Network = None
            Carrier = None
            IMEI = None
            ICCID = None
            MEID = None
			
            class Certificate_Trust_Settings:
                Trust_Store_Version = None
                Trust_Asset_Version = None
		
        class Software_Update:
            Automatic_Updates_Toggle = None
			
        AirDrop	= None
		
        class Airplay_and_Handoff:
            Automatically_Airplay_to_TVs = None
            Transfer_to_HomePod_Toggle = None
            Handoff_Toggle = None
			
        #class CarPlay:
        #class iPhone_Storage:
        #class Background_App_Refresh:
		
        class Date_and_Time:
            Hour_Time_24_Toggle = None
            Set_Automatically_Toggle = None
            Time_Zone = None
            Date_and_Time_Manual = None
            
        class Keyboard:
            Keyboards_List = None
            Text_Replacement_List = None
            One_Handed_Keyboard = None
            Auto_Capitalization_Toggle = None
            Auto_Correction_Toggle = None
            Enable_Caps_Lock_Toggle = None
            Smart_Punctuation_Toggle = None
            Character_Preview_Toggle = None
            Dot_Shortcut_Toggle = None
            Check_Spelling_Toggle = None
            Predictive_Toggle = None
            Slide_to_Type_Toggle = None
            Delete_Slide_to_Type_by_Word_Toggle = None
            Enable_Dictation_Toggle = None
            Memoji_Stickers_Toggle = None
            
        class Fonts:
            Fonts_List = None
        
        class Language_and_Region:
            iPhone_Language = None
            Region = None
            Calendar = None
            Temperature_Unit = None
           
        class Dictionary:
            Dictionary_List = None
            
        class VPN:
            Status_Toggle = None
            VPN_List = None
            
        #class Legal_and_Regulatory:
        #class Reset:

    class Control_Center:
        Access_Within_Apps_Toggle = None
        Customize_Controls_List = None
    
    class Display_and_Brightness:
        class Appearance:
            Selection = None
            Automatic_Toggle = None
            Schedule = None
            Light_Time = None
            Dark_Time = None
        
        Brightness_Value = None
        True_Tone_Toggle = None
        
        class Night_Shift:
            Scheduled_Toggle = None
            From_Time = None
            To_Time = None
            Manually_Enabled_Until_Tomorrow = None
            Color_Temperature_Value = None

        Auto_Lock = None
        Raise_to_Wake_Toggle = None
        Text_Size_Value = None
        Bold_Text_Toggle = None
        View_Selection = None
    
    #class Accessibility:
    
    class Wallpaper:
        Lock_Screen = None
        Home_Screen = None
        Dark_Appearance_Dims_Wallpaper_Toggle = None
            
    class Siri_and_Search:
        Listen_for_Hey_Siri_Toggle = None
        Press_Side_Button_for_Siri_Toggle = None
        Allow_Siri_When_Locked_Toggle = None
        Language = None
        Siri_Voice = None
        Voice_Feedback = None
        My_Information = None
        Siri_and_Dictation_History = None
        
        #....Variables below are also from 'Notifications' class:
        #class Announce_Messages:
        #Announce_Messages_with_Siri_Toggle = None
        #Announce_Messages_From_App = None
        #Reply_without_Confirmation = None
        
        Suggestions_in_Search_Toggle = None
        Suggestions_in_Look_Up_Toggle = None
        Suggestions_on_Lock_Screen_Toggle = None
        
        class Third_Party_Apps:
            #...Get List of Third_Party_Apps Function
            Learn_from_this_App_Toggle = None
            Show_in_Search_Toggle = None
            Suggest_Shortcuts_Toggle = None
            Show_Siri_Suggestions_Toggle = None
        
    class Face_ID_and_Passcode:
        iPhone_Unlock_Toggle = None
        iTunes_and_App_Store_Toggle = None
        Apple_Pay_Toggle = None
        Password_AutoFill_Toggle = None
        
        #class Third_Party_Apps
            #...Get List of Third_Party_Apps Function
            #App_Toggle = None
        
        Require_Attention_for_Face_ID_Toggle = None
        Attention_Aware_Features_Toggle = None
        Require_Passcode = None
        Voice_Dial_Toggle = None
        
        Today_View_Toggle = None
        Notification_Center_Toggle = None
        Control_Center_Toggle = None
        Siri_Toggle = None 
        Replay_with_Message_Toggle = None
        Home_Control_Toggle = None
        Wallet_Toggle = None
        Return_Missed_Calls_Toggle = None
        USB_Accessories_Toggle = None
        Erase_Data_Toggle = None

    class Emergency_SOS:
        Call_with_Side_Button_Toggle = None
        Auto_Call_Toggle = None
        Emergency_Contacts_List = None
        Countdown_Sound_Toggle = None
        
    class Battery:
        Low_Power_Mode_Toggle = None
        
        class Battery_Health:
            Maximum_Capacity = None
            Optimized_Battery_Charging_Toggle = None
    
    #.... Insert Battery Statistics Info....

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

if Settings.Apple_ID.Set_Up_Family_Sharing.Cancel_Button == None:
    print("none")

