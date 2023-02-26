class CfgPatches
{
 class 187th_PLX1
 {
  name="187th PLX-1";
  author="MickeyD";
  requiredAddons[]={};
  units[]={};
  weapons[]={"Aux187_PLX1"};
 };	
};
class CfgWeapons
{
 class JLTS_PLX1_AT;
 class Aux187_PLX1: JLTS_PLX1_AT
 {
  displayName="[187th] PLX-1";
  scope=2;
  scopeArsenal=2;
 };
};
