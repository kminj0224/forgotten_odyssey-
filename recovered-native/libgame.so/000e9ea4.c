/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9ea4  Symbol: _INIT_29 */

undefined8 _INIT_29(float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  CCPoint **ppCVar3;
  CCPoint *this;
  CCRect **ppCVar4;
  CCRect *this_00;
  undefined8 uVar5;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s2_07;
  float extraout_s2_08;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float extraout_s3_06;
  float extraout_s3_07;
  float extraout_s3_08;
  
  iVar1 = DAT_000ea00c;
  uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000ea00c + 0xe9eb0),param_1,param_2);
  uVar5 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xe9eb8),(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xe9ec0),(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xe9ed0);
  ppCVar3 = (CCPoint **)(DAT_000ea018 + 0xe9ef0);
  uVar5 = FUN_00201240(iVar1 + 0xe9ed0,*(undefined4 *)(DAT_000ea010 + 0xe9ee8),
                       *(undefined4 *)(DAT_000ea014 + 0xe9eea));
  this = *ppCVar3;
  uVar5 = cocos2d::CCPoint::CCPoint(this,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  uVar5 = cocos2d::CCPoint::CCPoint(this + 8,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  uVar5 = cocos2d::CCPoint::CCPoint(this + 0x10,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  uVar5 = cocos2d::CCPoint::CCPoint(this + 0x18,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  uVar5 = cocos2d::CCPoint::CCPoint(this + 0x20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  uVar5 = cocos2d::CCPoint::CCPoint(this + 0x28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  uVar5 = cocos2d::CCPoint::CCPoint(this + 0x30,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  uVar5 = cocos2d::CCPoint::CCPoint(this + 0x38,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  ppCVar4 = (CCRect **)(DAT_000ea034 + 0xe9f6a);
  uVar5 = cocos2d::CCPoint::CCPoint(this + 0x40,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  this_00 = *ppCVar4;
  uVar5 = cocos2d::CCRect::CCRect
                    (this_00,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_00,
                     extraout_s3_00);
  uVar5 = cocos2d::CCRect::CCRect
                    (this_00 + 0x10,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_01,
                     extraout_s3_01);
  uVar5 = cocos2d::CCRect::CCRect
                    (this_00 + 0x20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_02,
                     extraout_s3_02);
  uVar5 = cocos2d::CCRect::CCRect
                    (this_00 + 0x30,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_03,
                     extraout_s3_03);
  uVar5 = cocos2d::CCRect::CCRect
                    (this_00 + 0x40,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_04,
                     extraout_s3_04);
  uVar2 = DAT_000ea064;
  uVar5 = cocos2d::CCRect::CCRect
                    (this_00 + 0x50,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_05,
                     extraout_s3_05);
  uVar5 = cocos2d::CCRect::CCRect
                    (this_00 + 0x60,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_06,
                     extraout_s3_06);
  uVar5 = cocos2d::CCRect::CCRect
                    (this_00 + 0x70,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_07,
                     extraout_s3_07);
  cocos2d::CCRect::CCRect
            (this_00 + 0x80,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_08,
             extraout_s3_08);
  return CONCAT44(param_4,uVar2);
}


