# gta-v-scripts

Scripts imported for the latest version (1011-1032) available on https://www.gta5-mods.com/tools/decompiled-scripts-b757

Scripts govern almost every behavior in the game except fundamental things like physics.

The goal is to annotate these scripts so that they are easier to decipher. Annotation involves:

* name and document variables
* name and document functions
* adding general comments

Script decompiler used (probably):
https://github.com/zorg93/GTA-V-Script-Decompiler

All of the original scripts are located in `GAME_FOLDER/update/update.rpf/x64/levels/gta5/script/script_rel.rpf`.
You'll need to use http://openiv.com/ to unpack them.

For a reference of script hooks (like `weapon::get_current_ped_weapon`), see from [nativedb] - it is recommended to download `reference.html` since the online search is rather poor.

[nativedb]: https://dev-c.com/nativedb/

## Index

- `comms_controller.c` - handles receiving of text messages, including the 20 second timer between each text.
- `re_*.c` - random events, the same script might contain code for multiple events that it switches over, like `re_atmrobbery`

Scripts for specific missions can be found by using this unrelated project:
https://github.com/udoprog/batchcensor-configs/tree/master/GTAV/missions

The name of the script will match the name of the audio file, for example Three's Company it uses the audio file `SS_FF/fbi2`, so the script for that would be `fbi2.c`.

## Testing out script hooks

Sometimes you see blocks of code where you're not sure what the script is doing, an example would be if it uses hooks which haven't been identified in [nativedb] yet.

Then it might be worthwhile to convert it into a mod, replicate the functionality and call it with some diagnostics output.

For this purpose, you can use the following simple ScriptHookV.NET project as a template:
https://github.com/udoprog/ScriptHookTest

[nativedb]: https://dev-c.com/nativedb/