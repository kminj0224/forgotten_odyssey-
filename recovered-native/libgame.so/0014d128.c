/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d128  Symbol: setColor */

/* cocos2d::CCMenu::setColor(cocos2d::_ccColor3B const&) */

void cocos2d::CCMenu::setColor(_ccColor3B *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *in_r1;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  
  *(undefined *)(param_1 + 0x45) = *in_r1;
  *(undefined *)((int)param_1 + DAT_0014d1b4) = in_r1[1];
  *(undefined *)((int)param_1 + 0x116) = in_r1[2];
  if ((((CCArray *)param_1[0x10] != (CCArray *)0x0) &&
      (iVar1 = CCArray::count((CCArray *)param_1[0x10]), iVar1 != 0)) && (param_1[0x10] != 0)) {
    piVar3 = *(int **)(param_1[0x10] + 0x14);
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      piVar3 = (int *)piVar3[2];
      piVar5 = piVar3 + iVar1 + -1;
      while (piVar3 <= piVar5) {
        iVar1 = *piVar3;
        piVar3 = piVar3 + 1;
        if (iVar1 == 0) {
          return;
        }
        uVar4 = *(undefined4 *)(DAT_0014d1bc + 0x14d1a2);
        iVar1 = __dynamic_cast(iVar1,*(undefined4 *)(DAT_0014d1c0 + 0x14d1a6),uVar4,0);
        if ((iVar1 != 0) &&
           (puVar2 = (undefined4 *)
                     __dynamic_cast(iVar1,uVar4,*(undefined4 *)(DAT_0014d1b8 + 0x14d178),0xfffffffe)
           , puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(puVar2,param_1 + 0x45);
        }
      }
    }
  }
  return;
}


