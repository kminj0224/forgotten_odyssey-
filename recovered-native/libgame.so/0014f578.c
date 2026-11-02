/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f578  Symbol: _INIT_110 */

void _INIT_110(float param_1,float param_2)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  undefined auStack_14 [8];
  
  iVar1 = DAT_0014f5d0;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0014f5d0 + 0x14f58c),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x14f594),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x14f59c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001eed40(iVar1 + 0x14f588,DAT_0014f5d4 + 0x14f5b6,auStack_14);
  FUN_00201240(iVar1 + 0x14f588,*(undefined4 *)(DAT_0014f5d8 + 0x14f5c2),
               *(undefined4 *)(DAT_0014f5dc + 0x14f5c4));
  return;
}


