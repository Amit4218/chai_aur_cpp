import sys
import os

def file_create(files: int, file_location: str, file_extention: str, file_name: str):

    try:

        print("Creating file...")

        for i in range(1, files + 1):
            with open(f"{file_location}/0{i}_{file_name}.{file_extention}", 'w') as f:
                pass

        print("File creation finished...\n\nCreation successfull!")

    except Exception as e:
        print("Error while creating file: ",e)
        


def folder_check(folder_name: str):
    
    try:
         
        is_folder_exist = os.path.exists(folder_name)

        is_folder = os.path.isdir(folder_name)

        if is_folder_exist and is_folder:
            return True
        
        else:
            os.makedirs(folder_name, exist=True)
            return True

    except Exception as e:
        print("File Exist Error: ", e)


def main():

    # Taking input from the terminal

    no_of_files = int(sys.argv[1])
    file_location = sys.argv[2]
    file_extention = sys.argv[3]
    folder_name = sys.argv[4] if len(sys.argv) > 4 else None
    file_name = sys.argv[5] if len(sys.argv) > 5 else "task_solution"
    

    try:

        if folder_name:
            folder_check(folder_name)

            if folder_check:
                file_create(no_of_files, file_location, file_extention, file_name)



        file_create(no_of_files, file_location, file_extention, file_name)

    except Exception as e :
        print("Error", e)


if __name__ == "__main__":
    main()