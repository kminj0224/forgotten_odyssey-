/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012fa48  Symbol: Lode_Character */

/* Story_Layer::Lode_Character() */

void __thiscall Story_Layer::Lode_Character(Story_Layer *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Story_Layer *pSVar4;
  int iVar5;
  
  pSVar4 = (Story_Layer *)(DAT_0012fc70 + 0x12fa54);
  iVar5 = *(int *)(pSVar4 + DAT_0012fc78);
  iVar2 = *(int *)(this + 0x128);
  iVar1 = *(int *)(iVar5 + 0x10);
  if ((iVar2 == iVar1) && (iVar2 != -1)) {
    pSVar4 = *(Story_Layer **)(this + 0x130);
    if ((pSVar4 != *(Story_Layer **)(iVar5 + 0x1c)) &&
       (*(Story_Layer **)(iVar5 + 0x1c) != (Story_Layer *)0xffffffff)) {
      iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,1);
      if (iVar1 == 0) {
        FUN_00130318();
      }
      iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,2);
      if (iVar1 == 0) {
        FUN_00130318();
      }
      *(undefined4 *)(this + 0x138) = 5;
      goto LAB_0012fb1a;
    }
  }
  iVar5 = *(int *)(iVar5 + 0x1c);
  if (((iVar2 == iVar5) && (iVar1 != -1)) && (pSVar4 = this + 0xfc, *(int *)(this + 0x130) != iVar1)
     ) {
    if (iVar2 == -1) goto LAB_0012fae0;
    uVar3 = 2;
LAB_0012faf4:
    *(undefined4 *)(this + 0x138) = uVar3;
    goto LAB_0012fb1a;
  }
  if (iVar2 == iVar1) {
    if (iVar2 + 1 != 0) {
      if ((*(int *)(this + 0x130) != iVar5) && (iVar5 == -1)) {
        FUN_0012fb18(iVar2 + 1,*(int *)(this + 0x130),3);
        return;
      }
      goto LAB_0012fb1a;
    }
LAB_0012fae0:
    pSVar4 = this + 0xfc;
    if (*(int *)(this + 0x130) != -1) goto LAB_0012faf8;
    if (iVar1 == -1) goto LAB_0012fb1a;
    if (iVar5 != -1) {
      uVar3 = 4;
      goto LAB_0012faf4;
    }
  }
  else {
    if (iVar2 == -1) goto LAB_0012fae0;
LAB_0012faf8:
    if ((iVar2 == iVar1) || (iVar1 == -1)) goto LAB_0012fb1a;
  }
  if (*(int *)(this + 0x130) == iVar5) {
    if (iVar5 != -1) {
      FUN_0012fb18(pSVar4,*(int *)(this + 0x130),6);
      return;
    }
  }
  else if (iVar5 != -1) {
    *(undefined4 *)(this + 0x138) = 4;
  }
LAB_0012fb1a:
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(DAT_0012fc7c + 0x12fb26),*(undefined4 *)(this + 0x138));
}


