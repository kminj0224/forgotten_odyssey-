/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e6c38  Symbol: removeChildLayer */

/* MarketLayer::removeChildLayer() */

void MarketLayer::removeChildLayer(void)

{
  int *in_r0;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_000e6d20 + 0xe6c44;
  if (**(int **)(iVar2 + DAT_000e6d24) != 0) {
    **(undefined4 **)(iVar2 + DAT_000e6d28) = 0;
  }
  if (*(char *)(in_r0 + 0x4a) != '\0') {
    piVar3 = *(int **)(iVar2 + DAT_000e6d2c);
    if (((*piVar3 != 0) && (in_r0[0x4b] == 2)) &&
       (iVar1 = cocos2d::CCNode::numberOfRunningActions(), iVar1 == 0)) {
      (**(code **)(*in_r0 + 0xd0))(in_r0,*piVar3,1);
      *piVar3 = 0;
      *(undefined *)(in_r0 + 0x4a) = 0;
    }
    piVar3 = *(int **)(iVar2 + DAT_000e6d30);
    if (((*piVar3 != 0) && ((in_r0[0x4b] == 4 || (in_r0[0x4b] == 1)))) &&
       (iVar1 = cocos2d::CCNode::numberOfRunningActions(), iVar1 == 0)) {
      (**(code **)(*in_r0 + 0xd0))(in_r0,*piVar3,1);
      *piVar3 = 0;
      *(undefined *)(in_r0 + 0x4a) = 0;
    }
    piVar3 = *(int **)(iVar2 + DAT_000e6d34);
    if ((*piVar3 != 0) && (iVar1 = cocos2d::CCNode::numberOfRunningActions(), iVar1 == 0)) {
      (**(code **)(*in_r0 + 0xd0))(in_r0,*piVar3,1);
      *piVar3 = 0;
      *(undefined *)(in_r0 + 0x4a) = 0;
    }
    piVar3 = *(int **)(iVar2 + DAT_000e6d38);
    if (((*piVar3 != 0) && (in_r0[0x4b] == 2)) &&
       (iVar2 = cocos2d::CCNode::numberOfRunningActions(), iVar2 == 0)) {
      (**(code **)(*in_r0 + 0xd0))(in_r0,*piVar3,1);
      *piVar3 = 0;
      *(undefined *)(in_r0 + 0x4a) = 0;
    }
  }
  return;
}


