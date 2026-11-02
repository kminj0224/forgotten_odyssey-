/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d309a  Symbol: removeFile */

/* SkillTreeLayer::removeFile() */

void SkillTreeLayer::removeFile(void)

{
  int *in_r0;
  CCArray *this;
  undefined4 uVar1;
  int iVar2;
  
  this = (CCArray *)(**(code **)(*in_r0 + 0x58))();
  if (this != (CCArray *)0x0) {
    while (iVar2 = cocos2d::CCArray::count(this), iVar2 != 0) {
      uVar1 = cocos2d::CCArray::objectAtIndex(this,0);
      (**(code **)(*in_r0 + 0xd0))(in_r0,uVar1,1);
    }
  }
  return;
}


