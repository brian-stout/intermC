	while(1){
		printf("Enter your input: ");
		fgets(input, sizeof(input), stdin);
		if(strlen(input) > sizeof(input)){  //Any kind of error handling you want
			printf("Invalid input!\n");
			while(guess[strlen(guess)-1] != '\n'){
				fgets(input, sizeof(input), stdin);
			}
			continue;
		}
