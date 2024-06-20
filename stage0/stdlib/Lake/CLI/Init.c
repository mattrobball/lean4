// Lean compiler output
// Module: Lake.CLI.Init
// Imports: Init Lake.Util.Git Lake.Util.Sugar Lake.Config.Lang Lake.Config.Package Lake.Config.Workspace Lake.Load.Config Lake.Build.Actions
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_defaultExeRoot;
static lean_object* l_Lake_initPkg___lambda__3___closed__6;
lean_object* lean_format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_mathToolchainUrl___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400_(uint8_t, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__7;
lean_object* l_instBEqOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
static lean_object* l_Lake_stdLeanConfigFileContents___closed__3;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4___boxed__const__1;
static lean_object* l_Lake_escapeName_x21___closed__1;
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*, lean_object*);
static lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lake_init___lambda__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__11;
static lean_object* l_Lake_mainFileName___closed__3;
LEAN_EXPORT lean_object* l_Lake_initPkg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
extern lean_object* l_Lake_defaultTomlConfigFile;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__8;
LEAN_EXPORT lean_object* l_Lake_libRootFileContents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_toolchainFileName;
static lean_object* l_Lake_validatePkgName___lambda__1___closed__1;
static lean_object* l_Lake_mainFileContents___closed__2;
static lean_object* l_Lake_defaultExeRoot___closed__1;
static lean_object* l_Lake_escapeName_x21___closed__3;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__1;
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion___rarg___lambda__1(lean_object*);
static lean_object* l_Lake_validatePkgName___lambda__1___closed__4;
static lean_object* l_Lake_initPkg___lambda__2___closed__6;
LEAN_EXPORT lean_object* l_Lake_validatePkgName___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
static lean_object* l_Lake_stdTomlConfigFileContents___closed__5;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
LEAN_EXPORT uint8_t l_String_anyAux___at_Lake_validatePkgName___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_stdTomlConfigFileContents___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__14;
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion(lean_object*);
static lean_object* l_Lake_stdTomlConfigFileContents___closed__4;
static lean_object* l_Lake_gitignoreContents___closed__5;
lean_object* l_instDecidableEqChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_escapeName_x21___boxed(lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* l_Lake_download(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__12;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____boxed(lean_object*, lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
static lean_object* l_Lake_mainFileName___closed__4;
static lean_object* l_Lake_initPkg___lambda__2___closed__4;
LEAN_EXPORT lean_object* l_Lake_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprInitTemplate;
static lean_object* l_Lake_mathLeanConfigFileContents___closed__2;
static lean_object* l_Lake_initPkg___lambda__7___closed__1;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__16;
static lean_object* l_Lake_validatePkgName___lambda__1___closed__5;
static lean_object* l_Lake_InitTemplate_ofString_x3f___closed__4;
LEAN_EXPORT lean_object* l_Lake_InitTemplate_ofString_x3f___boxed(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__17;
extern uint32_t l_Lean_idBeginEscape;
static lean_object* l_Lake_basicFileContents___closed__1;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lake_InitTemplate_ofString_x3f___closed__3;
lean_object* l_System_FilePath_pathExists(lean_object*, lean_object*);
static lean_object* l_Lake_libLeanConfigFileContents___closed__2;
lean_object* lean_string_utf8_byte_size(lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__3;
lean_object* lean_string_push(lean_object*, uint32_t);
extern lean_object* l_Lake_defaultLeanConfigFile;
LEAN_EXPORT uint8_t l_Lake_instInhabitedInitTemplate;
LEAN_EXPORT lean_object* l_Lake_mathToolchainUrl;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__22;
lean_object* l_IO_FS_createDirAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mathTomlConfigFileContents___boxed(lean_object*, lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__17;
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_InitTemplate_ofString_x3f___closed__8;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__12;
static lean_object* l_Lake_stdTomlConfigFileContents___closed__3;
uint8_t l_String_isEmpty(lean_object*);
static lean_object* l_Lake_InitTemplate_configFileContents___closed__1;
static lean_object* l_Lake_toolchainFileName___closed__1;
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_validatePkgName___lambda__1___closed__7;
static lean_object* l_Lake_escapeName_x21___closed__4;
static lean_object* l_Lake_exeTomlConfigFileContents___closed__1;
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InitTemplate_configFileContents(uint8_t, uint8_t, lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__11;
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqInitTemplate___boxed(lean_object*, lean_object*);
lean_object* l_System_FilePath_isDir(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_gitignoreContents;
LEAN_EXPORT lean_object* l_Lake_escapeIdent___boxed(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_Lake_initPkg___lambda__7___closed__2;
static lean_object* l_Lake_validatePkgName___lambda__1___closed__3;
static lean_object* l_Lake_initPkg___lambda__2___closed__14;
static lean_object* l_Lake_initPkg___lambda__2___closed__18;
static lean_object* l_Lake_instReprInitTemplate___closed__1;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__5;
static lean_object* l_Lake_validatePkgName___lambda__1___closed__10;
static lean_object* l_Lake_initPkg___lambda__2___closed__2;
LEAN_EXPORT lean_object* l_Lake_libTomlConfigFileContents___boxed(lean_object*, lean_object*);
lean_object* l_String_mapAux___at_String_toLower___spec__1(lean_object*, lean_object*);
static lean_object* l_Lake_mathLeanConfigFileContents___closed__1;
static uint8_t l_Lake_initPkg___lambda__2___closed__13;
lean_object* l_Lake_stringToLegalOrSimpleName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_readmeFileContents___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__20;
static lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__1;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__21;
static lean_object* l_Lake_initPkg___lambda__2___closed__10;
LEAN_EXPORT lean_object* l_Lake_InitTemplate_ofNat___boxed(lean_object*);
lean_object* l_System_FilePath_fileName(lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__13;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__2;
static lean_object* l_Lake_gitignoreContents___closed__2;
LEAN_EXPORT lean_object* l_Lake_mainFileName;
static lean_object* l_Lake_InitTemplate_ofString_x3f___closed__5;
static lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__2;
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__6(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__15;
lean_object* l_System_FilePath_parent(lean_object*);
lean_object* l_panic___at_String_fromUTF8_x21___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_stdLeanConfigFileContents(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__9;
LEAN_EXPORT lean_object* l_Lake_validatePkgName___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_init___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_validatePkgName___closed__1;
static lean_object* l_Lake_initPkg___lambda__3___closed__2;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Lake_stdLeanConfigFileContents___closed__2;
LEAN_EXPORT lean_object* l_Lake_initPkg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_InitTemplate_ofString_x3f___closed__1;
static lean_object* l_Lake_InitTemplate_noConfusion___rarg___closed__1;
static lean_object* l_Lake_exeLeanConfigFileContents___closed__2;
static lean_object* l_Lake_readmeFileContents___closed__1;
static lean_object* l_Lake_validatePkgName___lambda__1___closed__8;
uint8_t l_List_elem___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_InitTemplate_ofString_x3f___closed__6;
LEAN_EXPORT lean_object* l_Lake_exeLeanConfigFileContents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_escapeIdent(lean_object*);
static lean_object* l_Lake_escapeName_x21___closed__5;
static lean_object* l_Lake_initPkg___closed__1;
extern lean_object* l_Std_Format_defWidth;
LEAN_EXPORT lean_object* l_Lake_basicFileContents;
static lean_object* l_Lake_initPkg___lambda__1___closed__1;
static lean_object* l_Lake_initPkg___lambda__2___closed__8;
static lean_object* l_Lake_stdLeanConfigFileContents___closed__1;
static lean_object* l_Lake_stdTomlConfigFileContents___closed__1;
static lean_object* l_Lake_escapeIdent___closed__2;
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_mainFileName___closed__1;
LEAN_EXPORT lean_object* l_Lake_init___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_InitTemplate_ofString_x3f___closed__2;
static lean_object* l_Lake_initPkg___lambda__2___closed__7;
static lean_object* l_Lake_initPkg___lambda__2___closed__19;
LEAN_EXPORT lean_object* l_Lake_mathLeanConfigFileContents___boxed(lean_object*, lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lake_libLeanConfigFileContents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_escapeName_x21___closed__6;
LEAN_EXPORT uint8_t l_String_anyAux___at_Lake_validatePkgName___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__25;
static lean_object* l_Lake_initPkg___lambda__6___closed__1;
extern uint32_t l_Lean_idEndEscape;
static lean_object* l_Lake_stdTomlConfigFileContents___closed__2;
LEAN_EXPORT lean_object* l_Lake_exeLeanConfigFileContents___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__18;
static lean_object* l_Lake_escapeIdent___closed__1;
static lean_object* l_Lake_validatePkgName___closed__2;
LEAN_EXPORT lean_object* l_Lake_InitTemplate_configFileContents___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_initPkg___lambda__3___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_new(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_Lake_gitignoreContents___closed__3;
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__20;
static lean_object* l_Lake_validatePkgName___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Lake_exeFileContents;
LEAN_EXPORT lean_object* l_Lake_mathLeanConfigFileContents(lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__23;
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__7(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_realpath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_validatePkgName(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__9;
LEAN_EXPORT lean_object* l_Lake_stdLeanConfigFileContents___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__26;
static lean_object* l_Lake_gitignoreContents___closed__1;
static lean_object* l_Lake_exeFileContents___closed__1;
LEAN_EXPORT lean_object* l_Lake_libRootFileContents___boxed(lean_object*, lean_object*);
static lean_object* l_Lake_validatePkgName___lambda__1___closed__6;
LEAN_EXPORT lean_object* l_String_mapAux___at_Lake_new___spec__1(lean_object*, lean_object*);
static lean_object* l_Lake_libRootFileContents___closed__3;
LEAN_EXPORT lean_object* l_Lake_stdTomlConfigFileContents(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__4;
LEAN_EXPORT lean_object* l_Lake_mainFileContents(lean_object*);
static lean_object* l_Lake_mathTomlConfigFileContents___closed__1;
LEAN_EXPORT lean_object* l_Lake_InitTemplate_ofString_x3f(lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__19;
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_Lake_libRootFileContents___closed__1;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__24;
static lean_object* l_Lake_initPkg___lambda__3___closed__3;
LEAN_EXPORT lean_object* l_Lake_init(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__16;
lean_object* l_Lake_toUpperCamelCase(lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__5;
LEAN_EXPORT lean_object* l_Lake_escapeName_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lake_libLeanConfigFileContents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_libTomlConfigFileContents(lean_object*, lean_object*);
lean_object* l_Lake_Env_toolchain(lean_object*);
static lean_object* l_Lake_libRootFileContents___closed__2;
static lean_object* l_Lake_mainFileName___closed__5;
LEAN_EXPORT lean_object* l_Lake_readmeFileContents(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
static lean_object* l_Lake_initPkg___lambda__2___closed__15;
static lean_object* l_Lake_stdLeanConfigFileContents___closed__4;
LEAN_EXPORT lean_object* l_Lake_exeTomlConfigFileContents(lean_object*, lean_object*);
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__3;
lean_object* l_Lean_modToFilePath(lean_object*, lean_object*, lean_object*);
static lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4;
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_validatePkgName___lambda__1___closed__9;
static lean_object* l_Lake_mainFileName___closed__2;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqInitTemplate(uint8_t, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mainFileContents___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_InitTemplate_ofNat(lean_object*);
static lean_object* l_Lake_mainFileContents___closed__1;
static lean_object* l_Lake_exeLeanConfigFileContents___closed__1;
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion___rarg(uint8_t, uint8_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_libLeanConfigFileContents___closed__1;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Lake_initPkg___lambda__3___closed__5;
LEAN_EXPORT lean_object* l_Lake_exeTomlConfigFileContents___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep(lean_object*, uint8_t, lean_object*);
static lean_object* l_Lake_init___closed__1;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__10;
static lean_object* l_Lake_initPkg___lambda__3___closed__4;
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_gitignoreContents___closed__4;
static lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__6;
static lean_object* l_Lake_InitTemplate_ofString_x3f___closed__7;
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InitTemplate_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_mathTomlConfigFileContents(lean_object*, lean_object*);
static lean_object* l_Lake_escapeName_x21___closed__2;
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InitTemplate_toCtorIdx(uint8_t);
static lean_object* l_Lake_defaultExeRoot___closed__2;
extern lean_object* l_Lake_Git_upstreamBranch;
static lean_object* _init_l_Lake_defaultExeRoot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Main", 4);
return x_1;
}
}
static lean_object* _init_l_Lake_defaultExeRoot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lake_defaultExeRoot___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_defaultExeRoot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_defaultExeRoot___closed__2;
return x_1;
}
}
static lean_object* _init_l_Lake_toolchainFileName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("lean-toolchain", 14);
return x_1;
}
}
static lean_object* _init_l_Lake_toolchainFileName() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_toolchainFileName___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lake_gitignoreContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("/", 1);
return x_1;
}
}
static lean_object* _init_l_Lake_gitignoreContents___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(".lake", 5);
return x_1;
}
}
static lean_object* _init_l_Lake_gitignoreContents___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_gitignoreContents___closed__1;
x_2 = l_Lake_gitignoreContents___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_gitignoreContents___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\n", 1);
return x_1;
}
}
static lean_object* _init_l_Lake_gitignoreContents___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_gitignoreContents___closed__3;
x_2 = l_Lake_gitignoreContents___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_gitignoreContents() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_gitignoreContents___closed__5;
return x_1;
}
}
static lean_object* _init_l_Lake_basicFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("def hello := \"world\"", 20);
return x_1;
}
}
static lean_object* _init_l_Lake_basicFileContents() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_basicFileContents___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lake_libRootFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("-- This module serves as the root of the `", 42);
return x_1;
}
}
static lean_object* _init_l_Lake_libRootFileContents___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("` library.\n-- Import modules here that should be built as part of the library.\nimport ", 86);
return x_1;
}
}
static lean_object* _init_l_Lake_libRootFileContents___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(".Basic", 6);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_libRootFileContents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Lake_libRootFileContents___closed__1;
x_4 = lean_string_append(x_3, x_1);
x_5 = l_Lake_libRootFileContents___closed__2;
x_6 = lean_string_append(x_4, x_5);
x_7 = lean_string_append(x_6, x_2);
x_8 = l_Lake_libRootFileContents___closed__3;
x_9 = lean_string_append(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lake_libRootFileContents___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_libRootFileContents(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_mainFileName___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lake_defaultExeRoot;
x_2 = 1;
x_3 = l_Lean_Name_toString(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_mainFileName___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_Lake_mainFileName___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_mainFileName___closed__2;
x_2 = l_Lake_mainFileName___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_mainFileName___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(".lean", 5);
return x_1;
}
}
static lean_object* _init_l_Lake_mainFileName___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_mainFileName___closed__3;
x_2 = l_Lake_mainFileName___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_mainFileName() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_mainFileName___closed__5;
return x_1;
}
}
static lean_object* _init_l_Lake_mainFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("import ", 7);
return x_1;
}
}
static lean_object* _init_l_Lake_mainFileContents___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\n\ndef main : IO Unit :=\n  IO.println s!\"Hello, {hello}!\"\n", 57);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_mainFileContents(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lake_mainFileContents___closed__1;
x_3 = lean_string_append(x_2, x_1);
x_4 = l_Lake_mainFileContents___closed__2;
x_5 = lean_string_append(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_mainFileContents___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_mainFileContents(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_exeFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("def main : IO Unit :=\n  IO.println s!\"Hello, world!\"\n", 53);
return x_1;
}
}
static lean_object* _init_l_Lake_exeFileContents() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_exeFileContents___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lake_stdLeanConfigFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("import Lake\nopen Lake DSL\n\npackage ", 35);
return x_1;
}
}
static lean_object* _init_l_Lake_stdLeanConfigFileContents___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" where\n  -- add package configuration options here\n\nlean_lib ", 61);
return x_1;
}
}
static lean_object* _init_l_Lake_stdLeanConfigFileContents___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" where\n  -- add library configuration options here\n\n@[default_target]\nlean_exe ", 79);
return x_1;
}
}
static lean_object* _init_l_Lake_stdLeanConfigFileContents___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" where\n  root := `Main\n", 23);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_stdLeanConfigFileContents(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_4 = l_Lake_stdLeanConfigFileContents___closed__1;
x_5 = lean_string_append(x_4, x_1);
x_6 = l_Lake_stdLeanConfigFileContents___closed__2;
x_7 = lean_string_append(x_5, x_6);
x_8 = lean_string_append(x_7, x_2);
x_9 = l_Lake_stdLeanConfigFileContents___closed__3;
x_10 = lean_string_append(x_8, x_9);
x_11 = lean_string_append(x_10, x_3);
x_12 = l_Lake_stdLeanConfigFileContents___closed__4;
x_13 = lean_string_append(x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lake_stdLeanConfigFileContents___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lake_stdLeanConfigFileContents(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Lake_stdTomlConfigFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("name = ", 7);
return x_1;
}
}
static lean_object* _init_l_Lake_stdTomlConfigFileContents___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\ndefaultTargets = [", 19);
return x_1;
}
}
static lean_object* _init_l_Lake_stdTomlConfigFileContents___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("]\n\n[[lean_lib]]\nname = ", 23);
return x_1;
}
}
static lean_object* _init_l_Lake_stdTomlConfigFileContents___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\n\n[[lean_exe]]\nname = ", 22);
return x_1;
}
}
static lean_object* _init_l_Lake_stdTomlConfigFileContents___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\nroot = \"Main\"\n", 15);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_stdTomlConfigFileContents(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_4 = l_String_quote(x_1);
x_5 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Std_Format_defWidth;
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_format_pretty(x_5, x_6, x_7, x_7);
x_9 = l_Lake_stdTomlConfigFileContents___closed__1;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = l_Lake_stdTomlConfigFileContents___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = l_String_quote(x_3);
x_14 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_format_pretty(x_14, x_6, x_7, x_7);
x_16 = lean_string_append(x_12, x_15);
x_17 = l_Lake_stdTomlConfigFileContents___closed__3;
x_18 = lean_string_append(x_16, x_17);
x_19 = l_String_quote(x_2);
x_20 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_format_pretty(x_20, x_6, x_7, x_7);
x_22 = lean_string_append(x_18, x_21);
lean_dec(x_21);
x_23 = l_Lake_stdTomlConfigFileContents___closed__4;
x_24 = lean_string_append(x_22, x_23);
x_25 = lean_string_append(x_24, x_15);
lean_dec(x_15);
x_26 = l_Lake_stdTomlConfigFileContents___closed__5;
x_27 = lean_string_append(x_25, x_26);
return x_27;
}
}
LEAN_EXPORT lean_object* l_Lake_stdTomlConfigFileContents___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lake_stdTomlConfigFileContents(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Lake_exeLeanConfigFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" where\n  -- add package configuration options here\n\n@[default_target]\nlean_exe ", 79);
return x_1;
}
}
static lean_object* _init_l_Lake_exeLeanConfigFileContents___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" where\n  -- add executable configuration options here\n", 54);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_exeLeanConfigFileContents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Lake_stdLeanConfigFileContents___closed__1;
x_4 = lean_string_append(x_3, x_1);
x_5 = l_Lake_exeLeanConfigFileContents___closed__1;
x_6 = lean_string_append(x_4, x_5);
x_7 = lean_string_append(x_6, x_2);
x_8 = l_Lake_exeLeanConfigFileContents___closed__2;
x_9 = lean_string_append(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lake_exeLeanConfigFileContents___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_exeLeanConfigFileContents(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_exeTomlConfigFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("]\n\n[[lean_exe]]\nname = ", 23);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_exeTomlConfigFileContents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_3 = l_String_quote(x_1);
x_4 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = l_Std_Format_defWidth;
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_format_pretty(x_4, x_5, x_6, x_6);
x_8 = l_Lake_stdTomlConfigFileContents___closed__1;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = l_Lake_stdTomlConfigFileContents___closed__2;
x_11 = lean_string_append(x_9, x_10);
x_12 = l_String_quote(x_2);
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_format_pretty(x_13, x_5, x_6, x_6);
x_15 = lean_string_append(x_11, x_14);
x_16 = l_Lake_exeTomlConfigFileContents___closed__1;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_14);
lean_dec(x_14);
x_19 = l_Lake_gitignoreContents___closed__4;
x_20 = lean_string_append(x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lake_exeTomlConfigFileContents___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_exeTomlConfigFileContents(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_libLeanConfigFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" where\n  -- add package configuration options here\n\n@[default_target]\nlean_lib ", 79);
return x_1;
}
}
static lean_object* _init_l_Lake_libLeanConfigFileContents___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" where\n  -- add library configuration options here\n", 51);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_libLeanConfigFileContents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Lake_stdLeanConfigFileContents___closed__1;
x_4 = lean_string_append(x_3, x_1);
x_5 = l_Lake_libLeanConfigFileContents___closed__1;
x_6 = lean_string_append(x_4, x_5);
x_7 = lean_string_append(x_6, x_2);
x_8 = l_Lake_libLeanConfigFileContents___closed__2;
x_9 = lean_string_append(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lake_libLeanConfigFileContents___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_libLeanConfigFileContents(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_libTomlConfigFileContents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_3 = l_String_quote(x_1);
x_4 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = l_Std_Format_defWidth;
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_format_pretty(x_4, x_5, x_6, x_6);
x_8 = l_Lake_stdTomlConfigFileContents___closed__1;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = l_Lake_stdTomlConfigFileContents___closed__2;
x_11 = lean_string_append(x_9, x_10);
x_12 = l_String_quote(x_2);
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_format_pretty(x_13, x_5, x_6, x_6);
x_15 = lean_string_append(x_11, x_14);
x_16 = l_Lake_stdTomlConfigFileContents___closed__3;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_14);
lean_dec(x_14);
x_19 = l_Lake_gitignoreContents___closed__4;
x_20 = lean_string_append(x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lake_libTomlConfigFileContents___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_libTomlConfigFileContents(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_mathLeanConfigFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" where\n  -- Settings applied to both builds and interactive editing\n  leanOptions := #[\n    ⟨`pp.unicode.fun, true⟩ -- pretty-prints `fun a ↦ b`\n  ]\n  -- add any additional package configuration options here\n\nrequire mathlib from git\n  \"https://github.com/leanprover-community/mathlib4.git\"\n\n@[default_target]\nlean_lib ", 325);
return x_1;
}
}
static lean_object* _init_l_Lake_mathLeanConfigFileContents___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" where\n  -- add any library configuration options here\n", 55);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_mathLeanConfigFileContents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Lake_stdLeanConfigFileContents___closed__1;
x_4 = lean_string_append(x_3, x_1);
x_5 = l_Lake_mathLeanConfigFileContents___closed__1;
x_6 = lean_string_append(x_4, x_5);
x_7 = lean_string_append(x_6, x_2);
x_8 = l_Lake_mathLeanConfigFileContents___closed__2;
x_9 = lean_string_append(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lake_mathLeanConfigFileContents___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_mathLeanConfigFileContents(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_mathTomlConfigFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("]\n\n[leanOptions]\npp.unicode.fun = true # pretty-prints `fun a ↦ b`\n\n[[require]]\nname = \"mathlib\"\ngit = \"https://github.com/leanprover-community/mathlib4.git\"\n\n[[lean_lib]]\nname = ", 181);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_mathTomlConfigFileContents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_3 = l_String_quote(x_1);
x_4 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = l_Std_Format_defWidth;
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_format_pretty(x_4, x_5, x_6, x_6);
x_8 = l_Lake_stdTomlConfigFileContents___closed__1;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = l_Lake_stdTomlConfigFileContents___closed__2;
x_11 = lean_string_append(x_9, x_10);
x_12 = l_String_quote(x_2);
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_format_pretty(x_13, x_5, x_6, x_6);
x_15 = lean_string_append(x_11, x_14);
x_16 = l_Lake_mathTomlConfigFileContents___closed__1;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_14);
lean_dec(x_14);
x_19 = l_Lake_gitignoreContents___closed__4;
x_20 = lean_string_append(x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lake_mathTomlConfigFileContents___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_mathTomlConfigFileContents(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_readmeFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("# ", 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_readmeFileContents(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lake_readmeFileContents___closed__1;
x_3 = lean_string_append(x_2, x_1);
x_4 = l_Lake_mainFileName___closed__2;
x_5 = lean_string_append(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_readmeFileContents___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_readmeFileContents(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_mathToolchainUrl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("https://raw.githubusercontent.com/leanprover-community/mathlib4/master/lean-toolchain", 85);
return x_1;
}
}
static lean_object* _init_l_Lake_mathToolchainUrl() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_mathToolchainUrl___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_toCtorIdx(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(2u);
return x_4;
}
default: 
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(3u);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_toCtorIdx___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lake_InitTemplate_toCtorIdx(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Lake_InitTemplate_noConfusion___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_InitTemplate_noConfusion___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lake_InitTemplate_noConfusion___rarg___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lake_InitTemplate_noConfusion___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_InitTemplate_noConfusion___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_noConfusion___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lake_InitTemplate_noConfusion___rarg(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lake.InitTemplate.std", 21);
return x_1;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__3;
x_2 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__2;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__5() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__4;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__6;
x_2 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__2;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__8() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__7;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lake.InitTemplate.exe", 21);
return x_1;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__9;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__3;
x_2 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__10;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__12() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__11;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__6;
x_2 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__10;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__14() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__13;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lake.InitTemplate.lib", 21);
return x_1;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__15;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__3;
x_2 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__16;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__18() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__17;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__6;
x_2 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__16;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__20() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__19;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lake.InitTemplate.math", 22);
return x_1;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__21;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__3;
x_2 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__22;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__24() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__23;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__6;
x_2 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__22;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__26() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__25;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400_(uint8_t x_1, lean_object* x_2) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(1024u);
x_4 = lean_nat_dec_le(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__5;
x_6 = l_Repr_addAppParen(x_5, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__8;
x_8 = l_Repr_addAppParen(x_7, x_2);
return x_8;
}
}
case 1:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(1024u);
x_10 = lean_nat_dec_le(x_9, x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__12;
x_12 = l_Repr_addAppParen(x_11, x_2);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__14;
x_14 = l_Repr_addAppParen(x_13, x_2);
return x_14;
}
}
case 2:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(1024u);
x_16 = lean_nat_dec_le(x_15, x_2);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__18;
x_18 = l_Repr_addAppParen(x_17, x_2);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__20;
x_20 = l_Repr_addAppParen(x_19, x_2);
return x_20;
}
}
default: 
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_unsigned_to_nat(1024u);
x_22 = lean_nat_dec_le(x_21, x_2);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__24;
x_24 = l_Repr_addAppParen(x_23, x_2);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__26;
x_26 = l_Repr_addAppParen(x_25, x_2);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400_(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Lake_instReprInitTemplate___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_instReprInitTemplate() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_instReprInitTemplate___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lake_InitTemplate_ofNat(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_dec_le(x_2, x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_eq(x_1, x_2);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 3;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 2;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_ofNat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lake_InitTemplate_ofNat(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqInitTemplate(uint8_t x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lake_InitTemplate_toCtorIdx(x_1);
x_4 = l_Lake_InitTemplate_toCtorIdx(x_2);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqInitTemplate___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lake_instDecidableEqInitTemplate(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static uint8_t _init_l_Lake_instInhabitedInitTemplate() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lake_InitTemplate_ofString_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("std", 3);
return x_1;
}
}
static lean_object* _init_l_Lake_InitTemplate_ofString_x3f___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("exe", 3);
return x_1;
}
}
static lean_object* _init_l_Lake_InitTemplate_ofString_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("lib", 3);
return x_1;
}
}
static lean_object* _init_l_Lake_InitTemplate_ofString_x3f___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("math", 4);
return x_1;
}
}
static lean_object* _init_l_Lake_InitTemplate_ofString_x3f___closed__5() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 3;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_InitTemplate_ofString_x3f___closed__6() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 2;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_InitTemplate_ofString_x3f___closed__7() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_InitTemplate_ofString_x3f___closed__8() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_ofString_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lake_InitTemplate_ofString_x3f___closed__1;
x_3 = lean_string_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lake_InitTemplate_ofString_x3f___closed__2;
x_5 = lean_string_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lake_InitTemplate_ofString_x3f___closed__3;
x_7 = lean_string_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lake_InitTemplate_ofString_x3f___closed__4;
x_9 = lean_string_dec_eq(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_Lake_InitTemplate_ofString_x3f___closed__5;
return x_11;
}
}
else
{
lean_object* x_12; 
x_12 = l_Lake_InitTemplate_ofString_x3f___closed__6;
return x_12;
}
}
else
{
lean_object* x_13; 
x_13 = l_Lake_InitTemplate_ofString_x3f___closed__7;
return x_13;
}
}
else
{
lean_object* x_14; 
x_14 = l_Lake_InitTemplate_ofString_x3f___closed__8;
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_ofString_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_InitTemplate_ofString_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_escapeIdent___closed__1() {
_start:
{
lean_object* x_1; uint32_t x_2; lean_object* x_3; 
x_1 = l_Lake_mainFileName___closed__2;
x_2 = l_Lean_idBeginEscape;
x_3 = lean_string_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_escapeIdent___closed__2() {
_start:
{
lean_object* x_1; uint32_t x_2; lean_object* x_3; 
x_1 = l_Lake_mainFileName___closed__2;
x_2 = l_Lean_idEndEscape;
x_3 = lean_string_push(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_escapeIdent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lake_escapeIdent___closed__1;
x_3 = lean_string_append(x_2, x_1);
x_4 = l_Lake_escapeIdent___closed__2;
x_5 = lean_string_append(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_escapeIdent___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_escapeIdent(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_escapeName_x21___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lake.CLI.Init", 13);
return x_1;
}
}
static lean_object* _init_l_Lake_escapeName_x21___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lake.escapeName!", 16);
return x_1;
}
}
static lean_object* _init_l_Lake_escapeName_x21___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unreachable code has been reached", 33);
return x_1;
}
}
static lean_object* _init_l_Lake_escapeName_x21___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lake_escapeName_x21___closed__1;
x_2 = l_Lake_escapeName_x21___closed__2;
x_3 = lean_unsigned_to_nat(174u);
x_4 = lean_unsigned_to_nat(23u);
x_5 = l_Lake_escapeName_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lake_escapeName_x21___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(".", 1);
return x_1;
}
}
static lean_object* _init_l_Lake_escapeName_x21___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lake_escapeName_x21___closed__1;
x_2 = l_Lake_escapeName_x21___closed__2;
x_3 = lean_unsigned_to_nat(177u);
x_4 = lean_unsigned_to_nat(23u);
x_5 = l_Lake_escapeName_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lake_escapeName_x21(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lake_escapeName_x21___closed__4;
x_3 = l_panic___at_String_fromUTF8_x21___spec__1(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lake_escapeIdent(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = l_Lake_escapeName_x21(x_4);
x_9 = l_Lake_escapeName_x21___closed__5;
x_10 = lean_string_append(x_8, x_9);
x_11 = l_Lake_escapeIdent(x_7);
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
return x_12;
}
}
default: 
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lake_escapeName_x21___closed__6;
x_14 = l_panic___at_String_fromUTF8_x21___spec__1(x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_escapeName_x21___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_escapeName_x21(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_InitTemplate_configFileContents___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("-", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_configFileContents(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
if (x_2 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = l_Lake_escapeName_x21(x_3);
x_6 = l_Lake_escapeName_x21(x_4);
lean_dec(x_4);
x_7 = l_Lake_InitTemplate_configFileContents___closed__1;
x_8 = 0;
x_9 = l_Lean_Name_toStringWithSep(x_7, x_8, x_3);
x_10 = l_Lake_escapeIdent(x_9);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_String_mapAux___at_String_toLower___spec__1(x_11, x_10);
x_13 = l_Lake_stdLeanConfigFileContents(x_5, x_6, x_12);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
else
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = 1;
lean_inc(x_3);
x_15 = l_Lean_Name_toString(x_3, x_14);
x_16 = l_Lean_Name_toString(x_4, x_14);
x_17 = l_Lake_InitTemplate_configFileContents___closed__1;
x_18 = 0;
x_19 = l_Lean_Name_toStringWithSep(x_17, x_18, x_3);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_String_mapAux___at_String_toLower___spec__1(x_20, x_19);
x_22 = l_Lake_stdTomlConfigFileContents(x_15, x_16, x_21);
lean_dec(x_21);
lean_dec(x_16);
lean_dec(x_15);
return x_22;
}
}
case 1:
{
if (x_2 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = l_Lake_escapeName_x21(x_3);
lean_dec(x_3);
x_24 = l_Lake_escapeName_x21(x_4);
lean_dec(x_4);
x_25 = l_Lake_exeLeanConfigFileContents(x_23, x_24);
lean_dec(x_24);
lean_dec(x_23);
return x_25;
}
else
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = 1;
x_27 = l_Lean_Name_toString(x_3, x_26);
x_28 = l_Lean_Name_toString(x_4, x_26);
x_29 = l_Lake_exeTomlConfigFileContents(x_27, x_28);
lean_dec(x_28);
lean_dec(x_27);
return x_29;
}
}
case 2:
{
if (x_2 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = l_Lake_escapeName_x21(x_3);
lean_dec(x_3);
x_31 = l_Lake_escapeName_x21(x_4);
lean_dec(x_4);
x_32 = l_Lake_libLeanConfigFileContents(x_30, x_31);
lean_dec(x_31);
lean_dec(x_30);
return x_32;
}
else
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = 1;
x_34 = l_Lean_Name_toString(x_3, x_33);
x_35 = l_Lean_Name_toString(x_4, x_33);
x_36 = l_Lake_libTomlConfigFileContents(x_34, x_35);
lean_dec(x_35);
lean_dec(x_34);
return x_36;
}
}
default: 
{
if (x_2 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = l_Lake_escapeName_x21(x_3);
lean_dec(x_3);
x_38 = l_Lake_escapeName_x21(x_4);
lean_dec(x_4);
x_39 = l_Lake_mathLeanConfigFileContents(x_37, x_38);
lean_dec(x_38);
lean_dec(x_37);
return x_39;
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = 1;
x_41 = l_Lean_Name_toString(x_3, x_40);
x_42 = l_Lean_Name_toString(x_4, x_40);
x_43 = l_Lake_mathTomlConfigFileContents(x_41, x_42);
lean_dec(x_42);
lean_dec(x_41);
return x_43;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_InitTemplate_configFileContents___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lake_InitTemplate_configFileContents(x_5, x_6, x_3, x_4);
return x_7;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("README.md", 9);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lake_initPkg___lambda__1___closed__1;
x_7 = l_System_FilePath_join(x_1, x_6);
x_8 = l_System_FilePath_pathExists(x_7, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = l_Lake_readmeFileContents(x_2);
x_13 = l_IO_FS_writeFile(x_7, x_12, x_11);
lean_dec(x_12);
lean_dec(x_7);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_4);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_io_error_to_string(x_22);
x_24 = 3;
x_25 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*1, x_24);
x_26 = lean_array_get_size(x_4);
x_27 = lean_array_push(x_4, x_25);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set_tag(x_13, 0);
lean_ctor_set(x_13, 0, x_28);
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_io_error_to_string(x_29);
x_32 = 3;
x_33 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*1, x_32);
x_34 = lean_array_get_size(x_4);
x_35 = lean_array_push(x_4, x_33);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_30);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_7);
x_38 = !lean_is_exclusive(x_8);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_8, 0);
lean_dec(x_39);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_4);
lean_ctor_set(x_8, 0, x_41);
return x_8;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_8, 1);
lean_inc(x_42);
lean_dec(x_8);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_4);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_42);
return x_45;
}
}
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(".git", 4);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("failed to initialize git repository", 35);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 2;
x_2 = l_Lake_initPkg___lambda__2___closed__2;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("init", 4);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_initPkg___lambda__2___closed__4;
x_2 = l_Lake_initPkg___lambda__2___closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("-q", 2);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_initPkg___lambda__2___closed__6;
x_2 = l_Lake_initPkg___lambda__2___closed__7;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__9() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_2, 0, x_1);
lean_ctor_set_uint8(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, 2, x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("git", 3);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("master", 6);
return x_1;
}
}
static uint8_t _init_l_Lake_initPkg___lambda__2___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_Lake_Git_upstreamBranch;
x_2 = l_Lake_initPkg___lambda__2___closed__12;
x_3 = lean_string_dec_eq(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("checkout", 8);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_initPkg___lambda__2___closed__14;
x_2 = l_Lake_initPkg___lambda__2___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("-B", 2);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_initPkg___lambda__2___closed__16;
x_2 = l_Lake_initPkg___lambda__2___closed__17;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_initPkg___lambda__2___closed__18;
x_2 = l_Lake_Git_upstreamBranch;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__2___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(".gitignore", 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; 
x_150 = l_Lake_initPkg___lambda__2___closed__20;
lean_inc(x_1);
x_151 = l_System_FilePath_join(x_1, x_150);
x_152 = 4;
x_153 = lean_io_prim_handle_mk(x_151, x_152, x_5);
lean_dec(x_151);
if (lean_obj_tag(x_153) == 0)
{
uint8_t x_154; 
x_154 = !lean_is_exclusive(x_153);
if (x_154 == 0)
{
lean_object* x_155; 
x_155 = lean_ctor_get(x_153, 1);
lean_ctor_set(x_153, 1, x_4);
x_6 = x_153;
x_7 = x_155;
goto block_149;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_153, 0);
x_157 = lean_ctor_get(x_153, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_153);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_4);
x_6 = x_158;
x_7 = x_157;
goto block_149;
}
}
else
{
uint8_t x_159; 
x_159 = !lean_is_exclusive(x_153);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_160 = lean_ctor_get(x_153, 0);
x_161 = lean_ctor_get(x_153, 1);
x_162 = lean_io_error_to_string(x_160);
x_163 = 3;
x_164 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set_uint8(x_164, sizeof(void*)*1, x_163);
x_165 = lean_array_get_size(x_4);
x_166 = lean_array_push(x_4, x_164);
lean_ctor_set(x_153, 1, x_166);
lean_ctor_set(x_153, 0, x_165);
x_6 = x_153;
x_7 = x_161;
goto block_149;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; uint8_t x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_167 = lean_ctor_get(x_153, 0);
x_168 = lean_ctor_get(x_153, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_153);
x_169 = lean_io_error_to_string(x_167);
x_170 = 3;
x_171 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set_uint8(x_171, sizeof(void*)*1, x_170);
x_172 = lean_array_get_size(x_4);
x_173 = lean_array_push(x_4, x_171);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
x_6 = x_174;
x_7 = x_168;
goto block_149;
}
}
block_149:
{
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
x_11 = l_Lake_gitignoreContents;
x_12 = lean_io_prim_handle_put_str(x_9, x_11, x_7);
lean_dec(x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_30; 
lean_free_object(x_6);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lake_initPkg___lambda__2___closed__1;
lean_inc(x_1);
x_15 = l_System_FilePath_join(x_1, x_14);
x_16 = l_System_FilePath_isDir(x_15, x_13);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_30 = lean_unbox(x_17);
lean_dec(x_17);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
lean_inc(x_1);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_1);
x_32 = l_Lake_initPkg___lambda__2___closed__9;
x_33 = l_Lake_initPkg___lambda__2___closed__11;
x_34 = l_Lake_initPkg___lambda__2___closed__8;
x_35 = l_Lake_initPkg___lambda__2___closed__10;
x_36 = 0;
lean_inc(x_31);
x_37 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_33);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_31);
lean_ctor_set(x_37, 4, x_35);
lean_ctor_set_uint8(x_37, sizeof(void*)*5, x_36);
x_38 = 1;
x_39 = l_Lake_proc(x_37, x_38, x_10, x_18);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = !lean_is_exclusive(x_40);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_ctor_get(x_40, 1);
x_44 = lean_ctor_get(x_40, 0);
lean_dec(x_44);
x_45 = l_Lake_initPkg___lambda__2___closed__13;
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_free_object(x_40);
x_46 = l_Lake_initPkg___lambda__2___closed__19;
x_47 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_47, 0, x_32);
lean_ctor_set(x_47, 1, x_33);
lean_ctor_set(x_47, 2, x_46);
lean_ctor_set(x_47, 3, x_31);
lean_ctor_set(x_47, 4, x_35);
lean_ctor_set_uint8(x_47, sizeof(void*)*5, x_36);
x_48 = l_Lake_proc(x_47, x_38, x_43, x_41);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_19 = x_49;
x_20 = x_50;
goto block_29;
}
else
{
lean_object* x_51; 
lean_dec(x_31);
x_51 = lean_box(0);
lean_ctor_set(x_40, 0, x_51);
x_19 = x_40;
x_20 = x_41;
goto block_29;
}
}
else
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_40, 1);
lean_inc(x_52);
lean_dec(x_40);
x_53 = l_Lake_initPkg___lambda__2___closed__13;
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = l_Lake_initPkg___lambda__2___closed__19;
x_55 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_55, 0, x_32);
lean_ctor_set(x_55, 1, x_33);
lean_ctor_set(x_55, 2, x_54);
lean_ctor_set(x_55, 3, x_31);
lean_ctor_set(x_55, 4, x_35);
lean_ctor_set_uint8(x_55, sizeof(void*)*5, x_36);
x_56 = l_Lake_proc(x_55, x_38, x_52, x_41);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_19 = x_57;
x_20 = x_58;
goto block_29;
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_31);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_52);
x_19 = x_60;
x_20 = x_41;
goto block_29;
}
}
}
else
{
lean_object* x_61; uint8_t x_62; 
lean_dec(x_31);
x_61 = lean_ctor_get(x_39, 1);
lean_inc(x_61);
lean_dec(x_39);
x_62 = !lean_is_exclusive(x_40);
if (x_62 == 0)
{
x_19 = x_40;
x_20 = x_61;
goto block_29;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_40, 0);
x_64 = lean_ctor_get(x_40, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_40);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_19 = x_65;
x_20 = x_61;
goto block_29;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_box(0);
x_67 = l_Lake_initPkg___lambda__1(x_1, x_2, x_66, x_10, x_18);
return x_67;
}
block_29:
{
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = l_Lake_initPkg___lambda__1(x_1, x_2, x_21, x_22, x_20);
lean_dec(x_21);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_dec(x_19);
x_25 = l_Lake_initPkg___lambda__2___closed__3;
x_26 = lean_array_push(x_24, x_25);
x_27 = lean_box(0);
x_28 = l_Lake_initPkg___lambda__1(x_1, x_2, x_27, x_26, x_20);
return x_28;
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_12);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_12, 0);
x_70 = lean_io_error_to_string(x_69);
x_71 = 3;
x_72 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set_uint8(x_72, sizeof(void*)*1, x_71);
x_73 = lean_array_get_size(x_10);
x_74 = lean_array_push(x_10, x_72);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 1, x_74);
lean_ctor_set(x_6, 0, x_73);
lean_ctor_set_tag(x_12, 0);
lean_ctor_set(x_12, 0, x_6);
return x_12;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_75 = lean_ctor_get(x_12, 0);
x_76 = lean_ctor_get(x_12, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_12);
x_77 = lean_io_error_to_string(x_75);
x_78 = 3;
x_79 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set_uint8(x_79, sizeof(void*)*1, x_78);
x_80 = lean_array_get_size(x_10);
x_81 = lean_array_push(x_10, x_79);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 1, x_81);
lean_ctor_set(x_6, 0, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_6);
lean_ctor_set(x_82, 1, x_76);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_6, 0);
x_84 = lean_ctor_get(x_6, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_6);
x_85 = l_Lake_gitignoreContents;
x_86 = lean_io_prim_handle_put_str(x_83, x_85, x_7);
lean_dec(x_83);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_104; 
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = l_Lake_initPkg___lambda__2___closed__1;
lean_inc(x_1);
x_89 = l_System_FilePath_join(x_1, x_88);
x_90 = l_System_FilePath_isDir(x_89, x_87);
lean_dec(x_89);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_104 = lean_unbox(x_91);
lean_dec(x_91);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; 
lean_inc(x_1);
x_105 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_105, 0, x_1);
x_106 = l_Lake_initPkg___lambda__2___closed__9;
x_107 = l_Lake_initPkg___lambda__2___closed__11;
x_108 = l_Lake_initPkg___lambda__2___closed__8;
x_109 = l_Lake_initPkg___lambda__2___closed__10;
x_110 = 0;
lean_inc(x_105);
x_111 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_107);
lean_ctor_set(x_111, 2, x_108);
lean_ctor_set(x_111, 3, x_105);
lean_ctor_set(x_111, 4, x_109);
lean_ctor_set_uint8(x_111, sizeof(void*)*5, x_110);
x_112 = 1;
x_113 = l_Lake_proc(x_111, x_112, x_84, x_92);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; 
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_117 = x_114;
} else {
 lean_dec_ref(x_114);
 x_117 = lean_box(0);
}
x_118 = l_Lake_initPkg___lambda__2___closed__13;
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_117);
x_119 = l_Lake_initPkg___lambda__2___closed__19;
x_120 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_120, 0, x_106);
lean_ctor_set(x_120, 1, x_107);
lean_ctor_set(x_120, 2, x_119);
lean_ctor_set(x_120, 3, x_105);
lean_ctor_set(x_120, 4, x_109);
lean_ctor_set_uint8(x_120, sizeof(void*)*5, x_110);
x_121 = l_Lake_proc(x_120, x_112, x_116, x_115);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_93 = x_122;
x_94 = x_123;
goto block_103;
}
else
{
lean_object* x_124; lean_object* x_125; 
lean_dec(x_105);
x_124 = lean_box(0);
if (lean_is_scalar(x_117)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_117;
}
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_116);
x_93 = x_125;
x_94 = x_115;
goto block_103;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_105);
x_126 = lean_ctor_get(x_113, 1);
lean_inc(x_126);
lean_dec(x_113);
x_127 = lean_ctor_get(x_114, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_114, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_129 = x_114;
} else {
 lean_dec_ref(x_114);
 x_129 = lean_box(0);
}
if (lean_is_scalar(x_129)) {
 x_130 = lean_alloc_ctor(1, 2, 0);
} else {
 x_130 = x_129;
}
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_128);
x_93 = x_130;
x_94 = x_126;
goto block_103;
}
}
else
{
lean_object* x_131; lean_object* x_132; 
x_131 = lean_box(0);
x_132 = l_Lake_initPkg___lambda__1(x_1, x_2, x_131, x_84, x_92);
return x_132;
}
block_103:
{
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_93, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_93, 1);
lean_inc(x_96);
lean_dec(x_93);
x_97 = l_Lake_initPkg___lambda__1(x_1, x_2, x_95, x_96, x_94);
lean_dec(x_95);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_98 = lean_ctor_get(x_93, 1);
lean_inc(x_98);
lean_dec(x_93);
x_99 = l_Lake_initPkg___lambda__2___closed__3;
x_100 = lean_array_push(x_98, x_99);
x_101 = lean_box(0);
x_102 = l_Lake_initPkg___lambda__1(x_1, x_2, x_101, x_100, x_94);
return x_102;
}
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_1);
x_133 = lean_ctor_get(x_86, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_86, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_135 = x_86;
} else {
 lean_dec_ref(x_86);
 x_135 = lean_box(0);
}
x_136 = lean_io_error_to_string(x_133);
x_137 = 3;
x_138 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set_uint8(x_138, sizeof(void*)*1, x_137);
x_139 = lean_array_get_size(x_84);
x_140 = lean_array_push(x_84, x_138);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
if (lean_is_scalar(x_135)) {
 x_142 = lean_alloc_ctor(0, 2, 0);
} else {
 x_142 = x_135;
 lean_ctor_set_tag(x_142, 0);
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_134);
return x_142;
}
}
}
else
{
uint8_t x_143; 
lean_dec(x_1);
x_143 = !lean_is_exclusive(x_6);
if (x_143 == 0)
{
lean_object* x_144; 
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_6);
lean_ctor_set(x_144, 1, x_7);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_145 = lean_ctor_get(x_6, 0);
x_146 = lean_ctor_get(x_6, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_6);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_7);
return x_148;
}
}
}
}
}
static lean_object* _init_l_Lake_initPkg___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("downloading mathlib `lean-toolchain` file", 41);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__3___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = l_Lake_initPkg___lambda__3___closed__1;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("could not create a `lean-toolchain` file for the new package; ", 62);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__3___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("no known toolchain name for the current Elan/Lean/Lake", 54);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__3___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_initPkg___lambda__3___closed__3;
x_2 = l_Lake_initPkg___lambda__3___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__3___closed__6() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 2;
x_2 = l_Lake_initPkg___lambda__3___closed__5;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = l_Lake_toolchainFileName;
lean_inc(x_1);
x_9 = l_System_FilePath_join(x_1, x_8);
x_10 = l_Lake_Env_toolchain(x_3);
x_11 = l_String_isEmpty(x_10);
if (x_11 == 0)
{
uint8_t x_12; uint8_t x_13; 
x_12 = 3;
x_13 = l_Lake_instDecidableEqInitTemplate(x_4, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = l_Lake_gitignoreContents___closed__4;
x_15 = lean_string_append(x_10, x_14);
x_16 = l_IO_FS_writeFile(x_9, x_15, x_7);
lean_dec(x_15);
lean_dec(x_9);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lake_initPkg___lambda__2(x_1, x_2, x_17, x_6, x_18);
lean_dec(x_17);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_io_error_to_string(x_21);
x_23 = 3;
x_24 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set_uint8(x_24, sizeof(void*)*1, x_23);
x_25 = lean_array_get_size(x_6);
x_26 = lean_array_push(x_6, x_24);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set_tag(x_16, 0);
lean_ctor_set(x_16, 0, x_27);
return x_16;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_16, 0);
x_29 = lean_ctor_get(x_16, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_16);
x_30 = lean_io_error_to_string(x_28);
x_31 = 3;
x_32 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*1, x_31);
x_33 = lean_array_get_size(x_6);
x_34 = lean_array_push(x_6, x_32);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_29);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_10);
x_37 = l_Lake_initPkg___lambda__3___closed__2;
x_38 = lean_array_push(x_6, x_37);
x_39 = l_Lake_mathToolchainUrl;
x_40 = l_Lake_download(x_39, x_9, x_38, x_7);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = l_Lake_initPkg___lambda__2(x_1, x_2, x_43, x_44, x_42);
lean_dec(x_43);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_40);
if (x_46 == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_ctor_get(x_40, 0);
lean_dec(x_47);
x_48 = !lean_is_exclusive(x_41);
if (x_48 == 0)
{
return x_40;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_41, 0);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_41);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_40, 0, x_51);
return x_40;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_40, 1);
lean_inc(x_52);
lean_dec(x_40);
x_53 = lean_ctor_get(x_41, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_41, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_55 = x_41;
} else {
 lean_dec_ref(x_41);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(1, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_52);
return x_57;
}
}
}
}
else
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_dec(x_10);
x_58 = lean_ctor_get(x_3, 1);
x_59 = lean_ctor_get(x_58, 1);
x_60 = l_String_isEmpty(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_61 = l_System_FilePath_pathExists(x_9, x_7);
lean_dec(x_9);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_unbox(x_62);
lean_dec(x_62);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = l_Lake_initPkg___lambda__3___closed__6;
x_66 = lean_array_push(x_6, x_65);
x_67 = lean_box(0);
x_68 = l_Lake_initPkg___lambda__2(x_1, x_2, x_67, x_66, x_64);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_61, 1);
lean_inc(x_69);
lean_dec(x_61);
x_70 = lean_box(0);
x_71 = l_Lake_initPkg___lambda__2(x_1, x_2, x_70, x_6, x_69);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; 
lean_dec(x_9);
x_72 = lean_box(0);
x_73 = l_Lake_initPkg___lambda__2(x_1, x_2, x_72, x_6, x_7);
return x_73;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__4(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; 
x_8 = 0;
x_9 = l_Lake_instDecidableEqInitTemplate(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_apply_3(x_2, x_10, x_6, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = l_Lake_mainFileName;
x_13 = l_System_FilePath_join(x_3, x_12);
x_14 = l_System_FilePath_pathExists(x_13, x_7);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 1);
x_19 = lean_ctor_get(x_14, 0);
lean_dec(x_19);
x_20 = l_Lake_mainFileContents(x_4);
x_21 = l_IO_FS_writeFile(x_13, x_20, x_18);
lean_dec(x_20);
lean_dec(x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_14);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_apply_3(x_2, x_22, x_6, x_23);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_21);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_io_error_to_string(x_26);
x_28 = 3;
x_29 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_28);
x_30 = lean_array_get_size(x_6);
x_31 = lean_array_push(x_6, x_29);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_31);
lean_ctor_set(x_14, 0, x_30);
lean_ctor_set_tag(x_21, 0);
lean_ctor_set(x_21, 0, x_14);
return x_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_21, 0);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_21);
x_34 = lean_io_error_to_string(x_32);
x_35 = 3;
x_36 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_35);
x_37 = lean_array_get_size(x_6);
x_38 = lean_array_push(x_6, x_36);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_38);
lean_ctor_set(x_14, 0, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_14);
lean_ctor_set(x_39, 1, x_33);
return x_39;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_14, 1);
lean_inc(x_40);
lean_dec(x_14);
x_41 = l_Lake_mainFileContents(x_4);
x_42 = l_IO_FS_writeFile(x_13, x_41, x_40);
lean_dec(x_41);
lean_dec(x_13);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_apply_3(x_2, x_43, x_6, x_44);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_2);
x_46 = lean_ctor_get(x_42, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_48 = x_42;
} else {
 lean_dec_ref(x_42);
 x_48 = lean_box(0);
}
x_49 = lean_io_error_to_string(x_46);
x_50 = 3;
x_51 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set_uint8(x_51, sizeof(void*)*1, x_50);
x_52 = lean_array_get_size(x_6);
x_53 = lean_array_push(x_6, x_51);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
if (lean_is_scalar(x_48)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_48;
 lean_ctor_set_tag(x_55, 0);
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_47);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_13);
x_56 = lean_ctor_get(x_14, 1);
lean_inc(x_56);
lean_dec(x_14);
x_57 = lean_box(0);
x_58 = lean_apply_3(x_2, x_57, x_6, x_56);
return x_58;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 1;
x_9 = l_Lean_Name_toString(x_1, x_8);
x_10 = l_Lake_libRootFileContents(x_9, x_2);
lean_dec(x_9);
x_11 = l_IO_FS_writeFile(x_3, x_10, x_7);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_apply_3(x_4, x_12, x_6, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_4);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_io_error_to_string(x_16);
x_18 = 3;
x_19 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set_uint8(x_19, sizeof(void*)*1, x_18);
x_20 = lean_array_get_size(x_6);
x_21 = lean_array_push(x_6, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set_tag(x_11, 0);
lean_ctor_set(x_11, 0, x_22);
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_io_error_to_string(x_23);
x_26 = 3;
x_27 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_26);
x_28 = lean_array_get_size(x_6);
x_29 = lean_array_push(x_6, x_27);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_24);
return x_31;
}
}
}
}
static lean_object* _init_l_Lake_initPkg___lambda__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Basic.lean", 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__6(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, uint8_t x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_247; lean_object* x_248; 
lean_inc(x_4);
x_247 = l_Lake_InitTemplate_configFileContents(x_1, x_2, x_3, x_4);
x_248 = l_IO_FS_writeFile(x_5, x_247, x_13);
lean_dec(x_247);
if (lean_obj_tag(x_248) == 0)
{
uint8_t x_249; 
x_249 = !lean_is_exclusive(x_248);
if (x_249 == 0)
{
lean_object* x_250; 
x_250 = lean_ctor_get(x_248, 1);
lean_ctor_set(x_248, 1, x_12);
x_14 = x_248;
x_15 = x_250;
goto block_246;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_248, 0);
x_252 = lean_ctor_get(x_248, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_248);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_12);
x_14 = x_253;
x_15 = x_252;
goto block_246;
}
}
else
{
uint8_t x_254; 
x_254 = !lean_is_exclusive(x_248);
if (x_254 == 0)
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; uint8_t x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_255 = lean_ctor_get(x_248, 0);
x_256 = lean_ctor_get(x_248, 1);
x_257 = lean_io_error_to_string(x_255);
x_258 = 3;
x_259 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_259, 0, x_257);
lean_ctor_set_uint8(x_259, sizeof(void*)*1, x_258);
x_260 = lean_array_get_size(x_12);
x_261 = lean_array_push(x_12, x_259);
lean_ctor_set(x_248, 1, x_261);
lean_ctor_set(x_248, 0, x_260);
x_14 = x_248;
x_15 = x_256;
goto block_246;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; uint8_t x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_262 = lean_ctor_get(x_248, 0);
x_263 = lean_ctor_get(x_248, 1);
lean_inc(x_263);
lean_inc(x_262);
lean_dec(x_248);
x_264 = lean_io_error_to_string(x_262);
x_265 = 3;
x_266 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set_uint8(x_266, sizeof(void*)*1, x_265);
x_267 = lean_array_get_size(x_12);
x_268 = lean_array_push(x_12, x_266);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
x_14 = x_269;
x_15 = x_263;
goto block_246;
}
}
block_246:
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_70; uint8_t x_71; 
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
x_19 = l_Lake_escapeName_x21(x_4);
x_20 = lean_box(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_21 = lean_alloc_closure((void*)(l_Lake_initPkg___lambda__3___boxed), 7, 4);
lean_closure_set(x_21, 0, x_6);
lean_closure_set(x_21, 1, x_7);
lean_closure_set(x_21, 2, x_8);
lean_closure_set(x_21, 3, x_20);
x_70 = 1;
x_71 = l_Lake_instDecidableEqInitTemplate(x_1, x_70);
if (x_71 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
if (x_10 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_72 = lean_box(x_1);
lean_inc(x_19);
x_73 = lean_alloc_closure((void*)(l_Lake_initPkg___lambda__4___boxed), 7, 4);
lean_closure_set(x_73, 0, x_72);
lean_closure_set(x_73, 1, x_21);
lean_closure_set(x_73, 2, x_6);
lean_closure_set(x_73, 3, x_19);
x_74 = l_Lake_mainFileName___closed__2;
lean_inc(x_9);
x_75 = l_System_FilePath_withExtension(x_9, x_74);
x_76 = l_Lake_initPkg___lambda__6___closed__1;
lean_inc(x_75);
x_77 = l_System_FilePath_join(x_75, x_76);
x_78 = l_System_FilePath_pathExists(x_77, x_15);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_unbox(x_79);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
x_82 = l_IO_FS_createDirAll(x_75, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = l_Lake_basicFileContents;
x_85 = l_IO_FS_writeFile(x_77, x_84, x_83);
lean_dec(x_77);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_free_object(x_14);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_Lake_initPkg___lambda__5(x_4, x_19, x_9, x_73, x_86, x_17, x_87);
lean_dec(x_86);
lean_dec(x_9);
lean_dec(x_19);
return x_88;
}
else
{
uint8_t x_89; 
lean_dec(x_73);
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_4);
x_89 = !lean_is_exclusive(x_85);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_90 = lean_ctor_get(x_85, 0);
x_91 = lean_io_error_to_string(x_90);
x_92 = 3;
x_93 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set_uint8(x_93, sizeof(void*)*1, x_92);
x_94 = lean_array_get_size(x_17);
x_95 = lean_array_push(x_17, x_93);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_95);
lean_ctor_set(x_14, 0, x_94);
lean_ctor_set_tag(x_85, 0);
lean_ctor_set(x_85, 0, x_14);
return x_85;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_96 = lean_ctor_get(x_85, 0);
x_97 = lean_ctor_get(x_85, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_85);
x_98 = lean_io_error_to_string(x_96);
x_99 = 3;
x_100 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set_uint8(x_100, sizeof(void*)*1, x_99);
x_101 = lean_array_get_size(x_17);
x_102 = lean_array_push(x_17, x_100);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_102);
lean_ctor_set(x_14, 0, x_101);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_14);
lean_ctor_set(x_103, 1, x_97);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_77);
lean_dec(x_73);
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_4);
x_104 = !lean_is_exclusive(x_82);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_105 = lean_ctor_get(x_82, 0);
x_106 = lean_io_error_to_string(x_105);
x_107 = 3;
x_108 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set_uint8(x_108, sizeof(void*)*1, x_107);
x_109 = lean_array_get_size(x_17);
x_110 = lean_array_push(x_17, x_108);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_110);
lean_ctor_set(x_14, 0, x_109);
lean_ctor_set_tag(x_82, 0);
lean_ctor_set(x_82, 0, x_14);
return x_82;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_111 = lean_ctor_get(x_82, 0);
x_112 = lean_ctor_get(x_82, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_82);
x_113 = lean_io_error_to_string(x_111);
x_114 = 3;
x_115 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set_uint8(x_115, sizeof(void*)*1, x_114);
x_116 = lean_array_get_size(x_17);
x_117 = lean_array_push(x_17, x_115);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_117);
lean_ctor_set(x_14, 0, x_116);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_14);
lean_ctor_set(x_118, 1, x_112);
return x_118;
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_77);
lean_dec(x_75);
lean_free_object(x_14);
x_119 = lean_ctor_get(x_78, 1);
lean_inc(x_119);
lean_dec(x_78);
x_120 = lean_box(0);
x_121 = l_Lake_initPkg___lambda__5(x_4, x_19, x_9, x_73, x_120, x_17, x_119);
lean_dec(x_9);
lean_dec(x_19);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_free_object(x_14);
lean_dec(x_9);
lean_dec(x_4);
x_122 = lean_box(0);
x_123 = l_Lake_initPkg___lambda__4(x_1, x_21, x_6, x_19, x_122, x_17, x_15);
lean_dec(x_19);
return x_123;
}
}
else
{
lean_object* x_124; lean_object* x_125; uint8_t x_126; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_4);
x_124 = l_System_FilePath_pathExists(x_9, x_15);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_unbox(x_125);
lean_dec(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_124, 1);
lean_inc(x_127);
lean_dec(x_124);
lean_inc(x_9);
x_128 = l_System_FilePath_parent(x_9);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; 
x_129 = lean_box(0);
lean_ctor_set(x_14, 0, x_129);
x_22 = x_14;
x_23 = x_127;
goto block_69;
}
else
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_128, 0);
lean_inc(x_130);
lean_dec(x_128);
x_131 = l_IO_FS_createDirAll(x_130, x_127);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; 
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
lean_ctor_set(x_14, 0, x_132);
x_22 = x_14;
x_23 = x_133;
goto block_69;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_134 = lean_ctor_get(x_131, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_131, 1);
lean_inc(x_135);
lean_dec(x_131);
x_136 = lean_io_error_to_string(x_134);
x_137 = 3;
x_138 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set_uint8(x_138, sizeof(void*)*1, x_137);
x_139 = lean_array_get_size(x_17);
x_140 = lean_array_push(x_17, x_138);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_140);
lean_ctor_set(x_14, 0, x_139);
x_22 = x_14;
x_23 = x_135;
goto block_69;
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_free_object(x_14);
lean_dec(x_9);
x_141 = lean_ctor_get(x_124, 1);
lean_inc(x_141);
lean_dec(x_124);
x_142 = lean_box(0);
x_143 = l_Lake_initPkg___lambda__3(x_6, x_7, x_8, x_1, x_142, x_17, x_141);
lean_dec(x_8);
lean_dec(x_7);
return x_143;
}
}
block_69:
{
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_22, 1);
x_26 = lean_ctor_get(x_22, 0);
lean_dec(x_26);
x_27 = l_Lake_exeFileContents;
x_28 = l_IO_FS_writeFile(x_9, x_27, x_23);
lean_dec(x_9);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_free_object(x_22);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lake_initPkg___lambda__3(x_6, x_7, x_8, x_1, x_29, x_25, x_30);
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_32 = !lean_is_exclusive(x_28);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_28, 0);
x_34 = lean_io_error_to_string(x_33);
x_35 = 3;
x_36 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_35);
x_37 = lean_array_get_size(x_25);
x_38 = lean_array_push(x_25, x_36);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 1, x_38);
lean_ctor_set(x_22, 0, x_37);
lean_ctor_set_tag(x_28, 0);
lean_ctor_set(x_28, 0, x_22);
return x_28;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_28, 0);
x_40 = lean_ctor_get(x_28, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_28);
x_41 = lean_io_error_to_string(x_39);
x_42 = 3;
x_43 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_42);
x_44 = lean_array_get_size(x_25);
x_45 = lean_array_push(x_25, x_43);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 1, x_45);
lean_ctor_set(x_22, 0, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_22);
lean_ctor_set(x_46, 1, x_40);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_22, 1);
lean_inc(x_47);
lean_dec(x_22);
x_48 = l_Lake_exeFileContents;
x_49 = l_IO_FS_writeFile(x_9, x_48, x_23);
lean_dec(x_9);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lake_initPkg___lambda__3(x_6, x_7, x_8, x_1, x_50, x_47, x_51);
lean_dec(x_50);
lean_dec(x_8);
lean_dec(x_7);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_53 = lean_ctor_get(x_49, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_49, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_55 = x_49;
} else {
 lean_dec_ref(x_49);
 x_55 = lean_box(0);
}
x_56 = lean_io_error_to_string(x_53);
x_57 = 3;
x_58 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set_uint8(x_58, sizeof(void*)*1, x_57);
x_59 = lean_array_get_size(x_47);
x_60 = lean_array_push(x_47, x_58);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
if (lean_is_scalar(x_55)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_55;
 lean_ctor_set_tag(x_62, 0);
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_54);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
lean_object* x_64; 
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_22);
lean_ctor_set(x_64, 1, x_23);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_22, 0);
x_66 = lean_ctor_get(x_22, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_22);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_23);
return x_68;
}
}
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_173; uint8_t x_174; 
x_144 = lean_ctor_get(x_14, 1);
lean_inc(x_144);
lean_dec(x_14);
x_145 = l_Lake_escapeName_x21(x_4);
x_146 = lean_box(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_147 = lean_alloc_closure((void*)(l_Lake_initPkg___lambda__3___boxed), 7, 4);
lean_closure_set(x_147, 0, x_6);
lean_closure_set(x_147, 1, x_7);
lean_closure_set(x_147, 2, x_8);
lean_closure_set(x_147, 3, x_146);
x_173 = 1;
x_174 = l_Lake_instDecidableEqInitTemplate(x_1, x_173);
if (x_174 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
if (x_10 == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_175 = lean_box(x_1);
lean_inc(x_145);
x_176 = lean_alloc_closure((void*)(l_Lake_initPkg___lambda__4___boxed), 7, 4);
lean_closure_set(x_176, 0, x_175);
lean_closure_set(x_176, 1, x_147);
lean_closure_set(x_176, 2, x_6);
lean_closure_set(x_176, 3, x_145);
x_177 = l_Lake_mainFileName___closed__2;
lean_inc(x_9);
x_178 = l_System_FilePath_withExtension(x_9, x_177);
x_179 = l_Lake_initPkg___lambda__6___closed__1;
lean_inc(x_178);
x_180 = l_System_FilePath_join(x_178, x_179);
x_181 = l_System_FilePath_pathExists(x_180, x_15);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_unbox(x_182);
lean_dec(x_182);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; 
x_184 = lean_ctor_get(x_181, 1);
lean_inc(x_184);
lean_dec(x_181);
x_185 = l_IO_FS_createDirAll(x_178, x_184);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_185, 1);
lean_inc(x_186);
lean_dec(x_185);
x_187 = l_Lake_basicFileContents;
x_188 = l_IO_FS_writeFile(x_180, x_187, x_186);
lean_dec(x_180);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = l_Lake_initPkg___lambda__5(x_4, x_145, x_9, x_176, x_189, x_144, x_190);
lean_dec(x_189);
lean_dec(x_9);
lean_dec(x_145);
return x_191;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_176);
lean_dec(x_145);
lean_dec(x_9);
lean_dec(x_4);
x_192 = lean_ctor_get(x_188, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_188, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_194 = x_188;
} else {
 lean_dec_ref(x_188);
 x_194 = lean_box(0);
}
x_195 = lean_io_error_to_string(x_192);
x_196 = 3;
x_197 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set_uint8(x_197, sizeof(void*)*1, x_196);
x_198 = lean_array_get_size(x_144);
x_199 = lean_array_push(x_144, x_197);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_199);
if (lean_is_scalar(x_194)) {
 x_201 = lean_alloc_ctor(0, 2, 0);
} else {
 x_201 = x_194;
 lean_ctor_set_tag(x_201, 0);
}
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_193);
return x_201;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
lean_dec(x_180);
lean_dec(x_176);
lean_dec(x_145);
lean_dec(x_9);
lean_dec(x_4);
x_202 = lean_ctor_get(x_185, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_185, 1);
lean_inc(x_203);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_204 = x_185;
} else {
 lean_dec_ref(x_185);
 x_204 = lean_box(0);
}
x_205 = lean_io_error_to_string(x_202);
x_206 = 3;
x_207 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_207, 0, x_205);
lean_ctor_set_uint8(x_207, sizeof(void*)*1, x_206);
x_208 = lean_array_get_size(x_144);
x_209 = lean_array_push(x_144, x_207);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
if (lean_is_scalar(x_204)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_204;
 lean_ctor_set_tag(x_211, 0);
}
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_203);
return x_211;
}
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_180);
lean_dec(x_178);
x_212 = lean_ctor_get(x_181, 1);
lean_inc(x_212);
lean_dec(x_181);
x_213 = lean_box(0);
x_214 = l_Lake_initPkg___lambda__5(x_4, x_145, x_9, x_176, x_213, x_144, x_212);
lean_dec(x_9);
lean_dec(x_145);
return x_214;
}
}
else
{
lean_object* x_215; lean_object* x_216; 
lean_dec(x_9);
lean_dec(x_4);
x_215 = lean_box(0);
x_216 = l_Lake_initPkg___lambda__4(x_1, x_147, x_6, x_145, x_215, x_144, x_15);
lean_dec(x_145);
return x_216;
}
}
else
{
lean_object* x_217; lean_object* x_218; uint8_t x_219; 
lean_dec(x_147);
lean_dec(x_145);
lean_dec(x_4);
x_217 = l_System_FilePath_pathExists(x_9, x_15);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_unbox(x_218);
lean_dec(x_218);
if (x_219 == 0)
{
lean_object* x_220; lean_object* x_221; 
x_220 = lean_ctor_get(x_217, 1);
lean_inc(x_220);
lean_dec(x_217);
lean_inc(x_9);
x_221 = l_System_FilePath_parent(x_9);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; 
x_222 = lean_box(0);
x_223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_144);
x_148 = x_223;
x_149 = x_220;
goto block_172;
}
else
{
lean_object* x_224; lean_object* x_225; 
x_224 = lean_ctor_get(x_221, 0);
lean_inc(x_224);
lean_dec(x_221);
x_225 = l_IO_FS_createDirAll(x_224, x_220);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
lean_dec(x_225);
x_228 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_228, 0, x_226);
lean_ctor_set(x_228, 1, x_144);
x_148 = x_228;
x_149 = x_227;
goto block_172;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_229 = lean_ctor_get(x_225, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_225, 1);
lean_inc(x_230);
lean_dec(x_225);
x_231 = lean_io_error_to_string(x_229);
x_232 = 3;
x_233 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set_uint8(x_233, sizeof(void*)*1, x_232);
x_234 = lean_array_get_size(x_144);
x_235 = lean_array_push(x_144, x_233);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_235);
x_148 = x_236;
x_149 = x_230;
goto block_172;
}
}
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; 
lean_dec(x_9);
x_237 = lean_ctor_get(x_217, 1);
lean_inc(x_237);
lean_dec(x_217);
x_238 = lean_box(0);
x_239 = l_Lake_initPkg___lambda__3(x_6, x_7, x_8, x_1, x_238, x_144, x_237);
lean_dec(x_8);
lean_dec(x_7);
return x_239;
}
}
block_172:
{
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_151 = x_148;
} else {
 lean_dec_ref(x_148);
 x_151 = lean_box(0);
}
x_152 = l_Lake_exeFileContents;
x_153 = l_IO_FS_writeFile(x_9, x_152, x_149);
lean_dec(x_9);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_151);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
lean_dec(x_153);
x_156 = l_Lake_initPkg___lambda__3(x_6, x_7, x_8, x_1, x_154, x_150, x_155);
lean_dec(x_154);
lean_dec(x_8);
lean_dec(x_7);
return x_156;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_157 = lean_ctor_get(x_153, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_153, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_159 = x_153;
} else {
 lean_dec_ref(x_153);
 x_159 = lean_box(0);
}
x_160 = lean_io_error_to_string(x_157);
x_161 = 3;
x_162 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set_uint8(x_162, sizeof(void*)*1, x_161);
x_163 = lean_array_get_size(x_150);
x_164 = lean_array_push(x_150, x_162);
if (lean_is_scalar(x_151)) {
 x_165 = lean_alloc_ctor(1, 2, 0);
} else {
 x_165 = x_151;
 lean_ctor_set_tag(x_165, 1);
}
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
if (lean_is_scalar(x_159)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_159;
 lean_ctor_set_tag(x_166, 0);
}
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_158);
return x_166;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_167 = lean_ctor_get(x_148, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_148, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_169 = x_148;
} else {
 lean_dec_ref(x_148);
 x_169 = lean_box(0);
}
if (lean_is_scalar(x_169)) {
 x_170 = lean_alloc_ctor(1, 2, 0);
} else {
 x_170 = x_169;
}
lean_ctor_set(x_170, 0, x_167);
lean_ctor_set(x_170, 1, x_168);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_149);
return x_171;
}
}
}
}
else
{
uint8_t x_240; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_240 = !lean_is_exclusive(x_14);
if (x_240 == 0)
{
lean_object* x_241; 
x_241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_241, 0, x_14);
lean_ctor_set(x_241, 1, x_15);
return x_241;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_242 = lean_ctor_get(x_14, 0);
x_243 = lean_ctor_get(x_14, 1);
lean_inc(x_243);
lean_inc(x_242);
lean_dec(x_14);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_242);
lean_ctor_set(x_244, 1, x_243);
x_245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_15);
return x_245;
}
}
}
}
}
static lean_object* _init_l_Lake_initPkg___lambda__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("package already initialized", 27);
return x_1;
}
}
static lean_object* _init_l_Lake_initPkg___lambda__7___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 3;
x_2 = l_Lake_initPkg___lambda__7___closed__1;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_14 = x_10;
} else {
 lean_dec_ref(x_10);
 x_14 = lean_box(0);
}
if (x_5 == 0)
{
lean_object* x_37; 
x_37 = l_Lake_defaultLeanConfigFile;
x_15 = x_37;
goto block_36;
}
else
{
lean_object* x_38; 
x_38 = l_Lake_defaultTomlConfigFile;
x_15 = x_38;
goto block_36;
}
block_36:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_inc(x_1);
x_16 = l_System_FilePath_join(x_1, x_15);
x_17 = l_System_FilePath_pathExists(x_16, x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
lean_dec(x_14);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_box(0);
x_22 = lean_unbox(x_13);
lean_dec(x_13);
x_23 = l_Lake_initPkg___lambda__6(x_4, x_5, x_6, x_11, x_16, x_1, x_2, x_3, x_12, x_22, x_21, x_8, x_20);
lean_dec(x_16);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_17, 0);
lean_dec(x_25);
x_26 = lean_array_get_size(x_8);
x_27 = l_Lake_initPkg___lambda__7___closed__2;
x_28 = lean_array_push(x_8, x_27);
if (lean_is_scalar(x_14)) {
 x_29 = lean_alloc_ctor(1, 2, 0);
} else {
 x_29 = x_14;
 lean_ctor_set_tag(x_29, 1);
}
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_17, 0, x_29);
return x_17;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = lean_array_get_size(x_8);
x_32 = l_Lake_initPkg___lambda__7___closed__2;
x_33 = lean_array_push(x_8, x_32);
if (lean_is_scalar(x_14)) {
 x_34 = lean_alloc_ctor(1, 2, 0);
} else {
 x_34 = x_14;
 lean_ctor_set_tag(x_34, 1);
}
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_30);
return x_35;
}
}
}
}
}
static lean_object* _init_l_Lake_initPkg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("lean", 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_inc(x_2);
x_8 = l_Lake_stringToLegalOrSimpleName(x_2);
x_9 = l_Lake_initPkg___closed__1;
lean_inc(x_8);
x_10 = l_Lean_modToFilePath(x_1, x_8, x_9);
x_11 = l_System_FilePath_pathExists(x_10, x_7);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = 1;
x_16 = l_Lake_instDecidableEqInitTemplate(x_3, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = lean_unbox(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_13);
lean_dec(x_10);
x_18 = l_Lake_toUpperCamelCase(x_8);
lean_inc(x_18);
x_19 = l_Lean_modToFilePath(x_1, x_18, x_9);
x_20 = l_System_FilePath_pathExists(x_19, x_14);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_ctor_set(x_20, 1, x_22);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_11, 1, x_20);
lean_ctor_set(x_11, 0, x_18);
x_24 = l_Lake_initPkg___lambda__7(x_1, x_2, x_5, x_3, x_4, x_8, x_11, x_6, x_23);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_20, 0);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_20);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_11, 1, x_27);
lean_ctor_set(x_11, 0, x_18);
x_28 = l_Lake_initPkg___lambda__7(x_1, x_2, x_5, x_3, x_4, x_8, x_11, x_6, x_26);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_ctor_set(x_11, 1, x_13);
lean_ctor_set(x_11, 0, x_10);
lean_inc(x_8);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_8);
lean_ctor_set(x_29, 1, x_11);
x_30 = l_Lake_initPkg___lambda__7(x_1, x_2, x_5, x_3, x_4, x_8, x_29, x_6, x_14);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_ctor_set(x_11, 1, x_13);
lean_ctor_set(x_11, 0, x_10);
lean_inc(x_8);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_8);
lean_ctor_set(x_31, 1, x_11);
x_32 = l_Lake_initPkg___lambda__7(x_1, x_2, x_5, x_3, x_4, x_8, x_31, x_6, x_14);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; uint8_t x_36; 
x_33 = lean_ctor_get(x_11, 0);
x_34 = lean_ctor_get(x_11, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_11);
x_35 = 1;
x_36 = l_Lake_instDecidableEqInitTemplate(x_3, x_35);
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = lean_unbox(x_33);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_33);
lean_dec(x_10);
x_38 = l_Lake_toUpperCamelCase(x_8);
lean_inc(x_38);
x_39 = l_Lean_modToFilePath(x_1, x_38, x_9);
x_40 = l_System_FilePath_pathExists(x_39, x_34);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_43 = x_40;
} else {
 lean_dec_ref(x_40);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_38);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lake_initPkg___lambda__7(x_1, x_2, x_5, x_3, x_4, x_8, x_45, x_6, x_42);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_10);
lean_ctor_set(x_47, 1, x_33);
lean_inc(x_8);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_8);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lake_initPkg___lambda__7(x_1, x_2, x_5, x_3, x_4, x_8, x_48, x_6, x_34);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_10);
lean_ctor_set(x_50, 1, x_33);
lean_inc(x_8);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_8);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lake_initPkg___lambda__7(x_1, x_2, x_5, x_3, x_4, x_8, x_51, x_6, x_34);
return x_52;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lake_initPkg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lake_initPkg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = l_Lake_initPkg___lambda__3(x_1, x_2, x_3, x_8, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lake_initPkg___lambda__4(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lake_initPkg___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_unbox(x_1);
lean_dec(x_1);
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox(x_10);
lean_dec(x_10);
x_17 = l_Lake_initPkg___lambda__6(x_14, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16, x_11, x_12, x_13);
lean_dec(x_11);
lean_dec(x_5);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = l_Lake_initPkg___lambda__7(x_1, x_2, x_3, x_10, x_11, x_6, x_7, x_8, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lake_initPkg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = l_Lake_initPkg(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
return x_10;
}
}
LEAN_EXPORT uint8_t l_String_anyAux___at_Lake_validatePkgName___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
else
{
uint32_t x_6; uint32_t x_7; uint8_t x_8; 
x_6 = lean_string_utf8_get(x_1, x_3);
x_7 = 46;
x_8 = lean_uint32_dec_eq(x_6, x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_3);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
}
}
}
static lean_object* _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqChar___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__1;
x_2 = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 92;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3___boxed__const__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 47;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3;
x_2 = l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4___boxed__const__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_String_anyAux___at_Lake_validatePkgName___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
else
{
uint32_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_string_utf8_get(x_1, x_3);
x_7 = l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__2;
x_8 = l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4;
x_9 = lean_box_uint32(x_6);
x_10 = l_List_elem___rarg(x_7, x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
lean_dec(x_3);
x_13 = 1;
return x_13;
}
}
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_validatePkgName___lambda__1___closed__1;
x_2 = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("main", 4);
return x_1;
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lake_validatePkgName___lambda__1___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("lake", 4);
return x_1;
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_validatePkgName___lambda__1___closed__5;
x_2 = l_Lake_validatePkgName___lambda__1___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_initPkg___closed__1;
x_2 = l_Lake_validatePkgName___lambda__1___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_initPkg___lambda__2___closed__5;
x_2 = l_Lake_validatePkgName___lambda__1___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reserved package name", 21);
return x_1;
}
}
static lean_object* _init_l_Lake_validatePkgName___lambda__1___closed__10() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 3;
x_2 = l_Lake_validatePkgName___lambda__1___closed__9;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_validatePkgName___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_String_mapAux___at_String_toLower___spec__1(x_5, x_1);
x_7 = l_Lake_validatePkgName___lambda__1___closed__2;
x_8 = l_Lake_validatePkgName___lambda__1___closed__8;
x_9 = l_List_elem___rarg(x_7, x_6, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_array_get_size(x_3);
x_14 = l_Lake_validatePkgName___lambda__1___closed__10;
x_15 = lean_array_push(x_3, x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
}
}
static lean_object* _init_l_Lake_validatePkgName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("illegal package name '", 22);
return x_1;
}
}
static lean_object* _init_l_Lake_validatePkgName___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_validatePkgName(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_16; 
x_16 = l_String_isEmpty(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_string_utf8_byte_size(x_1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_String_anyAux___at_Lake_validatePkgName___spec__1(x_1, x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_17);
x_20 = lean_box(0);
x_4 = x_20;
goto block_15;
}
else
{
uint8_t x_21; 
x_21 = l_String_anyAux___at_Lake_validatePkgName___spec__2(x_1, x_17, x_18);
lean_dec(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lake_validatePkgName___lambda__1(x_1, x_22, x_2, x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = l_Lake_validatePkgName___closed__1;
x_25 = lean_string_append(x_24, x_1);
lean_dec(x_1);
x_26 = l_Lake_validatePkgName___closed__2;
x_27 = lean_string_append(x_25, x_26);
x_28 = 3;
x_29 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_28);
x_30 = lean_array_get_size(x_2);
x_31 = lean_array_push(x_2, x_29);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_3);
return x_33;
}
}
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_4 = x_34;
goto block_15;
}
block_15:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_5 = l_Lake_validatePkgName___closed__1;
x_6 = lean_string_append(x_5, x_1);
lean_dec(x_1);
x_7 = l_Lake_validatePkgName___closed__2;
x_8 = lean_string_append(x_6, x_7);
x_9 = 3;
x_10 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set_uint8(x_10, sizeof(void*)*1, x_9);
x_11 = lean_array_get_size(x_2);
x_12 = lean_array_push(x_2, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_String_anyAux___at_Lake_validatePkgName___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_String_anyAux___at_Lake_validatePkgName___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_String_anyAux___at_Lake_validatePkgName___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_validatePkgName___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lake_validatePkgName___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_init___lambda__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_String_trim(x_5);
lean_inc(x_8);
x_9 = l_Lake_validatePkgName(x_8, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
lean_inc(x_1);
x_15 = l_IO_FS_createDirAll(x_1, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_free_object(x_10);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lake_initPkg(x_1, x_8, x_2, x_3, x_4, x_13, x_16);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_io_error_to_string(x_19);
x_21 = 3;
x_22 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*1, x_21);
x_23 = lean_array_get_size(x_13);
x_24 = lean_array_push(x_13, x_22);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 1, x_24);
lean_ctor_set(x_10, 0, x_23);
lean_ctor_set_tag(x_15, 0);
lean_ctor_set(x_15, 0, x_10);
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = lean_io_error_to_string(x_25);
x_28 = 3;
x_29 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_28);
x_30 = lean_array_get_size(x_13);
x_31 = lean_array_push(x_13, x_29);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 1, x_31);
lean_ctor_set(x_10, 0, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_10);
lean_ctor_set(x_32, 1, x_26);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_10, 1);
lean_inc(x_33);
lean_dec(x_10);
lean_inc(x_1);
x_34 = l_IO_FS_createDirAll(x_1, x_11);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lake_initPkg(x_1, x_8, x_2, x_3, x_4, x_33, x_35);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_39 = x_34;
} else {
 lean_dec_ref(x_34);
 x_39 = lean_box(0);
}
x_40 = lean_io_error_to_string(x_37);
x_41 = 3;
x_42 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*1, x_41);
x_43 = lean_array_get_size(x_33);
x_44 = lean_array_push(x_33, x_42);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
if (lean_is_scalar(x_39)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_39;
 lean_ctor_set_tag(x_46, 0);
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_38);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_9);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_9, 0);
lean_dec(x_48);
x_49 = !lean_is_exclusive(x_10);
if (x_49 == 0)
{
return x_9;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_10, 0);
x_51 = lean_ctor_get(x_10, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_10);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_9, 0, x_52);
return x_9;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_9, 1);
lean_inc(x_53);
lean_dec(x_9);
x_54 = lean_ctor_get(x_10, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_10, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_56 = x_10;
} else {
 lean_dec_ref(x_10);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_53);
return x_58;
}
}
}
}
static lean_object* _init_l_Lake_init___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("illegal package name: could not derive one from '", 49);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_init(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lake_escapeName_x21___closed__5;
x_9 = lean_string_dec_eq(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lake_init___lambda__1(x_5, x_2, x_3, x_4, x_1, x_6, x_7);
return x_10;
}
else
{
lean_object* x_11; 
lean_inc(x_5);
x_11 = lean_io_realpath(x_5, x_7);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
x_15 = l_System_FilePath_fileName(x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_5);
lean_dec(x_4);
x_16 = l_Lake_init___closed__1;
x_17 = lean_string_append(x_16, x_13);
lean_dec(x_13);
x_18 = l_Lake_validatePkgName___closed__2;
x_19 = lean_string_append(x_17, x_18);
x_20 = 3;
x_21 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*1, x_20);
x_22 = lean_array_get_size(x_6);
x_23 = lean_array_push(x_6, x_21);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_11, 0, x_24);
return x_11;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_free_object(x_11);
lean_dec(x_13);
x_25 = lean_ctor_get(x_15, 0);
lean_inc(x_25);
lean_dec(x_15);
x_26 = l_Lake_init___lambda__1(x_5, x_2, x_3, x_4, x_25, x_6, x_14);
lean_dec(x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_11, 0);
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_11);
lean_inc(x_27);
x_29 = l_System_FilePath_fileName(x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_5);
lean_dec(x_4);
x_30 = l_Lake_init___closed__1;
x_31 = lean_string_append(x_30, x_27);
lean_dec(x_27);
x_32 = l_Lake_validatePkgName___closed__2;
x_33 = lean_string_append(x_31, x_32);
x_34 = 3;
x_35 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set_uint8(x_35, sizeof(void*)*1, x_34);
x_36 = lean_array_get_size(x_6);
x_37 = lean_array_push(x_6, x_35);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_28);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_27);
x_40 = lean_ctor_get(x_29, 0);
lean_inc(x_40);
lean_dec(x_29);
x_41 = l_Lake_init___lambda__1(x_5, x_2, x_3, x_4, x_40, x_6, x_28);
lean_dec(x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_5);
lean_dec(x_4);
x_42 = !lean_is_exclusive(x_11);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_43 = lean_ctor_get(x_11, 0);
x_44 = lean_io_error_to_string(x_43);
x_45 = 3;
x_46 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set_uint8(x_46, sizeof(void*)*1, x_45);
x_47 = lean_array_get_size(x_6);
x_48 = lean_array_push(x_6, x_46);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
lean_ctor_set_tag(x_11, 0);
lean_ctor_set(x_11, 0, x_49);
return x_11;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_50 = lean_ctor_get(x_11, 0);
x_51 = lean_ctor_get(x_11, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_11);
x_52 = lean_io_error_to_string(x_50);
x_53 = 3;
x_54 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_53);
x_55 = lean_array_get_size(x_6);
x_56 = lean_array_push(x_6, x_54);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_51);
return x_58;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_init___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lake_init___lambda__1(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lake_init___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lake_init(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at_Lake_new___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_string_utf8_at_end(x_2, x_1);
if (x_3 == 0)
{
uint32_t x_4; uint32_t x_5; uint8_t x_6; 
x_4 = lean_string_utf8_get(x_2, x_1);
x_5 = 46;
x_6 = lean_uint32_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_string_utf8_set(x_2, x_1, x_4);
x_8 = lean_string_utf8_next(x_7, x_1);
lean_dec(x_1);
x_1 = x_8;
x_2 = x_7;
goto _start;
}
else
{
uint32_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 45;
x_11 = lean_string_utf8_set(x_2, x_1, x_10);
x_12 = lean_string_utf8_next(x_11, x_1);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_11;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Lake_new(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_String_trim(x_1);
lean_inc(x_8);
x_9 = l_Lake_validatePkgName(x_8, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
x_16 = l_String_mapAux___at_Lake_new___spec__1(x_15, x_8);
x_17 = l_System_FilePath_join(x_5, x_16);
lean_inc(x_17);
x_18 = l_IO_FS_createDirAll(x_17, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_free_object(x_10);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lake_initPkg(x_17, x_8, x_2, x_3, x_4, x_13, x_19);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_io_error_to_string(x_22);
x_24 = 3;
x_25 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*1, x_24);
x_26 = lean_array_get_size(x_13);
x_27 = lean_array_push(x_13, x_25);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 1, x_27);
lean_ctor_set(x_10, 0, x_26);
lean_ctor_set_tag(x_18, 0);
lean_ctor_set(x_18, 0, x_10);
return x_18;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_28 = lean_ctor_get(x_18, 0);
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_18);
x_30 = lean_io_error_to_string(x_28);
x_31 = 3;
x_32 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*1, x_31);
x_33 = lean_array_get_size(x_13);
x_34 = lean_array_push(x_13, x_32);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 1, x_34);
lean_ctor_set(x_10, 0, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_10);
lean_ctor_set(x_35, 1, x_29);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_10, 1);
lean_inc(x_36);
lean_dec(x_10);
x_37 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
x_38 = l_String_mapAux___at_Lake_new___spec__1(x_37, x_8);
x_39 = l_System_FilePath_join(x_5, x_38);
lean_inc(x_39);
x_40 = l_IO_FS_createDirAll(x_39, x_11);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Lake_initPkg(x_39, x_8, x_2, x_3, x_4, x_36, x_41);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_39);
lean_dec(x_8);
lean_dec(x_4);
x_43 = lean_ctor_get(x_40, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_45 = x_40;
} else {
 lean_dec_ref(x_40);
 x_45 = lean_box(0);
}
x_46 = lean_io_error_to_string(x_43);
x_47 = 3;
x_48 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set_uint8(x_48, sizeof(void*)*1, x_47);
x_49 = lean_array_get_size(x_36);
x_50 = lean_array_push(x_36, x_48);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
if (lean_is_scalar(x_45)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_45;
 lean_ctor_set_tag(x_52, 0);
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_44);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
x_53 = !lean_is_exclusive(x_9);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_9, 0);
lean_dec(x_54);
x_55 = !lean_is_exclusive(x_10);
if (x_55 == 0)
{
return x_9;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_10, 0);
x_57 = lean_ctor_get(x_10, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_10);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_9, 0, x_58);
return x_9;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = lean_ctor_get(x_9, 1);
lean_inc(x_59);
lean_dec(x_9);
x_60 = lean_ctor_get(x_10, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_10, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_62 = x_10;
} else {
 lean_dec_ref(x_10);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_59);
return x_64;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_new___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lake_new(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lake_Util_Git(uint8_t builtin, lean_object*);
lean_object* initialize_Lake_Util_Sugar(uint8_t builtin, lean_object*);
lean_object* initialize_Lake_Config_Lang(uint8_t builtin, lean_object*);
lean_object* initialize_Lake_Config_Package(uint8_t builtin, lean_object*);
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin, lean_object*);
lean_object* initialize_Lake_Load_Config(uint8_t builtin, lean_object*);
lean_object* initialize_Lake_Build_Actions(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Init(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Git(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Sugar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Lang(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Package(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Workspace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Config(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Actions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_defaultExeRoot___closed__1 = _init_l_Lake_defaultExeRoot___closed__1();
lean_mark_persistent(l_Lake_defaultExeRoot___closed__1);
l_Lake_defaultExeRoot___closed__2 = _init_l_Lake_defaultExeRoot___closed__2();
lean_mark_persistent(l_Lake_defaultExeRoot___closed__2);
l_Lake_defaultExeRoot = _init_l_Lake_defaultExeRoot();
lean_mark_persistent(l_Lake_defaultExeRoot);
l_Lake_toolchainFileName___closed__1 = _init_l_Lake_toolchainFileName___closed__1();
lean_mark_persistent(l_Lake_toolchainFileName___closed__1);
l_Lake_toolchainFileName = _init_l_Lake_toolchainFileName();
lean_mark_persistent(l_Lake_toolchainFileName);
l_Lake_gitignoreContents___closed__1 = _init_l_Lake_gitignoreContents___closed__1();
lean_mark_persistent(l_Lake_gitignoreContents___closed__1);
l_Lake_gitignoreContents___closed__2 = _init_l_Lake_gitignoreContents___closed__2();
lean_mark_persistent(l_Lake_gitignoreContents___closed__2);
l_Lake_gitignoreContents___closed__3 = _init_l_Lake_gitignoreContents___closed__3();
lean_mark_persistent(l_Lake_gitignoreContents___closed__3);
l_Lake_gitignoreContents___closed__4 = _init_l_Lake_gitignoreContents___closed__4();
lean_mark_persistent(l_Lake_gitignoreContents___closed__4);
l_Lake_gitignoreContents___closed__5 = _init_l_Lake_gitignoreContents___closed__5();
lean_mark_persistent(l_Lake_gitignoreContents___closed__5);
l_Lake_gitignoreContents = _init_l_Lake_gitignoreContents();
lean_mark_persistent(l_Lake_gitignoreContents);
l_Lake_basicFileContents___closed__1 = _init_l_Lake_basicFileContents___closed__1();
lean_mark_persistent(l_Lake_basicFileContents___closed__1);
l_Lake_basicFileContents = _init_l_Lake_basicFileContents();
lean_mark_persistent(l_Lake_basicFileContents);
l_Lake_libRootFileContents___closed__1 = _init_l_Lake_libRootFileContents___closed__1();
lean_mark_persistent(l_Lake_libRootFileContents___closed__1);
l_Lake_libRootFileContents___closed__2 = _init_l_Lake_libRootFileContents___closed__2();
lean_mark_persistent(l_Lake_libRootFileContents___closed__2);
l_Lake_libRootFileContents___closed__3 = _init_l_Lake_libRootFileContents___closed__3();
lean_mark_persistent(l_Lake_libRootFileContents___closed__3);
l_Lake_mainFileName___closed__1 = _init_l_Lake_mainFileName___closed__1();
lean_mark_persistent(l_Lake_mainFileName___closed__1);
l_Lake_mainFileName___closed__2 = _init_l_Lake_mainFileName___closed__2();
lean_mark_persistent(l_Lake_mainFileName___closed__2);
l_Lake_mainFileName___closed__3 = _init_l_Lake_mainFileName___closed__3();
lean_mark_persistent(l_Lake_mainFileName___closed__3);
l_Lake_mainFileName___closed__4 = _init_l_Lake_mainFileName___closed__4();
lean_mark_persistent(l_Lake_mainFileName___closed__4);
l_Lake_mainFileName___closed__5 = _init_l_Lake_mainFileName___closed__5();
lean_mark_persistent(l_Lake_mainFileName___closed__5);
l_Lake_mainFileName = _init_l_Lake_mainFileName();
lean_mark_persistent(l_Lake_mainFileName);
l_Lake_mainFileContents___closed__1 = _init_l_Lake_mainFileContents___closed__1();
lean_mark_persistent(l_Lake_mainFileContents___closed__1);
l_Lake_mainFileContents___closed__2 = _init_l_Lake_mainFileContents___closed__2();
lean_mark_persistent(l_Lake_mainFileContents___closed__2);
l_Lake_exeFileContents___closed__1 = _init_l_Lake_exeFileContents___closed__1();
lean_mark_persistent(l_Lake_exeFileContents___closed__1);
l_Lake_exeFileContents = _init_l_Lake_exeFileContents();
lean_mark_persistent(l_Lake_exeFileContents);
l_Lake_stdLeanConfigFileContents___closed__1 = _init_l_Lake_stdLeanConfigFileContents___closed__1();
lean_mark_persistent(l_Lake_stdLeanConfigFileContents___closed__1);
l_Lake_stdLeanConfigFileContents___closed__2 = _init_l_Lake_stdLeanConfigFileContents___closed__2();
lean_mark_persistent(l_Lake_stdLeanConfigFileContents___closed__2);
l_Lake_stdLeanConfigFileContents___closed__3 = _init_l_Lake_stdLeanConfigFileContents___closed__3();
lean_mark_persistent(l_Lake_stdLeanConfigFileContents___closed__3);
l_Lake_stdLeanConfigFileContents___closed__4 = _init_l_Lake_stdLeanConfigFileContents___closed__4();
lean_mark_persistent(l_Lake_stdLeanConfigFileContents___closed__4);
l_Lake_stdTomlConfigFileContents___closed__1 = _init_l_Lake_stdTomlConfigFileContents___closed__1();
lean_mark_persistent(l_Lake_stdTomlConfigFileContents___closed__1);
l_Lake_stdTomlConfigFileContents___closed__2 = _init_l_Lake_stdTomlConfigFileContents___closed__2();
lean_mark_persistent(l_Lake_stdTomlConfigFileContents___closed__2);
l_Lake_stdTomlConfigFileContents___closed__3 = _init_l_Lake_stdTomlConfigFileContents___closed__3();
lean_mark_persistent(l_Lake_stdTomlConfigFileContents___closed__3);
l_Lake_stdTomlConfigFileContents___closed__4 = _init_l_Lake_stdTomlConfigFileContents___closed__4();
lean_mark_persistent(l_Lake_stdTomlConfigFileContents___closed__4);
l_Lake_stdTomlConfigFileContents___closed__5 = _init_l_Lake_stdTomlConfigFileContents___closed__5();
lean_mark_persistent(l_Lake_stdTomlConfigFileContents___closed__5);
l_Lake_exeLeanConfigFileContents___closed__1 = _init_l_Lake_exeLeanConfigFileContents___closed__1();
lean_mark_persistent(l_Lake_exeLeanConfigFileContents___closed__1);
l_Lake_exeLeanConfigFileContents___closed__2 = _init_l_Lake_exeLeanConfigFileContents___closed__2();
lean_mark_persistent(l_Lake_exeLeanConfigFileContents___closed__2);
l_Lake_exeTomlConfigFileContents___closed__1 = _init_l_Lake_exeTomlConfigFileContents___closed__1();
lean_mark_persistent(l_Lake_exeTomlConfigFileContents___closed__1);
l_Lake_libLeanConfigFileContents___closed__1 = _init_l_Lake_libLeanConfigFileContents___closed__1();
lean_mark_persistent(l_Lake_libLeanConfigFileContents___closed__1);
l_Lake_libLeanConfigFileContents___closed__2 = _init_l_Lake_libLeanConfigFileContents___closed__2();
lean_mark_persistent(l_Lake_libLeanConfigFileContents___closed__2);
l_Lake_mathLeanConfigFileContents___closed__1 = _init_l_Lake_mathLeanConfigFileContents___closed__1();
lean_mark_persistent(l_Lake_mathLeanConfigFileContents___closed__1);
l_Lake_mathLeanConfigFileContents___closed__2 = _init_l_Lake_mathLeanConfigFileContents___closed__2();
lean_mark_persistent(l_Lake_mathLeanConfigFileContents___closed__2);
l_Lake_mathTomlConfigFileContents___closed__1 = _init_l_Lake_mathTomlConfigFileContents___closed__1();
lean_mark_persistent(l_Lake_mathTomlConfigFileContents___closed__1);
l_Lake_readmeFileContents___closed__1 = _init_l_Lake_readmeFileContents___closed__1();
lean_mark_persistent(l_Lake_readmeFileContents___closed__1);
l_Lake_mathToolchainUrl___closed__1 = _init_l_Lake_mathToolchainUrl___closed__1();
lean_mark_persistent(l_Lake_mathToolchainUrl___closed__1);
l_Lake_mathToolchainUrl = _init_l_Lake_mathToolchainUrl();
lean_mark_persistent(l_Lake_mathToolchainUrl);
l_Lake_InitTemplate_noConfusion___rarg___closed__1 = _init_l_Lake_InitTemplate_noConfusion___rarg___closed__1();
lean_mark_persistent(l_Lake_InitTemplate_noConfusion___rarg___closed__1);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__1 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__1();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__1);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__2 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__2();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__2);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__3 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__3();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__3);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__4 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__4();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__4);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__5 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__5();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__5);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__6 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__6();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__6);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__7 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__7();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__7);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__8 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__8();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__8);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__9 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__9();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__9);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__10 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__10();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__10);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__11 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__11();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__11);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__12 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__12();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__12);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__13 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__13();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__13);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__14 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__14();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__14);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__15 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__15();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__15);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__16 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__16();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__16);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__17 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__17();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__17);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__18 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__18();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__18);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__19 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__19();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__19);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__20 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__20();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__20);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__21 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__21();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__21);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__22 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__22();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__22);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__23 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__23();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__23);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__24 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__24();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__24);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__25 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__25();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__25);
l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__26 = _init_l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__26();
lean_mark_persistent(l___private_Lake_CLI_Init_0__Lake_reprInitTemplate____x40_Lake_CLI_Init___hyg_400____closed__26);
l_Lake_instReprInitTemplate___closed__1 = _init_l_Lake_instReprInitTemplate___closed__1();
lean_mark_persistent(l_Lake_instReprInitTemplate___closed__1);
l_Lake_instReprInitTemplate = _init_l_Lake_instReprInitTemplate();
lean_mark_persistent(l_Lake_instReprInitTemplate);
l_Lake_instInhabitedInitTemplate = _init_l_Lake_instInhabitedInitTemplate();
l_Lake_InitTemplate_ofString_x3f___closed__1 = _init_l_Lake_InitTemplate_ofString_x3f___closed__1();
lean_mark_persistent(l_Lake_InitTemplate_ofString_x3f___closed__1);
l_Lake_InitTemplate_ofString_x3f___closed__2 = _init_l_Lake_InitTemplate_ofString_x3f___closed__2();
lean_mark_persistent(l_Lake_InitTemplate_ofString_x3f___closed__2);
l_Lake_InitTemplate_ofString_x3f___closed__3 = _init_l_Lake_InitTemplate_ofString_x3f___closed__3();
lean_mark_persistent(l_Lake_InitTemplate_ofString_x3f___closed__3);
l_Lake_InitTemplate_ofString_x3f___closed__4 = _init_l_Lake_InitTemplate_ofString_x3f___closed__4();
lean_mark_persistent(l_Lake_InitTemplate_ofString_x3f___closed__4);
l_Lake_InitTemplate_ofString_x3f___closed__5 = _init_l_Lake_InitTemplate_ofString_x3f___closed__5();
lean_mark_persistent(l_Lake_InitTemplate_ofString_x3f___closed__5);
l_Lake_InitTemplate_ofString_x3f___closed__6 = _init_l_Lake_InitTemplate_ofString_x3f___closed__6();
lean_mark_persistent(l_Lake_InitTemplate_ofString_x3f___closed__6);
l_Lake_InitTemplate_ofString_x3f___closed__7 = _init_l_Lake_InitTemplate_ofString_x3f___closed__7();
lean_mark_persistent(l_Lake_InitTemplate_ofString_x3f___closed__7);
l_Lake_InitTemplate_ofString_x3f___closed__8 = _init_l_Lake_InitTemplate_ofString_x3f___closed__8();
lean_mark_persistent(l_Lake_InitTemplate_ofString_x3f___closed__8);
l_Lake_escapeIdent___closed__1 = _init_l_Lake_escapeIdent___closed__1();
lean_mark_persistent(l_Lake_escapeIdent___closed__1);
l_Lake_escapeIdent___closed__2 = _init_l_Lake_escapeIdent___closed__2();
lean_mark_persistent(l_Lake_escapeIdent___closed__2);
l_Lake_escapeName_x21___closed__1 = _init_l_Lake_escapeName_x21___closed__1();
lean_mark_persistent(l_Lake_escapeName_x21___closed__1);
l_Lake_escapeName_x21___closed__2 = _init_l_Lake_escapeName_x21___closed__2();
lean_mark_persistent(l_Lake_escapeName_x21___closed__2);
l_Lake_escapeName_x21___closed__3 = _init_l_Lake_escapeName_x21___closed__3();
lean_mark_persistent(l_Lake_escapeName_x21___closed__3);
l_Lake_escapeName_x21___closed__4 = _init_l_Lake_escapeName_x21___closed__4();
lean_mark_persistent(l_Lake_escapeName_x21___closed__4);
l_Lake_escapeName_x21___closed__5 = _init_l_Lake_escapeName_x21___closed__5();
lean_mark_persistent(l_Lake_escapeName_x21___closed__5);
l_Lake_escapeName_x21___closed__6 = _init_l_Lake_escapeName_x21___closed__6();
lean_mark_persistent(l_Lake_escapeName_x21___closed__6);
l_Lake_InitTemplate_configFileContents___closed__1 = _init_l_Lake_InitTemplate_configFileContents___closed__1();
lean_mark_persistent(l_Lake_InitTemplate_configFileContents___closed__1);
l_Lake_initPkg___lambda__1___closed__1 = _init_l_Lake_initPkg___lambda__1___closed__1();
lean_mark_persistent(l_Lake_initPkg___lambda__1___closed__1);
l_Lake_initPkg___lambda__2___closed__1 = _init_l_Lake_initPkg___lambda__2___closed__1();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__1);
l_Lake_initPkg___lambda__2___closed__2 = _init_l_Lake_initPkg___lambda__2___closed__2();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__2);
l_Lake_initPkg___lambda__2___closed__3 = _init_l_Lake_initPkg___lambda__2___closed__3();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__3);
l_Lake_initPkg___lambda__2___closed__4 = _init_l_Lake_initPkg___lambda__2___closed__4();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__4);
l_Lake_initPkg___lambda__2___closed__5 = _init_l_Lake_initPkg___lambda__2___closed__5();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__5);
l_Lake_initPkg___lambda__2___closed__6 = _init_l_Lake_initPkg___lambda__2___closed__6();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__6);
l_Lake_initPkg___lambda__2___closed__7 = _init_l_Lake_initPkg___lambda__2___closed__7();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__7);
l_Lake_initPkg___lambda__2___closed__8 = _init_l_Lake_initPkg___lambda__2___closed__8();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__8);
l_Lake_initPkg___lambda__2___closed__9 = _init_l_Lake_initPkg___lambda__2___closed__9();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__9);
l_Lake_initPkg___lambda__2___closed__10 = _init_l_Lake_initPkg___lambda__2___closed__10();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__10);
l_Lake_initPkg___lambda__2___closed__11 = _init_l_Lake_initPkg___lambda__2___closed__11();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__11);
l_Lake_initPkg___lambda__2___closed__12 = _init_l_Lake_initPkg___lambda__2___closed__12();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__12);
l_Lake_initPkg___lambda__2___closed__13 = _init_l_Lake_initPkg___lambda__2___closed__13();
l_Lake_initPkg___lambda__2___closed__14 = _init_l_Lake_initPkg___lambda__2___closed__14();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__14);
l_Lake_initPkg___lambda__2___closed__15 = _init_l_Lake_initPkg___lambda__2___closed__15();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__15);
l_Lake_initPkg___lambda__2___closed__16 = _init_l_Lake_initPkg___lambda__2___closed__16();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__16);
l_Lake_initPkg___lambda__2___closed__17 = _init_l_Lake_initPkg___lambda__2___closed__17();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__17);
l_Lake_initPkg___lambda__2___closed__18 = _init_l_Lake_initPkg___lambda__2___closed__18();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__18);
l_Lake_initPkg___lambda__2___closed__19 = _init_l_Lake_initPkg___lambda__2___closed__19();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__19);
l_Lake_initPkg___lambda__2___closed__20 = _init_l_Lake_initPkg___lambda__2___closed__20();
lean_mark_persistent(l_Lake_initPkg___lambda__2___closed__20);
l_Lake_initPkg___lambda__3___closed__1 = _init_l_Lake_initPkg___lambda__3___closed__1();
lean_mark_persistent(l_Lake_initPkg___lambda__3___closed__1);
l_Lake_initPkg___lambda__3___closed__2 = _init_l_Lake_initPkg___lambda__3___closed__2();
lean_mark_persistent(l_Lake_initPkg___lambda__3___closed__2);
l_Lake_initPkg___lambda__3___closed__3 = _init_l_Lake_initPkg___lambda__3___closed__3();
lean_mark_persistent(l_Lake_initPkg___lambda__3___closed__3);
l_Lake_initPkg___lambda__3___closed__4 = _init_l_Lake_initPkg___lambda__3___closed__4();
lean_mark_persistent(l_Lake_initPkg___lambda__3___closed__4);
l_Lake_initPkg___lambda__3___closed__5 = _init_l_Lake_initPkg___lambda__3___closed__5();
lean_mark_persistent(l_Lake_initPkg___lambda__3___closed__5);
l_Lake_initPkg___lambda__3___closed__6 = _init_l_Lake_initPkg___lambda__3___closed__6();
lean_mark_persistent(l_Lake_initPkg___lambda__3___closed__6);
l_Lake_initPkg___lambda__6___closed__1 = _init_l_Lake_initPkg___lambda__6___closed__1();
lean_mark_persistent(l_Lake_initPkg___lambda__6___closed__1);
l_Lake_initPkg___lambda__7___closed__1 = _init_l_Lake_initPkg___lambda__7___closed__1();
lean_mark_persistent(l_Lake_initPkg___lambda__7___closed__1);
l_Lake_initPkg___lambda__7___closed__2 = _init_l_Lake_initPkg___lambda__7___closed__2();
lean_mark_persistent(l_Lake_initPkg___lambda__7___closed__2);
l_Lake_initPkg___closed__1 = _init_l_Lake_initPkg___closed__1();
lean_mark_persistent(l_Lake_initPkg___closed__1);
l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__1 = _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__1();
lean_mark_persistent(l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__1);
l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__2 = _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__2();
lean_mark_persistent(l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__2);
l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3___boxed__const__1 = _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3___boxed__const__1();
lean_mark_persistent(l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3___boxed__const__1);
l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3 = _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3();
lean_mark_persistent(l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__3);
l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4___boxed__const__1 = _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4___boxed__const__1();
lean_mark_persistent(l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4___boxed__const__1);
l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4 = _init_l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4();
lean_mark_persistent(l_String_anyAux___at_Lake_validatePkgName___spec__2___closed__4);
l_Lake_validatePkgName___lambda__1___closed__1 = _init_l_Lake_validatePkgName___lambda__1___closed__1();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__1);
l_Lake_validatePkgName___lambda__1___closed__2 = _init_l_Lake_validatePkgName___lambda__1___closed__2();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__2);
l_Lake_validatePkgName___lambda__1___closed__3 = _init_l_Lake_validatePkgName___lambda__1___closed__3();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__3);
l_Lake_validatePkgName___lambda__1___closed__4 = _init_l_Lake_validatePkgName___lambda__1___closed__4();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__4);
l_Lake_validatePkgName___lambda__1___closed__5 = _init_l_Lake_validatePkgName___lambda__1___closed__5();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__5);
l_Lake_validatePkgName___lambda__1___closed__6 = _init_l_Lake_validatePkgName___lambda__1___closed__6();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__6);
l_Lake_validatePkgName___lambda__1___closed__7 = _init_l_Lake_validatePkgName___lambda__1___closed__7();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__7);
l_Lake_validatePkgName___lambda__1___closed__8 = _init_l_Lake_validatePkgName___lambda__1___closed__8();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__8);
l_Lake_validatePkgName___lambda__1___closed__9 = _init_l_Lake_validatePkgName___lambda__1___closed__9();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__9);
l_Lake_validatePkgName___lambda__1___closed__10 = _init_l_Lake_validatePkgName___lambda__1___closed__10();
lean_mark_persistent(l_Lake_validatePkgName___lambda__1___closed__10);
l_Lake_validatePkgName___closed__1 = _init_l_Lake_validatePkgName___closed__1();
lean_mark_persistent(l_Lake_validatePkgName___closed__1);
l_Lake_validatePkgName___closed__2 = _init_l_Lake_validatePkgName___closed__2();
lean_mark_persistent(l_Lake_validatePkgName___closed__2);
l_Lake_init___closed__1 = _init_l_Lake_init___closed__1();
lean_mark_persistent(l_Lake_init___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
