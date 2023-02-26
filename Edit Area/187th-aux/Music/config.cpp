class CfgPatches
{
	class 187th_Music
	{
		name="187th Music Pack";
		author="Sparrow";
		requiredaddons[]={};
		requiredversion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMusic
{
	tracks[]=
	{
		"Aux187StopMusic",
		"Theme187th"
	};
	class Aux187StopMusic
	{
		name="Stop Music";
		musicClass="187th_Main";
		sound[]=
		{
			"\187th-aux\Music\music_files\StopMusic.ogg",
			1,
			1
		};
		duration="3";
	};
	class Theme187th
	{
		name="187th Theme";
		musicClass="187th_Main";
		sound[]=
		{
			"\187th-aux\Music\music_files\Theme\187th_theme.ogg",
			1,
			1
		};
		duration="230";
	};
};
class CfgMusicClasses
{
	class 187th_Main
	{
		author="Sparrow";
		displayName="187th - Main";
	};
};