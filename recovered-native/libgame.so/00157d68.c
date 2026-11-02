/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157d68  Symbol: parse */

/* cocos2d::CCSAXParser::parse(char const*) */

void * __thiscall cocos2d::CCSAXParser::parse(CCSAXParser *this,char *param_1)

{
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  ulong local_9c;
  undefined auStack_98 [56];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_2c;
  
  local_9c = 0;
  pvVar2 = (void *)CCFileUtils::getFileData(param_1,(char *)(DAT_00157dfc + 0x157d88),&local_9c);
  uVar1 = local_9c;
  pvVar4 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    FUN_0017a3a8(DAT_00157e00);
    memset(auStack_98,0,0x80);
    local_2c = DAT_00157e04;
    pvVar4 = (void *)0x0;
    local_60 = *(undefined4 *)(DAT_00157e08 + 0x157dbc);
    local_5c = *(undefined4 *)(DAT_00157e0c + 0x157dc4);
    local_54 = *(undefined4 *)(DAT_00157e10 + 0x157dcc);
    iVar3 = FUN_00188b74(auStack_98,this,pvVar2,uVar1);
    if (iVar3 == 0) {
      FUN_0017c458();
      FUN_00190f84();
      pvVar4 = (void *)0x1;
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  return pvVar4;
}


