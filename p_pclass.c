#include "g_local.h"
#include "m_player.h"
#include "p_pclass.h"
	// Check to see if the player has chosen a class or not
	void CheckClass(edict_t *ent)
	{
		if(ent->client->resp.pclass < 1)   
		{       
			gi.centerprintf(ent, "Please choose your class.\n\nU - Warrior\nI - Mage\nO - Demon\n");
		}
	}

	//set the class value for the player
	void Cmd_Class_f(edict_t *ent, char *cmd)
	{
		//Check if player already has class
		if(ent->client->resp.pclass > 0)
		{
			
			if(ent->client->resp.pclass == Warrior || Mage || Demon)
			{
				gi.centerprintf(ent,"You cannot change your class.\n Go forth and wreak havoc!");
			}
			gi.sound(ent, CHAN_VOICE, gi.soundindex("items/blinkin.wav"), 1, ATTN_NORM, 0);
			return;
		}
		gi.cprintf(ent,PRINT_HIGH,"Got: %s\n",cmd);
		
		if(Q_stricmp (cmd, "warrior") == 0)
		{
			ent->client->resp.pclass = Warrior;
			gi.centerprintf(ent,"You have chosen the path of the warrior.\n\nCrush your enemies...\n");
		}
		else if(Q_stricmp (cmd, "mage") == 0)
		{
			ent->client->resp.pclass = Mage;
			gi.centerprintf(ent,"You have chosen the path of mage.\n\nIncinerate them...\n");
		}
		else if(Q_stricmp (cmd, "demon") == 0)
		{
			ent->client->resp.pclass = Demon;
			gi.centerprintf(ent,"You have chosen the path of the demon.\n\nAvenge Korax!!!\n");
		}
		else
		{
			ent->client->resp.pclass = 0;
			gi.centerprintf(ent,"Please Select a valid class!\n");
		}

	}
