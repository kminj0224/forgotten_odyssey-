/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00131d48  Symbol: Lode_Character */

/* Ending_Layer::Lode_Character() */

void __thiscall Ending_Layer::Lode_Character(Ending_Layer *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Ending_Layer *pEVar4;
  int iVar5;
  
  pEVar4 = (Ending_Layer *)(DAT_00131f70 + 0x131d54);
  iVar5 = *(int *)(pEVar4 + DAT_00131f78);
  iVar2 = *(int *)(this + 0x128);
  iVar1 = *(int *)(iVar5 + 0x10);
  if ((iVar2 == iVar1) && (iVar2 != -1)) {
    pEVar4 = *(Ending_Layer **)(this + 0x130);
    if ((pEVar4 != *(Ending_Layer **)(iVar5 + 0x1c)) &&
       (*(Ending_Layer **)(iVar5 + 0x1c) != (Ending_Layer *)0xffffffff)) {
      iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,1);
      if (iVar1 == 0) {
        FUN_00132618();
      }
      iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,2);
      if (iVar1 == 0) {
        FUN_00132618();
      }
      *(undefined4 *)(this + 0x138) = 5;
      goto LAB_00131e1a;
    }
  }
  iVar5 = *(int *)(iVar5 + 0x1c);
  if (((iVar2 == iVar5) && (iVar1 != -1)) && (pEVar4 = this + 0xfc, *(int *)(this + 0x130) != iVar1)
     ) {
    if (iVar2 == -1) goto LAB_00131de0;
    uVar3 = 2;
LAB_00131df4:
    *(undefined4 *)(this + 0x138) = uVar3;
    goto LAB_00131e1a;
  }
  if (iVar2 == iVar1) {
    if (iVar2 + 1 != 0) {
      if ((*(int *)(this + 0x130) != iVar5) && (iVar5 == -1)) {
        FUN_00131e18(iVar2 + 1,*(int *)(this + 0x130),3);
        return;
      }
      goto LAB_00131e1a;
    }
LAB_00131de0:
    pEVar4 = this + 0xfc;
    if (*(int *)(this + 0x130) != -1) goto LAB_00131df8;
    if (iVar1 == -1) goto LAB_00131e1a;
    if (iVar5 != -1) {
      uVar3 = 4;
      goto LAB_00131df4;
    }
  }
  else {
    if (iVar2 == -1) goto LAB_00131de0;
LAB_00131df8:
    if ((iVar2 == iVar1) || (iVar1 == -1)) goto LAB_00131e1a;
  }
  if (*(int *)(this + 0x130) == iVar5) {
    if (iVar5 != -1) {
      FUN_00131e18(pEVar4,*(int *)(this + 0x130),6);
      return;
    }
  }
  else if (iVar5 != -1) {
    *(undefined4 *)(this + 0x138) = 4;
  }
LAB_00131e1a:
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(DAT_00131f7c + 0x131e26),*(undefined4 *)(this + 0x138));
}


