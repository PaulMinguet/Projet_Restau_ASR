typedef struct {
	int serveur;
	int choix;
	pid_t expediteur;
} 
command_t;

typedef struct {
	int type;
	int choix;
} 
cmdRecue_t;