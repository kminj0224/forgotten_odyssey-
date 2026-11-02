/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142e60  Symbol: __CCSizeApplyAffineTransform */

/* cocos2d::__CCSizeApplyAffineTransform(cocos2d::CCSize const&, cocos2d::CCAffineTransform const&)
    */

cocos2d * __thiscall
cocos2d::__CCSizeApplyAffineTransform(cocos2d *this,CCSize *param_1,CCAffineTransform *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  CCSize::CCSize((CCSize *)this);
  uVar4 = __extendsfdf2(*param_1);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar5 = __extendsfdf2(param_1[1]);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar6 = __extendsfdf2(*(undefined4 *)param_2);
  uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar4,uVar2);
  uVar7 = __extendsfdf2(*(undefined4 *)(param_2 + 8));
  uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar5,uVar3);
  __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar1 = __truncdfsf2();
  *(undefined4 *)this = uVar1;
  uVar6 = __extendsfdf2(*(undefined4 *)(param_2 + 4));
  uVar4 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar4,uVar2);
  uVar6 = __extendsfdf2(*(undefined4 *)(param_2 + 0xc));
  uVar5 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,uVar3);
  __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  uVar1 = __truncdfsf2();
  *(undefined4 *)(this + 4) = uVar1;
  return this;
}


