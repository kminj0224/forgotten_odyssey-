/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163872  Symbol: absolutePosition */

/* cocos2d::CCParallaxNode::absolutePosition() */

undefined8 cocos2d::CCParallaxNode::absolutePosition(void)

{
  int *in_r0;
  undefined4 *puVar1;
  int iVar2;
  int *in_r1;
  undefined8 uVar3;
  int *local_20;
  int *local_1c;
  
  *in_r0 = in_r1[10];
  in_r0[1] = in_r1[0xb];
  local_20 = in_r0;
  local_1c = in_r1;
  while (iVar2 = (**(code **)(*in_r1 + 0x90))(in_r1), iVar2 != 0) {
    in_r1 = (int *)(**(code **)(*in_r1 + 0x90))(in_r1);
    puVar1 = (undefined4 *)(**(code **)(*in_r1 + 0x38))();
    __addsf3(*in_r0,*puVar1);
    uVar3 = __addsf3(in_r0[1],puVar1[1]);
    CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
    *in_r0 = (int)local_20;
    in_r0[1] = (int)local_1c;
  }
  return CONCAT44(local_20,in_r0);
}


