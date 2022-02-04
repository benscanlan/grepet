




printf("%s\n", buffer);
            // 
            //get first line of buffer
            char request_line1[512];
            for(int i = 0; i < strlen(buffer); i++)
            {
                if (buffer[i]== '\n') 
                {
                    for(int j=0; j <= i; j++)
                    {
                            //printf("%c", buffer[j]);
                            request_line1[j] = buffer[j];
                    }
                    request_line1[i+1]='\0';
                    break;
                }
            }
            printf("%s\n", request_line1);
            
            
            char request_path[256];
            int i = 0;
            //if (request_line1[i]=='G' && request_line1[i+1]=='E' && request_line1[i+2]=='T' && request_line1[i+3]==' ')
            int start = 0;
            int end = 0;
            for(int i = 0; i < strlen(request_line1); i++)
            {
                if (buffer[i]== ' ')
                {
                    start = i+1;
                    for(i=start; i < strlen(request_line1); i++)
                    {
                        if (buffer[i]== ' ')
                        {
                            end = i-1;
                        }

                    }
                }
            }

            for(int j = start; j <= end; j++)
            {
                request_path[j-4] = request_line1[j];
            }
            request_path[end-3]='\0';
            printf("%s\n", request_path);