/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164d70  Symbol: objectGroupNamed */

/* cocos2d::CCTMXTiledMap::objectGroupNamed(char const*) */

undefined8 cocos2d::CCTMXTiledMap::objectGroupNamed(char *param_1)

{
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  int *piVar3;
  char *pcStack_20;
  undefined auStack_1c [8];
  
  pcStack_20 = param_1;
  FUN_001eed40(auStack_1c,in_r1,&pcStack_20);
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar2 != 0) {
    piVar3 = *(int **)(iVar2 + 0x14);
    iVar2 = *(int *)(iVar2 + 0x18) - (int)piVar3 >> 2;
    iVar1 = iVar2;
    while (iVar1 != 0) {
      do {
        if (piVar3 == *(int **)(*(int *)(param_1 + 0x110) + 0x18)) {
          iVar2 = 0;
          goto LAB_00164dae;
        }
        iVar2 = *piVar3;
        piVar3 = piVar3 + 1;
      } while (iVar2 == 0);
      iVar1 = FUN_001ed39c(auStack_1c,*(undefined4 *)(iVar2 + 0x24));
    }
  }
LAB_00164dae:
  FUN_001ed6b8(auStack_1c);
  return CONCAT44(pcStack_20,iVar2);
}


