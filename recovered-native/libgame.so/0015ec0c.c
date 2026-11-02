/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ec0c  Symbol: unzStringFileNameCompare */

/* cocos2d::unzStringFileNameCompare(char const*, char const*, int) */

int cocos2d::unzStringFileNameCompare(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_3 == 0) || (param_3 == 1)) {
    iVar1 = strcmp(param_1,param_2);
  }
  else {
    do {
      uVar2 = (uint)(byte)*param_1;
      uVar3 = (uint)(byte)*param_2;
      param_1 = (char *)((byte *)param_1 + 1);
      param_2 = (char *)((byte *)param_2 + 1);
      if (uVar2 - 0x61 < 0x1a) {
        uVar2 = uVar2 - 0x20 & 0xff;
      }
      if (uVar3 - 0x61 < 0x1a) {
        uVar3 = uVar3 - 0x20 & 0xff;
      }
      if (uVar2 == 0) {
        if (uVar3 != 0) {
          return -1;
        }
        return 0;
      }
      if (uVar3 == 0) break;
      if (uVar2 < uVar3) {
        return -1;
      }
    } while (uVar2 <= uVar3);
    iVar1 = 1;
  }
  return iVar1;
}


