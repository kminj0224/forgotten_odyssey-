/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010f4a4  Symbol: Option */

/* New_UI::Option() */

void New_UI::Option(void)

{
  int *in_r0;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0x30);
  if (iVar1 == 0) {
    uVar2 = GameOption::node();
    (**(code **)(*in_r0 + 0xcc))(in_r0,uVar2,0x30,0x30);
    **(undefined4 **)(DAT_0010f4d4 + 0x10f4ce) = 0x10;
  }
  return;
}


