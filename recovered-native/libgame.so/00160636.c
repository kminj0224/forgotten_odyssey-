/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160636  Symbol: draw */

/* cocos2d::CCTextFieldTTF::draw() */

undefined8 cocos2d::CCTextFieldTTF::draw(void)

{
  int *in_r0;
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 in_r1;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined uStack_11;
  
  local_14 = (undefined)in_r1;
  local_13 = (undefined)((uint)in_r1 >> 8);
  local_12 = (undefined)((uint)in_r1 >> 0x10);
  uStack_11 = (undefined)((uint)in_r1 >> 0x18);
  piVar1 = (int *)in_r0[0x7a];
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,in_r0), iVar2 == 0)) {
    if (*(int *)(*(int *)in_r0[0x7d] + -0xc) == 0) {
      puVar3 = (undefined *)(**(code **)(*in_r0 + 0xf0))(in_r0);
      local_14 = *puVar3;
      local_13 = puVar3[1];
      local_12 = puVar3[2];
      (**(code **)(*in_r0 + 0xf4))(in_r0,in_r0 + 0x7c);
      CCSprite::draw();
      (**(code **)(*in_r0 + 0xf4))(in_r0,&local_14);
    }
    else {
      CCSprite::draw();
    }
  }
  return CONCAT17(uStack_11,CONCAT16(local_12,CONCAT15(local_13,CONCAT14(local_14,in_r0))));
}


