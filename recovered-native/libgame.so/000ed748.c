/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ed748  Symbol: _INIT_31 */

undefined8 _INIT_31(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  CCPoint **ppCVar4;
  CCPoint *this;
  CCRect **ppCVar5;
  CCRect *this_00;
  undefined8 uVar6;
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
  float extraout_s2_09;
  float extraout_s2_10;
  float extraout_s2_11;
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
  float extraout_s3_09;
  float extraout_s3_10;
  float extraout_s3_11;
  
  iVar1 = DAT_000ed900;
  iVar3 = DAT_000ed900 + 0xed754;
  FUN_001c4bb4(iVar3);
  uVar6 = FUN_00201240(iVar3,*(undefined4 *)(DAT_000ed908 + 0xed762),
                       *(undefined4 *)(DAT_000ed90c + 0xed764));
  uVar6 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0xed758),(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xed760),(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  ppCVar4 = (CCPoint **)(DAT_000ed910 + 0xed790);
  uVar6 = cocos2d::CCRect::CCRect
                    ((CCRect *)(iVar1 + 0xed768),(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),
                     extraout_s2,extraout_s3);
  this = *ppCVar4;
  uVar6 = cocos2d::CCPoint::CCPoint(this,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 8,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x10,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x18,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x40,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x48,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x50,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  ppCVar5 = (CCRect **)(DAT_000ed92c + 0xed82e);
  uVar6 = cocos2d::CCPoint::CCPoint(this + 0x58,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  this_00 = *ppCVar5;
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_00,
                     extraout_s3_00);
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0x10,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_01,
                     extraout_s3_01);
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0x20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_02,
                     extraout_s3_02);
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0x30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_03,
                     extraout_s3_03);
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0x40,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_04,
                     extraout_s3_04);
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0x50,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_05,
                     extraout_s3_05);
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0x60,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_06,
                     extraout_s3_06);
  uVar2 = DAT_000ed964;
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0x70,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_07,
                     extraout_s3_07);
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0x80,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_08,
                     extraout_s3_08);
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0x90,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_09,
                     extraout_s3_09);
  uVar6 = cocos2d::CCRect::CCRect
                    (this_00 + 0xa0,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_10,
                     extraout_s3_10);
  cocos2d::CCRect::CCRect
            (this_00 + 0xb0,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_11,
             extraout_s3_11);
  return CONCAT44(param_2,uVar2);
}


