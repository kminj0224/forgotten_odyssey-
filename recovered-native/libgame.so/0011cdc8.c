/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011cdc8  Symbol: Coupon_call */

/* New_Notice::Coupon_call() */

void __thiscall New_Notice::Coupon_call(New_Notice *this)

{
  CCNode *this_00;
  int *piVar1;
  undefined4 uVar2;
  undefined auStack_58 [4];
  undefined4 local_54 [14];
  undefined4 local_1c;
  
  local_1c = **(undefined4 **)(DAT_0011cebc + 0x11cdd4);
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,7);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(this_00,1);
  uVar2 = (**(code **)(*piVar1 + 0x120))();
  FUN_001eed40(local_54,uVar2,auStack_58);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(DAT_0011cec0 + 0x11ce00),local_54[0]);
}


