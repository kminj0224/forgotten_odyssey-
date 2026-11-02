/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142f08  Symbol: CCRectApplyAffineTransform */

/* cocos2d::CCRectApplyAffineTransform(cocos2d::CCRect const&, cocos2d::CCAffineTransform const&) */

cocos2d * __thiscall
cocos2d::CCRectApplyAffineTransform(cocos2d *this,CCRect *param_1,CCAffineTransform *param_2)

{
  int iVar1;
  CCRect *extraout_r1;
  CCRect *extraout_r1_00;
  CCRect *extraout_r1_01;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s3;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  CCPoint aCStack_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  CCPoint aCStack_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  CCPoint aCStack_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [3];
  
  CCRect::CCRectGetMinY((CCRect *)param_1,param_1);
  CCRect::CCRectGetMinX((CCRect *)param_1,extraout_r1);
  CCRect::CCRectGetMaxX((CCRect *)param_1,extraout_r1_00);
  uVar4 = CCRect::CCRectGetMaxY((CCRect *)param_1,extraout_r1_01);
  CCPoint::CCPoint((CCPoint *)aCStack_50,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = __CCPointApplyAffineTransform((cocos2d *)&local_58,aCStack_50,param_2);
  CCPoint::CCPoint((CCPoint *)aCStack_40,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = __CCPointApplyAffineTransform((cocos2d *)&local_48,aCStack_40,param_2);
  CCPoint::CCPoint((CCPoint *)aCStack_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = __CCPointApplyAffineTransform((cocos2d *)&local_38,aCStack_30,param_2);
  CCPoint::CCPoint((CCPoint *)aCStack_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  __CCPointApplyAffineTransform((cocos2d *)&local_28,aCStack_20,param_2);
  iVar1 = __aeabi_fcmplt(local_48,local_58);
  local_6c = local_48;
  if (iVar1 == 0) {
    local_6c = local_58;
  }
  iVar1 = __aeabi_fcmplt(local_28,local_38);
  local_68 = local_28;
  if (iVar1 == 0) {
    local_68 = local_38;
  }
  iVar1 = __aeabi_fcmplt(local_68,local_6c);
  if (iVar1 != 0) {
    local_6c = local_68;
  }
  iVar1 = __aeabi_fcmplt(local_58,local_48);
  uVar2 = local_58;
  if (iVar1 != 0) {
    uVar2 = local_48;
  }
  iVar1 = __aeabi_fcmplt(local_38,local_28);
  if (iVar1 != 0) {
    local_38 = local_28;
  }
  iVar1 = __aeabi_fcmplt(uVar2,local_38);
  local_60 = local_38;
  if (iVar1 == 0) {
    local_60 = uVar2;
  }
  iVar1 = __aeabi_fcmplt(local_44,local_54);
  uVar2 = local_44;
  if (iVar1 == 0) {
    uVar2 = local_54;
  }
  iVar1 = __aeabi_fcmplt(local_24,local_34);
  local_64 = local_24;
  if (iVar1 == 0) {
    local_64 = local_34;
  }
  iVar1 = __aeabi_fcmplt(local_64,uVar2);
  if (iVar1 != 0) {
    uVar2 = local_64;
  }
  iVar1 = __aeabi_fcmplt(local_54,local_44);
  uVar3 = local_54;
  if (iVar1 != 0) {
    uVar3 = local_44;
  }
  iVar1 = __aeabi_fcmplt(local_34,local_24);
  if (iVar1 != 0) {
    local_34 = local_24;
  }
  iVar1 = __aeabi_fcmplt(uVar3,local_34);
  if (iVar1 == 0) {
    local_34 = uVar3;
  }
  __subsf3(local_60,local_6c);
  uVar4 = __subsf3(local_34,uVar2);
  CCRect::CCRect((CCRect *)this,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2,
                 extraout_s3);
  return this;
}


