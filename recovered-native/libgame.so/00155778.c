/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155778  Symbol: fullPathFromRelativeFile */

/* cocos2d::CCFileUtils::fullPathFromRelativeFile(char const*, char const*) */

int cocos2d::CCFileUtils::fullPathFromRelativeFile(char *param_1,char *param_2)

{
  int *this;
  int iVar1;
  int *piVar2;
  char *pcStack_20;
  char *pcStack_1c;
  undefined auStack_18 [4];
  undefined auStack_14 [4];
  
  pcStack_20 = param_1;
  pcStack_1c = param_2;
  FUN_001eed40(auStack_18,param_2,&pcStack_20);
  this = (int *)operator_new(0x18);
  CCObject::CCObject((CCObject *)this);
  iVar1 = DAT_001557f0;
  piVar2 = this + 5;
  *this = *(int *)(DAT_001557ec + 0x15579a) + 8;
  FUN_001eed40(piVar2,iVar1 + 0x1557a6,&pcStack_1c);
  CCObject::autorelease((CCObject *)this);
  iVar1 = FUN_001ecf40(auStack_18,0x2f,0xffffffff);
  FUN_001eebe0(auStack_14,auStack_18,0,iVar1 + 1);
  FUN_001ee874(piVar2,auStack_14);
  FUN_001ed6b8(auStack_14);
  FUN_001ee590(piVar2,param_1);
  iVar1 = this[5];
  FUN_001ed6b8(auStack_18);
  return iVar1;
}


