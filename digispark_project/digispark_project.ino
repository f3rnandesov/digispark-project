

//Organização de Funções

enum class OperatingSystem{
  Linux,
  Windows,
  Unknown
};

OperatingSystem detect_os();

void linux_block();
void windows_block();

void open_terminal_linux();
void open_terminal_windows();

void list_files();
void create_archive_tar_gz();
void send_email();
void cleanup();


//Fluxo Principal

int main(){
  OperatingSystem os = detect_os();

  switch(os){
    case OperatingSystem::Linux:
        linux_block();
        break;
    
    case OperatingSystem::Windows:
        windows_block();
        break;
      
    default:
        break;
  }
  return 0;
}