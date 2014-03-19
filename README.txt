Readme File for Quake of Hexen Mode
Christopher Guerra
IT 266

There are now 3 classes available for play that will be prompted to the user upon
starting a match. Classes cannot be changed during gameplay. The host or clients 
have to reconnect or restart the server to change their class. To set the time for
the match set the timer when starting a new server. There are weapon restrictions
based on what class you are. I have a list added below to simplify this explanation.

Weapons for classes
Warrior:
1 - Fists
2 - Timon's Axe
3 - Hammer of Retribution
4 - Quietus

Mage:
1 - Fists
5 - Sapphire Wand
6 - Frost Shards
7 - Arc of Death
8 - BloodScourge

Demon:
1 - Fists
9 - Shockwave
10 - KoraxsFury

For the weapons that are not on all deathmatch levels:
in console within single player can retrieve all weapons
give axe
give hammer
give quietus
give sapphire wand
giver frost shards
give arc of death
give bloodscourge
give shockwave
give Koraxsfury

Note: As before the appropriate class is the only one that can use these weapons.
Note: Below is my config.cfg file copied into this document for ease of implementation.

bind 0 "use KoraxsFury"
bind 1 "use Hands"
bind 2 "use Axe"
bind 3 "use Hammer"
bind 4 "use Quietus"
bind 5 "use Sapphire Wand"
bind 6 "use Frost Shards"
bind 7 "use Arc of Death"
bind 8 "use BloodScourge"
bind 9 "use ShockWave"
bind = "sizeup"
bind [ "invprev"
bind \ "+mlook"
bind ] "invnext"
bind ` "toggleconsole"
bind a "+moveleft"
bind b "use rebreather"
bind c "+movedown"
bind d "+moveright"
bind e "use environment suit"
bind g "rejuv"										//1-time user rejuvenation potion
bind h "wave 0"
bind i "cmd mage"
bind j "wave 1"
bind k "wave 2"
bind l "wave 3"
bind o "cmd demon"
bind p "use power shield"
bind q "use quad damage"
bind s "+back"
bind t "messagemode"
bind u "cmd warrior"
bind w "+forward"
bind x "score"
bind z "+lookdown"

Any Questions feel free to email me cpg6@njit.edu
