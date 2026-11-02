/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011c5fc  Symbol: BaceImg */

/* New_Notice::BaceImg(std::basic_string<char, std::char_traits<char>, std::allocator<char> >) */

void New_Notice::BaceImg(basic_string param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  _ccColor4B local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  CCPoint local_20;
  CCPoint local_1c;
  int local_18;
  int local_14;
  
  local_24 = (_ccColor4B)0x0;
  local_23 = 0;
  local_22 = 0;
  local_21 = 0x7f;
  uVar1 = cocos2d::CCLayerColor::layerWithColor(&local_24);
  uVar2 = (**(code **)(*(int *)param_1 + 0xcc))(param_1,uVar1,0,0);
  uVar2 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  vDrawFrame((CCNode *)param_1,(char *)(DAT_0011c664 + 0x11c64a),local_20,local_1c,local_18,local_14
            );
  return;
}


