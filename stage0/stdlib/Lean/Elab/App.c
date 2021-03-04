// Lean compiler output
// Module: Lean.Elab.App
// Imports: Init Lean.Util.FindMVar Lean.Elab.Term Lean.Elab.Binders Lean.Elab.SyntheticMVars
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
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__2;
lean_object* l_List_reverse___rarg(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_maybeParenthesize___closed__14;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__3;
extern lean_object* l_Lean_instInhabitedTagAttribute___closed__1;
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__1;
uint8_t l_Lean_Expr_bindingInfo_x21(lean_object*);
extern lean_object* l_Lean_Name_toString___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f_match__1(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_shouldPropagateExpectedTypeFor___boxed(lean_object*);
extern lean_object* l_Lean_Name_getString_x21___closed__3;
extern lean_object* l_Lean_fieldIdxKind;
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__4;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_namedPattern___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__1;
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_List_tail_x21___rarg(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedNamedArg___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__4;
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__6;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_synthesizeAppInstMVars___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2___rarg(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__2;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
extern lean_object* l_Lean_fieldIdxKind___closed__2;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___rarg(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__3;
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__1;
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__15;
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_main___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__4___boxed(lean_object**);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLVal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
extern lean_object* l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f_match__1(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__2___boxed(lean_object**);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor_match__1(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_1077____closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_identKind___closed__2;
lean_object* l_Lean_throwError___at_Lean_Meta_addDefaultInstance___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_NamedArg_ref___default;
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabResult___rarg(lean_object*);
lean_object* l_Lean_Expr_getAutoParamTactic_x3f(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isCoeDecl___closed__37;
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__2;
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__3;
size_t l_USize_sub(size_t, size_t);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasArgsToProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandApp_match__2(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__3;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_elabApp___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType_match__1(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__10;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2(lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_Term_elabApp_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__1___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabApp(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabIdent(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__3;
extern lean_object* l_Lean_Parser_Term_namedArgument___elambda__1___closed__2;
extern lean_object* l_instInhabitedNat;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getBindingName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find_from_user_name(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__7;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess___boxed(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__2(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__2(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__2;
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__3___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processImplicitArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__2;
lean_object* l_Lean_Expr_getOptParamDefault_x3f(lean_object*);
lean_object* l_Lean_Elab_Term_expandApp___closed__1;
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_expandApp___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeAppInstMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__3;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3;
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__1;
extern lean_object* l_Lean_Parser_Term_proj___elambda__1___closed__1;
lean_object* l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__2;
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_hasElabWithoutExpectedType(lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withoutPostponingUniverseConstraintsImp___at_Lean_Elab_Term_elabApp___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12336____closed__8;
extern lean_object* l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___lambda__2___closed__3;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrayRef(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__1(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures(lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponed(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__2(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15606____closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__2;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPostponed___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__5;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__2___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_expandApp_match__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instToStringArg_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_hasElabWithoutExpectedType___boxed(lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13855____closed__9;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabExplicitUniv(lean_object*);
extern lean_object* l_Lean_Json_Parser_anyCore___rarg___closed__6;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___closed__1;
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___boxed(lean_object**);
uint8_t l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_fTypeHasOptAutoParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_2191____closed__3;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__7;
extern lean_object* l_Lean_Parser_Term_byTactic___elambda__1___closed__2;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAppArgs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_contradictionCore___spec__4___lambda__2___closed__1;
lean_object* l_Lean_Syntax_SepArray_getElems___rarg(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2;
extern lean_object* l_Lean_Elab_goalsToMessageData___closed__2;
extern lean_object* l_Lean_Meta_withoutPostponingUniverseConstraintsImp___rarg___closed__16;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__3;
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__4;
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandApp_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2(lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Term_elabExplicitUnivs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrayRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNamedPattern___closed__1;
extern lean_object* l_Lean_Parser_Term_syntheticHole___elambda__1___closed__1;
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__3;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getBindingName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_expandApp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__1(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addInstMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabExplicit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_choiceKind___closed__2;
uint8_t l_Lean_Elab_Term_ElabAppArgs_State_ellipsis___default;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___closed__1;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_main_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instMonadControlReaderT___closed__3;
lean_object* l_Lean_Elab_logException___at___private_Lean_Elab_Term_0__Lean_Elab_Term_exceptionToSorry___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__6;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__2;
lean_object* l_List_filterAux___at_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__3;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__9;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_normalizeFunType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_expandCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withoutPostponingUniverseConstraintsImp___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedMessageData;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__4;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__2(lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__1(lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg___closed__3;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___boxed__const__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__3(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processInstImplicitArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4___boxed(lean_object**);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg_match__1(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
lean_object* l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg_match__1(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType_match__1(lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__5___boxed(lean_object**);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___boxed(lean_object**);
lean_object* l_Lean_Elab_Term_elabAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__4;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__4;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getResetPostponed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11;
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabExplicitUniv___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_pipeProj___elambda__1___closed__2;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_elabExplicit(lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__2;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__16;
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
extern lean_object* l_Lean_choiceKind;
lean_object* l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2;
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_synthesizeAppInstMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_State_instMVars___default;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData_match__1(lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabNamedPattern(lean_object*);
extern lean_object* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
lean_object* l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__1;
lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabChoice(lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasArgsToProcess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_State_toSetErrorCtx___default;
extern lean_object* l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_69____closed__4;
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__3;
extern lean_object* l_termIfLet___x3a_x3d__Then__Else_____closed__7;
extern lean_object* l_Lean_Meta_withMVarContext___at_Lean_Meta_substCore___spec__6___at_Lean_Meta_substCore___spec__7___lambda__1___closed__3;
lean_object* l_Lean_Elab_Term_elabIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Lean_Elab_Term_elabApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeAppInstMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_localDeclDependsOn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandApp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_shouldPropagateExpectedTypeFor(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__1;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__1(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedArg___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__1(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__5;
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Elab_Term_elabChoice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__2(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__1(lean_object*);
lean_object* l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponedToMessageData___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__3;
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
lean_object* l_Lean_Meta_withoutPostponingUniverseConstraintsImp___at_Lean_Elab_Term_elabApp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__3;
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_instToStringNamedArg(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabProj___closed__1;
lean_object* l_Lean_Elab_Term_LVal_getRef(lean_object*);
uint8_t l_Lean_Expr_isAutoParam(lean_object*);
extern lean_object* l_Lean_Parser_Term_arrayRef___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_elabNamedPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageList(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isCoeDecl___closed__12;
lean_object* l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_normalizeFunType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__2;
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__5;
lean_object* l_Lean_Elab_Term_instToStringArg(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__1;
extern lean_object* l_Option_get_x21___rarg___closed__4;
extern lean_object* l_Lean_Syntax_mkApp___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabWithoutExpectedTypeAttr;
lean_object* l_List_filterAux___at_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_2191____closed__4;
lean_object* l_List_find_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__3;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__2;
lean_object* l_Lean_getParentStructures(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess_match__1(lean_object*);
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_postponeExceptionId;
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_expandApp_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__3(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveAllState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlT___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__1(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__12;
lean_object* l___regBuiltin_Lean_Elab_Term_elabProj(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__6;
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
extern lean_object* l_Lean_Parser_Term_ellipsis___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__5;
lean_object* l_Lean_Elab_Term_addTermInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabExplicit___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_State_etaArgs___default;
lean_object* l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandPipeProj(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__2(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId_match__1(lean_object*);
lean_object* l_Lean_Exception_getRef(lean_object*);
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__6;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__2;
lean_object* l_Lean_Elab_Term_elabExplicitUniv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instToStringArg_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabExplicitUnivs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_expandApp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_eraseNamedArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabChoice___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_8448_(lean_object*);
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4_(lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_main_match__1(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_elabAppArgs___closed__4;
lean_object* l_Lean_Meta_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
extern lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7;
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__2;
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedNamedArg;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__3;
lean_object* l_Lean_Elab_Term_ElabAppArgs_synthesizeAppInstMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__9;
lean_object* l_Lean_Elab_Term_addNamedArg___closed__1;
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__1;
uint8_t l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_206_(uint8_t, uint8_t);
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrayRef___closed__1;
lean_object* l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isOptParam(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__3___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__3(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabApp_match__1(lean_object*);
extern lean_object* l_prec_x28___x29___closed__7;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess___boxed(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__4;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__3;
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAppArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Std_fmt___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__2(uint8_t);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_ElabAppArgs_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerMVarErrorImplicitArgInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_instMonadQuotationTermElabM___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__2;
lean_object* l_Lean_Elab_Term_elabAppArgs___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__8;
extern lean_object* l_prec_x28___x29___closed__3;
lean_object* l_Lean_Elab_Term_elabAppArgs___closed__2;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg___closed__2;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isLevelDefEqAux___closed__5;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole_match__1(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_elabAppArgs___closed__3;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdx_x3f_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_List_lengthAux___rarg(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_ElabAppArgs_main_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12938____closed__13;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__2(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ensureArgType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAppArgs___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__1;
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructureLike(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__4;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__2;
lean_object* l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__6;
lean_object* l_Lean_Elab_Term_expandPipeProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__14;
lean_object* l___regBuiltin_Lean_Elab_Term_elabIdent___closed__1;
lean_object* l_Lean_Elab_Term_synthesizeCoeInstMVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__1;
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__2;
lean_object* l_Lean_Meta_setPostponed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__4(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__5;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_synthesizeAppInstMVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__2;
lean_object* l_Lean_Elab_Term_ensureHasTypeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Array_insertAt___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError(lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_addNamedArg___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_5658____closed__34;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_expandPipeProj___closed__1;
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__3___boxed(lean_object**);
extern lean_object* l_Array_findSomeM_x3f___rarg___closed__1;
lean_object* l_Lean_Syntax_formatStxAux(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___lambda__1___boxed(lean_object**);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlT__1___rarg(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg___closed__4;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__1;
lean_object* l_Lean_Elab_Term_elabExplicitUnivs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_expandApp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_addNamedArg___spec__1(lean_object*, lean_object*, size_t, size_t);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__8;
lean_object* l_Lean_Elab_Term_ElabAppArgs_eraseNamedArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__1(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent_match__1(lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__1;
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__1;
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__3(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Term_elabExplicitUnivs___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedArg;
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__3___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabWithoutExpectedType");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mark that applications of the given declaration should be elaborated without the expected type");
return x_1;
}
}
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__2;
x_3 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__3;
x_4 = l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_69____closed__4;
x_5 = l_Lean_registerTagAttribute(x_2, x_3, x_4, x_1);
return x_5;
}
}
uint8_t l_Lean_Elab_Term_hasElabWithoutExpectedType(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Elab_Term_elabWithoutExpectedTypeAttr;
x_4 = l_Lean_TagAttribute_hasTag(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_hasElabWithoutExpectedType___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Term_hasElabWithoutExpectedType(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedArg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_instInhabitedArg___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_instToStringArg_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_instToStringArg_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_instToStringArg_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_instToStringArg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_box(0);
x_4 = 0;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_formatStxAux(x_3, x_4, x_5, x_2);
x_7 = l_Std_Format_defWidth;
x_8 = lean_format_pretty(x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_expr_dbg_to_string(x_9);
lean_dec(x_9);
return x_10;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_NamedArg_ref___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedNamedArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Lean_Elab_Term_instInhabitedArg___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedNamedArg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_instInhabitedNamedArg___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_instToStringNamedArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Lean_Name_toString___closed__1;
x_4 = l_Lean_Name_toStringWithSep(x_3, x_2);
x_5 = l_prec_x28___x29___closed__3;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_termIfLet___x3a_x3d__Then__Else_____closed__7;
x_8 = lean_string_append(x_6, x_7);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = 0;
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_formatStxAux(x_11, x_12, x_13, x_10);
x_15 = l_Std_Format_defWidth;
x_16 = lean_format_pretty(x_14, x_15);
x_17 = lean_string_append(x_8, x_16);
lean_dec(x_16);
x_18 = l_prec_x28___x29___closed__7;
x_19 = lean_string_append(x_17, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
lean_dec(x_9);
x_21 = lean_expr_dbg_to_string(x_20);
lean_dec(x_20);
x_22 = lean_string_append(x_8, x_21);
lean_dec(x_21);
x_23 = l_prec_x28___x29___closed__7;
x_24 = lean_string_append(x_22, x_23);
return x_24;
}
}
}
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_throwInvalidNamedArg_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2___rarg___boxed), 8, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid argument name '");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' for function");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' for function '");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_7, 3);
x_13 = l_Lean_replaceRef(x_11, x_12);
lean_dec(x_12);
lean_ctor_set(x_7, 3, x_13);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__4;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1___rarg(x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
x_23 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__2;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__6;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
lean_inc(x_21);
x_28 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_28, 0, x_21);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_KernelException_toMessageData___closed__3;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2___rarg(x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_33 = lean_ctor_get(x_1, 0);
x_34 = lean_ctor_get(x_7, 0);
x_35 = lean_ctor_get(x_7, 1);
x_36 = lean_ctor_get(x_7, 2);
x_37 = lean_ctor_get(x_7, 3);
x_38 = lean_ctor_get(x_7, 4);
x_39 = lean_ctor_get(x_7, 5);
x_40 = lean_ctor_get(x_7, 6);
x_41 = lean_ctor_get(x_7, 7);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_7);
x_42 = l_Lean_replaceRef(x_33, x_37);
lean_dec(x_37);
x_43 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_35);
lean_ctor_set(x_43, 2, x_36);
lean_ctor_set(x_43, 3, x_42);
lean_ctor_set(x_43, 4, x_38);
lean_ctor_set(x_43, 5, x_39);
lean_ctor_set(x_43, 6, x_40);
lean_ctor_set(x_43, 7, x_41);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_44 = lean_ctor_get(x_1, 1);
lean_inc(x_44);
x_45 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__2;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__4;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1___rarg(x_49, x_3, x_4, x_5, x_6, x_43, x_8, x_9);
lean_dec(x_43);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_51 = lean_ctor_get(x_2, 0);
x_52 = lean_ctor_get(x_1, 1);
lean_inc(x_52);
x_53 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__2;
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__6;
x_57 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
lean_inc(x_51);
x_58 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_58, 0, x_51);
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = l_Lean_KernelException_toMessageData___closed__3;
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2___rarg(x_61, x_3, x_4, x_5, x_6, x_43, x_8, x_9);
lean_dec(x_43);
return x_62;
}
}
}
}
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_throwInvalidNamedArg___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_throwInvalidNamedArg___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_throwInvalidNamedArg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_addNamedArg___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_name_eq(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
lean_object* l_Lean_Elab_Term_addNamedArg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_array_push(x_1, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("argument '");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_addNamedArg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' was already set");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_addNamedArg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_addNamedArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_Lean_Elab_Term_addNamedArg___lambda__1(x_1, x_2, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_10, x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_10);
x_16 = lean_box(0);
x_17 = l_Lean_Elab_Term_addNamedArg___lambda__1(x_1, x_2, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_17;
}
else
{
size_t x_18; size_t x_19; uint8_t x_20; 
x_18 = 0;
x_19 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_20 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_addNamedArg___spec__1(x_2, x_1, x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = l_Lean_Elab_Term_addNamedArg___lambda__1(x_1, x_2, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_1);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_dec(x_2);
x_24 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_Elab_Term_addNamedArg___closed__2;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_Elab_Term_addNamedArg___closed__4;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_addNamedArg___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_addNamedArg___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_addNamedArg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_addNamedArg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_addNamedArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_addNamedArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ensureArgType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
x_11 = l_Lean_Meta_inferType(x_2, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_3);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = lean_box(0);
x_17 = l_Lean_Elab_Term_ensureHasTypeAux(x_14, x_12, x_2, x_15, x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_10 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_11);
x_13 = l_Lean_mkSort(x_11);
lean_inc(x_1);
x_14 = l_Lean_Meta_mkArrow(x_1, x_13, x_5, x_6, x_7, x_8, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_15);
x_18 = 0;
x_19 = lean_box(0);
lean_inc(x_5);
x_20 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_17, x_18, x_19, x_5, x_6, x_7, x_8, x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_23 = l_Lean_Meta_getLevel(x_1, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_11);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_24);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_Meta_isCoeDecl___closed__37;
lean_inc(x_28);
x_30 = l_Lean_mkConst(x_29, x_28);
x_31 = l_Lean_Syntax_mkApp___closed__1;
lean_inc(x_1);
x_32 = lean_array_push(x_31, x_1);
lean_inc(x_21);
x_33 = lean_array_push(x_32, x_21);
x_34 = l_Lean_mkAppN(x_30, x_33);
lean_dec(x_33);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = 1;
lean_inc(x_5);
x_37 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_35, x_36, x_19, x_5, x_6, x_7, x_8, x_25);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Expr_mvarId_x21(x_38);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_41 = l_Lean_Elab_Term_synthesizeCoeInstMVarCore(x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
uint8_t x_44; 
lean_dec(x_38);
lean_dec(x_28);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_41);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_41, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set(x_41, 0, x_46);
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_dec(x_41);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_dec(x_41);
x_51 = l_Lean_Meta_isCoeDecl___closed__12;
x_52 = l_Lean_mkConst(x_51, x_28);
x_53 = l_Lean_Json_Parser_anyCore___rarg___closed__6;
x_54 = lean_array_push(x_53, x_1);
x_55 = lean_array_push(x_54, x_21);
x_56 = lean_array_push(x_55, x_2);
x_57 = lean_array_push(x_56, x_38);
x_58 = l_Lean_mkAppN(x_52, x_57);
lean_dec(x_57);
x_59 = l_Lean_Meta_expandCoe(x_58, x_5, x_6, x_7, x_8, x_50);
if (lean_obj_tag(x_59) == 0)
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_59, 0, x_62);
return x_59;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_59, 0);
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_59);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_63);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
else
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_59);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_59, 0);
lean_dec(x_68);
x_69 = lean_box(0);
lean_ctor_set_tag(x_59, 0);
lean_ctor_set(x_59, 0, x_69);
return x_59;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_59, 1);
lean_inc(x_70);
lean_dec(x_59);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_38);
lean_dec(x_28);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_41);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_41, 0);
lean_dec(x_74);
x_75 = lean_box(0);
lean_ctor_set_tag(x_41, 0);
lean_ctor_set(x_41, 0, x_75);
return x_41;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_41, 1);
lean_inc(x_76);
lean_dec(x_41);
x_77 = lean_box(0);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_23);
if (x_79 == 0)
{
return x_23;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_23, 0);
x_81 = lean_ctor_get(x_23, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_23);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_synthesizeAppInstMVars___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_3);
x_15 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_14);
x_16 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_box(0);
lean_inc(x_9);
x_21 = l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(x_14, x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = 1;
x_24 = x_3 + x_23;
x_25 = lean_box(0);
x_3 = x_24;
x_4 = x_25;
x_11 = x_22;
goto _start;
}
else
{
lean_object* x_27; size_t x_28; size_t x_29; lean_object* x_30; 
lean_dec(x_14);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_dec(x_16);
x_28 = 1;
x_29 = x_3 + x_28;
x_30 = lean_box(0);
x_3 = x_29;
x_4 = x_30;
x_11 = x_27;
goto _start;
}
}
else
{
uint8_t x_32; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_32 = !lean_is_exclusive(x_16);
if (x_32 == 0)
{
return x_16;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_16, 0);
x_34 = lean_ctor_get(x_16, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_16);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_synthesizeAppInstMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = 0;
x_12 = lean_box(0);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_synthesizeAppInstMVars___spec__1(x_1, x_10, x_11, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_synthesizeAppInstMVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_synthesizeAppInstMVars___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_synthesizeAppInstMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_synthesizeAppInstMVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
static uint8_t _init_l_Lean_Elab_Term_ElabAppArgs_State_ellipsis___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_ElabAppArgs_State_etaArgs___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_ElabAppArgs_State_toSetErrorCtx___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_ElabAppArgs_State_instMVars___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addInstMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_2, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_13, 7);
x_17 = lean_array_push(x_16, x_1);
lean_ctor_set(x_13, 7, x_17);
x_18 = lean_st_ref_set(x_2, x_13, x_14);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_25 = lean_ctor_get_uint8(x_13, sizeof(void*)*8);
x_26 = lean_ctor_get(x_13, 0);
x_27 = lean_ctor_get(x_13, 1);
x_28 = lean_ctor_get(x_13, 2);
x_29 = lean_ctor_get(x_13, 3);
x_30 = lean_ctor_get_uint8(x_13, sizeof(void*)*8 + 1);
x_31 = lean_ctor_get(x_13, 4);
x_32 = lean_ctor_get(x_13, 5);
x_33 = lean_ctor_get(x_13, 6);
x_34 = lean_ctor_get(x_13, 7);
x_35 = lean_ctor_get_uint8(x_13, sizeof(void*)*8 + 2);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_13);
x_36 = lean_array_push(x_34, x_1);
x_37 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_37, 0, x_26);
lean_ctor_set(x_37, 1, x_27);
lean_ctor_set(x_37, 2, x_28);
lean_ctor_set(x_37, 3, x_29);
lean_ctor_set(x_37, 4, x_31);
lean_ctor_set(x_37, 5, x_32);
lean_ctor_set(x_37, 6, x_33);
lean_ctor_set(x_37, 7, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*8, x_25);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 1, x_30);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 2, x_35);
x_38 = lean_st_ref_set(x_2, x_37, x_14);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
x_41 = lean_box(0);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addInstMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addInstMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_synthesizeAppInstMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 7);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_7, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_take(x_1, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_18, 7);
lean_dec(x_21);
x_22 = l_Array_empty___closed__1;
lean_ctor_set(x_18, 7, x_22);
x_23 = lean_st_ref_set(x_1, x_18, x_19);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_Elab_Term_synthesizeAppInstMVars(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_24);
lean_dec(x_14);
return x_25;
}
else
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_26 = lean_ctor_get_uint8(x_18, sizeof(void*)*8);
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
x_29 = lean_ctor_get(x_18, 2);
x_30 = lean_ctor_get(x_18, 3);
x_31 = lean_ctor_get_uint8(x_18, sizeof(void*)*8 + 1);
x_32 = lean_ctor_get(x_18, 4);
x_33 = lean_ctor_get(x_18, 5);
x_34 = lean_ctor_get(x_18, 6);
x_35 = lean_ctor_get_uint8(x_18, sizeof(void*)*8 + 2);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_36 = l_Array_empty___closed__1;
x_37 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_37, 0, x_27);
lean_ctor_set(x_37, 1, x_28);
lean_ctor_set(x_37, 2, x_29);
lean_ctor_set(x_37, 3, x_30);
lean_ctor_set(x_37, 4, x_32);
lean_ctor_set(x_37, 5, x_33);
lean_ctor_set(x_37, 6, x_34);
lean_ctor_set(x_37, 7, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*8, x_26);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 1, x_31);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 2, x_35);
x_38 = lean_st_ref_set(x_1, x_37, x_19);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_Lean_Elab_Term_synthesizeAppInstMVars(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_39);
lean_dec(x_14);
return x_40;
}
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_synthesizeAppInstMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_ElabAppArgs_synthesizeAppInstMVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_5);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_3);
x_13 = lean_ctor_get(x_2, 0);
x_14 = l_Lean_Expr_getAppFn(x_1);
x_15 = l_Lean_Expr_isConst(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_14);
x_16 = lean_box(0);
x_17 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg(x_13, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = l_Lean_Expr_constName_x21(x_14);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = l_Lean_Elab_Term_throwInvalidNamedArg___rarg(x_13, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_23);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_5, x_6, x_7, x_8, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
lean_inc(x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("function expected at");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\nterm has type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_9 = l_Lean_Elab_Term_ElabAppArgs_synthesizeAppInstMVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 1;
x_12 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_11, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_7, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_get(x_1, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_21 = l_Lean_Meta_whnfForall(x_20, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Expr_isForall(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_18, 0);
lean_inc(x_25);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_25);
lean_inc(x_22);
x_26 = l___private_Lean_Elab_App_0__Lean_Elab_Term_tryCoeFun_x3f(x_22, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_18, 3);
lean_inc(x_29);
lean_dec(x_18);
lean_inc(x_6);
lean_inc(x_2);
x_30 = l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__1(x_25, x_29, x_12, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_28);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_indentExpr(x_25);
x_33 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__2;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__4;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_indentExpr(x_22);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_KernelException_toMessageData___closed__15;
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__2(x_40, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_31);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_41;
}
else
{
uint8_t x_42; 
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_30);
if (x_42 == 0)
{
return x_30;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 0);
x_44 = lean_ctor_get(x_30, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_30);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_3);
lean_dec(x_2);
x_46 = lean_ctor_get(x_26, 1);
lean_inc(x_46);
lean_dec(x_26);
x_47 = lean_ctor_get(x_27, 0);
lean_inc(x_47);
lean_dec(x_27);
lean_inc(x_7);
lean_inc(x_47);
x_48 = l_Lean_Meta_inferType(x_47, x_4, x_5, x_6, x_7, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_st_ref_get(x_7, x_50);
lean_dec(x_7);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_st_ref_take(x_1, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = !lean_is_exclusive(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_57 = lean_ctor_get(x_54, 1);
lean_dec(x_57);
x_58 = lean_ctor_get(x_54, 0);
lean_dec(x_58);
lean_ctor_set(x_54, 1, x_49);
lean_ctor_set(x_54, 0, x_47);
x_59 = lean_st_ref_set(x_1, x_54, x_55);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_59, 0);
lean_dec(x_61);
lean_ctor_set(x_59, 0, x_12);
return x_59;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_12);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
else
{
uint8_t x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_64 = lean_ctor_get_uint8(x_54, sizeof(void*)*8);
x_65 = lean_ctor_get(x_54, 2);
x_66 = lean_ctor_get(x_54, 3);
x_67 = lean_ctor_get_uint8(x_54, sizeof(void*)*8 + 1);
x_68 = lean_ctor_get(x_54, 4);
x_69 = lean_ctor_get(x_54, 5);
x_70 = lean_ctor_get(x_54, 6);
x_71 = lean_ctor_get(x_54, 7);
x_72 = lean_ctor_get_uint8(x_54, sizeof(void*)*8 + 2);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_54);
x_73 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_73, 0, x_47);
lean_ctor_set(x_73, 1, x_49);
lean_ctor_set(x_73, 2, x_65);
lean_ctor_set(x_73, 3, x_66);
lean_ctor_set(x_73, 4, x_68);
lean_ctor_set(x_73, 5, x_69);
lean_ctor_set(x_73, 6, x_70);
lean_ctor_set(x_73, 7, x_71);
lean_ctor_set_uint8(x_73, sizeof(void*)*8, x_64);
lean_ctor_set_uint8(x_73, sizeof(void*)*8 + 1, x_67);
lean_ctor_set_uint8(x_73, sizeof(void*)*8 + 2, x_72);
x_74 = lean_st_ref_set(x_1, x_73, x_55);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_76 = x_74;
} else {
 lean_dec_ref(x_74);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_12);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
}
else
{
uint8_t x_78; 
lean_dec(x_47);
lean_dec(x_7);
x_78 = !lean_is_exclusive(x_48);
if (x_78 == 0)
{
return x_48;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_48, 0);
x_80 = lean_ctor_get(x_48, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_48);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_82 = !lean_is_exclusive(x_26);
if (x_82 == 0)
{
return x_26;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_26, 0);
x_84 = lean_ctor_get(x_26, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_26);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_86 = lean_st_ref_get(x_7, x_23);
lean_dec(x_7);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = lean_st_ref_take(x_1, x_87);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = !lean_is_exclusive(x_89);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_92 = lean_ctor_get(x_89, 1);
lean_dec(x_92);
lean_ctor_set(x_89, 1, x_22);
x_93 = lean_st_ref_set(x_1, x_89, x_90);
x_94 = !lean_is_exclusive(x_93);
if (x_94 == 0)
{
lean_object* x_95; 
x_95 = lean_ctor_get(x_93, 0);
lean_dec(x_95);
lean_ctor_set(x_93, 0, x_12);
return x_93;
}
else
{
lean_object* x_96; lean_object* x_97; 
x_96 = lean_ctor_get(x_93, 1);
lean_inc(x_96);
lean_dec(x_93);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_12);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
else
{
uint8_t x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_98 = lean_ctor_get_uint8(x_89, sizeof(void*)*8);
x_99 = lean_ctor_get(x_89, 0);
x_100 = lean_ctor_get(x_89, 2);
x_101 = lean_ctor_get(x_89, 3);
x_102 = lean_ctor_get_uint8(x_89, sizeof(void*)*8 + 1);
x_103 = lean_ctor_get(x_89, 4);
x_104 = lean_ctor_get(x_89, 5);
x_105 = lean_ctor_get(x_89, 6);
x_106 = lean_ctor_get(x_89, 7);
x_107 = lean_ctor_get_uint8(x_89, sizeof(void*)*8 + 2);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_89);
x_108 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_108, 0, x_99);
lean_ctor_set(x_108, 1, x_22);
lean_ctor_set(x_108, 2, x_100);
lean_ctor_set(x_108, 3, x_101);
lean_ctor_set(x_108, 4, x_103);
lean_ctor_set(x_108, 5, x_104);
lean_ctor_set(x_108, 6, x_105);
lean_ctor_set(x_108, 7, x_106);
lean_ctor_set_uint8(x_108, sizeof(void*)*8, x_98);
lean_ctor_set_uint8(x_108, sizeof(void*)*8 + 1, x_102);
lean_ctor_set_uint8(x_108, sizeof(void*)*8 + 2, x_107);
x_109 = lean_st_ref_set(x_1, x_108, x_90);
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_111 = x_109;
} else {
 lean_dec_ref(x_109);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_12);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_113 = !lean_is_exclusive(x_21);
if (x_113 == 0)
{
return x_21;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_21, 0);
x_115 = lean_ctor_get(x_21, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_21);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_117 = !lean_is_exclusive(x_13);
if (x_117 == 0)
{
return x_13;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_13, 0);
x_119 = lean_ctor_get(x_13, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_13);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
else
{
uint8_t x_121; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_121 = !lean_is_exclusive(x_9);
if (x_121 == 0)
{
return x_9;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_9, 0);
x_123 = lean_ctor_get(x_9, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_9);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_normalizeFunType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_7);
x_15 = l_Lean_Meta_whnfForall(x_14, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_7, x_17);
lean_dec(x_7);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_ref_take(x_1, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_21, 1);
lean_dec(x_24);
lean_inc(x_16);
lean_ctor_set(x_21, 1, x_16);
x_25 = lean_st_ref_set(x_1, x_21, x_22);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_16);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_16);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_30 = lean_ctor_get_uint8(x_21, sizeof(void*)*8);
x_31 = lean_ctor_get(x_21, 0);
x_32 = lean_ctor_get(x_21, 2);
x_33 = lean_ctor_get(x_21, 3);
x_34 = lean_ctor_get_uint8(x_21, sizeof(void*)*8 + 1);
x_35 = lean_ctor_get(x_21, 4);
x_36 = lean_ctor_get(x_21, 5);
x_37 = lean_ctor_get(x_21, 6);
x_38 = lean_ctor_get(x_21, 7);
x_39 = lean_ctor_get_uint8(x_21, sizeof(void*)*8 + 2);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_21);
lean_inc(x_16);
x_40 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_40, 0, x_31);
lean_ctor_set(x_40, 1, x_16);
lean_ctor_set(x_40, 2, x_32);
lean_ctor_set(x_40, 3, x_33);
lean_ctor_set(x_40, 4, x_35);
lean_ctor_set(x_40, 5, x_36);
lean_ctor_set(x_40, 6, x_37);
lean_ctor_set(x_40, 7, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*8, x_30);
lean_ctor_set_uint8(x_40, sizeof(void*)*8 + 1, x_34);
lean_ctor_set_uint8(x_40, sizeof(void*)*8 + 2, x_39);
x_41 = lean_st_ref_set(x_1, x_40, x_22);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_43 = x_41;
} else {
 lean_dec_ref(x_41);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_16);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_7);
x_45 = !lean_is_exclusive(x_15);
if (x_45 == 0)
{
return x_15;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_15, 0);
x_47 = lean_ctor_get(x_15, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_15);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_normalizeFunType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_normalizeFunType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getBindingName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Expr_bindingName_x21(x_14);
lean_dec(x_14);
lean_ctor_set(x_11, 0, x_15);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Expr_bindingName_x21(x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getBindingName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getBindingName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Expr_bindingDomain_x21(x_14);
lean_dec(x_14);
lean_ctor_set(x_11, 0, x_15);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Expr_bindingDomain_x21(x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_List_filterAux___at_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_9 = lean_name_eq(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
x_15 = lean_name_eq(x_14, x_1);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_3);
x_2 = x_13;
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_12);
x_2 = x_13;
goto _start;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_filterAux___at_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore___spec__1(x_2, x_1, x_3);
return x_4;
}
}
lean_object* l_List_filterAux___at_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterAux___at_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_eraseNamedArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_2, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_13, 3);
x_17 = l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore(x_16, x_1);
lean_ctor_set(x_13, 3, x_17);
x_18 = lean_st_ref_set(x_2, x_13, x_14);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_25 = lean_ctor_get_uint8(x_13, sizeof(void*)*8);
x_26 = lean_ctor_get(x_13, 0);
x_27 = lean_ctor_get(x_13, 1);
x_28 = lean_ctor_get(x_13, 2);
x_29 = lean_ctor_get(x_13, 3);
x_30 = lean_ctor_get_uint8(x_13, sizeof(void*)*8 + 1);
x_31 = lean_ctor_get(x_13, 4);
x_32 = lean_ctor_get(x_13, 5);
x_33 = lean_ctor_get(x_13, 6);
x_34 = lean_ctor_get(x_13, 7);
x_35 = lean_ctor_get_uint8(x_13, sizeof(void*)*8 + 2);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_13);
x_36 = l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore(x_29, x_1);
x_37 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_37, 0, x_26);
lean_ctor_set(x_37, 1, x_27);
lean_ctor_set(x_37, 2, x_28);
lean_ctor_set(x_37, 3, x_36);
lean_ctor_set(x_37, 4, x_31);
lean_ctor_set(x_37, 5, x_32);
lean_ctor_set(x_37, 6, x_33);
lean_ctor_set(x_37, 7, x_34);
lean_ctor_set_uint8(x_37, sizeof(void*)*8, x_25);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 1, x_30);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 2, x_35);
x_38 = lean_st_ref_set(x_2, x_37, x_14);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
x_41 = lean_box(0);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_eraseNamedArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_ElabAppArgs_eraseNamedArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_2, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_1);
x_18 = l_Lean_mkApp(x_16, x_1);
x_19 = l_Lean_Expr_bindingBody_x21(x_17);
lean_dec(x_17);
x_20 = lean_expr_instantiate1(x_19, x_1);
lean_dec(x_1);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_20);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_st_ref_set(x_2, x_13, x_14);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_28 = lean_ctor_get_uint8(x_13, sizeof(void*)*8);
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
x_31 = lean_ctor_get(x_13, 2);
x_32 = lean_ctor_get(x_13, 3);
x_33 = lean_ctor_get_uint8(x_13, sizeof(void*)*8 + 1);
x_34 = lean_ctor_get(x_13, 4);
x_35 = lean_ctor_get(x_13, 5);
x_36 = lean_ctor_get(x_13, 6);
x_37 = lean_ctor_get(x_13, 7);
x_38 = lean_ctor_get_uint8(x_13, sizeof(void*)*8 + 2);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
lean_inc(x_1);
x_39 = l_Lean_mkApp(x_29, x_1);
x_40 = l_Lean_Expr_bindingBody_x21(x_30);
lean_dec(x_30);
x_41 = lean_expr_instantiate1(x_40, x_1);
lean_dec(x_1);
lean_dec(x_40);
x_42 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set(x_42, 2, x_31);
lean_ctor_set(x_42, 3, x_32);
lean_ctor_set(x_42, 4, x_34);
lean_ctor_set(x_42, 5, x_35);
lean_ctor_set(x_42, 6, x_36);
lean_ctor_set(x_42, 7, x_37);
lean_ctor_set_uint8(x_42, sizeof(void*)*8, x_28);
lean_ctor_set_uint8(x_42, sizeof(void*)*8 + 1, x_33);
lean_ctor_set_uint8(x_42, sizeof(void*)*8 + 2, x_38);
x_43 = lean_st_ref_set(x_2, x_42, x_14);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_45 = x_43;
} else {
 lean_dec_ref(x_43);
 x_45 = lean_box(0);
}
x_46 = lean_box(0);
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_2, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
lean_inc(x_16);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_16);
x_20 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_21 = l_Lean_Elab_Term_elabTerm(x_18, x_19, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_13, 0);
lean_inc(x_24);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_25 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ensureArgType(x_24, x_22, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = !lean_is_exclusive(x_21);
if (x_33 == 0)
{
return x_21;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_21, 0);
x_35 = lean_ctor_get(x_21, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_21);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_15, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_15, 1);
lean_inc(x_38);
lean_dec(x_15);
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_ctor_get(x_13, 0);
lean_inc(x_40);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_41 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ensureArgType(x_40, x_39, x_37, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_44;
}
else
{
uint8_t x_45; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_45 = !lean_is_exclusive(x_41);
if (x_45 == 0)
{
return x_41;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_41, 0);
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_41);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l_Lean_Meta_inferType(x_13, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = l_Lean_Expr_getOptParamDefault_x3f(x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = l_Lean_Expr_getAutoParamTactic_x3f(x_16);
lean_dec(x_16);
if (lean_obj_tag(x_19) == 0)
{
size_t x_20; size_t x_21; 
lean_free_object(x_14);
x_20 = 1;
x_21 = x_2 + x_20;
x_2 = x_21;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_23; lean_object* x_24; 
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_23 = 1;
x_24 = lean_box(x_23);
lean_ctor_set(x_14, 0, x_24);
return x_14;
}
}
else
{
uint8_t x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_25 = 1;
x_26 = lean_box(x_25);
lean_ctor_set(x_14, 0, x_26);
return x_14;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
x_29 = l_Lean_Expr_getOptParamDefault_x3f(x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; 
x_30 = l_Lean_Expr_getAutoParamTactic_x3f(x_27);
lean_dec(x_27);
if (lean_obj_tag(x_30) == 0)
{
size_t x_31; size_t x_32; 
x_31 = 1;
x_32 = x_2 + x_31;
x_2 = x_32;
x_11 = x_28;
goto _start;
}
else
{
uint8_t x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_30);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_34 = 1;
x_35 = lean_box(x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_28);
return x_36;
}
}
else
{
uint8_t x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_37 = 1;
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_28);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_40 = !lean_is_exclusive(x_14);
if (x_40 == 0)
{
return x_14;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_14, 0);
x_42 = lean_ctor_get(x_14, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_14);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_44 = 0;
x_45 = lean_box(x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_11);
return x_46;
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_10(x_1, x_5, x_6, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___rarg___lambda__1), 11, 4);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_4);
lean_closure_set(x_11, 3, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(x_1, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_array_get_size(x_4);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_10);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_11, x_11);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_10);
return x_20;
}
else
{
size_t x_21; size_t x_22; lean_object* x_23; 
x_21 = 0;
x_22 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_23 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__1(x_4, x_21, x_22, x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_10);
return x_23;
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3___lambda__1___boxed), 10, 3);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(x_1, x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_fTypeHasOptAutoParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3(x_14, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
return x_15;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_dec(x_5);
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
x_13 = lean_box_uint64(x_12);
x_14 = lean_apply_7(x_4, x_1, x_2, x_3, x_9, x_10, x_11, x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_4);
x_15 = lean_apply_3(x_6, x_1, x_2, x_3);
return x_15;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_6);
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint64_t x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_5);
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_3, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_3, 2);
lean_inc(x_18);
x_19 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
x_20 = lean_box_uint64(x_19);
x_21 = lean_apply_7(x_4, x_7, x_2, x_3, x_16, x_17, x_18, x_20);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_4);
x_22 = lean_apply_1(x_5, x_3);
return x_22;
}
}
else
{
lean_dec(x_5);
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_6);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_3, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
x_26 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
x_27 = lean_box_uint64(x_26);
x_28 = lean_apply_7(x_4, x_7, x_2, x_3, x_23, x_24, x_25, x_27);
return x_28;
}
else
{
lean_object* x_29; 
lean_dec(x_4);
x_29 = lean_apply_3(x_6, x_7, x_2, x_3);
return x_29;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody_match__2___rarg), 6, 0);
return x_2;
}
}
uint8_t l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_name_eq(x_3, x_1);
return x_4;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
if (lean_obj_tag(x_4) == 7)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint64_t x_10; lean_object* x_11; lean_object* x_22; lean_object* x_23; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 2);
lean_inc(x_9);
x_10 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_7);
x_22 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___lambda__1___boxed), 2, 1);
lean_closure_set(x_22, 0, x_7);
lean_inc(x_3);
x_23 = l_List_find_x3f___rarg(x_22, x_3);
if (lean_obj_tag(x_23) == 0)
{
lean_dec(x_7);
if (x_1 == 0)
{
uint8_t x_24; uint8_t x_25; 
x_24 = (uint8_t)((x_10 << 24) >> 61);
x_25 = l_Lean_BinderInfo_isExplicit(x_24);
if (x_25 == 0)
{
lean_dec(x_8);
lean_dec(x_4);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_27; 
x_27 = lean_box(0);
x_11 = x_27;
goto block_21;
}
}
else
{
lean_object* x_28; 
x_28 = lean_box(0);
x_11 = x_28;
goto block_21;
}
}
else
{
lean_object* x_29; 
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_4);
x_29 = l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore(x_3, x_7);
lean_dec(x_7);
x_3 = x_29;
x_4 = x_9;
goto _start;
}
block_21:
{
uint8_t x_12; 
lean_dec(x_11);
x_12 = lean_nat_dec_lt(x_5, x_2);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = l_Lean_Expr_isAutoParam(x_8);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Expr_isOptParam(x_8);
lean_dec(x_8);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
else
{
lean_dec(x_4);
x_4 = x_9;
goto _start;
}
}
else
{
lean_dec(x_8);
lean_dec(x_4);
x_4 = x_9;
goto _start;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_4);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_2, x_18);
lean_dec(x_2);
x_2 = x_19;
x_4 = x_9;
goto _start;
}
}
}
else
{
lean_object* x_31; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_box(0);
return x_31;
}
}
else
{
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
if (lean_obj_tag(x_4) == 7)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint64_t x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_4, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_4, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_4, 2);
lean_inc(x_34);
x_35 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_32);
x_36 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___lambda__1___boxed), 2, 1);
lean_closure_set(x_36, 0, x_32);
x_37 = l_List_find_x3f___rarg(x_36, x_3);
if (lean_obj_tag(x_37) == 0)
{
lean_dec(x_32);
if (x_1 == 0)
{
uint8_t x_38; uint8_t x_39; 
x_38 = (uint8_t)((x_35 << 24) >> 61);
x_39 = l_Lean_BinderInfo_isExplicit(x_38);
if (x_39 == 0)
{
lean_dec(x_33);
lean_dec(x_4);
x_2 = x_5;
x_4 = x_34;
goto _start;
}
else
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isAutoParam(x_33);
if (x_41 == 0)
{
uint8_t x_42; 
x_42 = l_Lean_Expr_isOptParam(x_33);
lean_dec(x_33);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_34);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_4);
return x_43;
}
else
{
lean_dec(x_4);
x_2 = x_5;
x_4 = x_34;
goto _start;
}
}
else
{
lean_dec(x_33);
lean_dec(x_4);
x_2 = x_5;
x_4 = x_34;
goto _start;
}
}
}
else
{
uint8_t x_46; 
x_46 = l_Lean_Expr_isAutoParam(x_33);
if (x_46 == 0)
{
uint8_t x_47; 
x_47 = l_Lean_Expr_isOptParam(x_33);
lean_dec(x_33);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_34);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_4);
return x_48;
}
else
{
lean_dec(x_4);
x_2 = x_5;
x_4 = x_34;
goto _start;
}
}
else
{
lean_dec(x_33);
lean_dec(x_4);
x_2 = x_5;
x_4 = x_34;
goto _start;
}
}
}
else
{
lean_object* x_51; 
lean_dec(x_37);
lean_dec(x_33);
lean_dec(x_4);
x_51 = l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore(x_3, x_32);
lean_dec(x_32);
x_2 = x_5;
x_3 = x_51;
x_4 = x_34;
goto _start;
}
}
else
{
lean_object* x_53; 
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_4);
return x_53;
}
}
else
{
if (lean_obj_tag(x_4) == 7)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint64_t x_57; lean_object* x_58; lean_object* x_59; 
x_54 = lean_ctor_get(x_4, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_4, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_4, 2);
lean_inc(x_56);
x_57 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_54);
x_58 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___lambda__1___boxed), 2, 1);
lean_closure_set(x_58, 0, x_54);
lean_inc(x_3);
x_59 = l_List_find_x3f___rarg(x_58, x_3);
if (lean_obj_tag(x_59) == 0)
{
lean_dec(x_54);
if (x_1 == 0)
{
uint8_t x_60; uint8_t x_61; 
x_60 = (uint8_t)((x_57 << 24) >> 61);
x_61 = l_Lean_BinderInfo_isExplicit(x_60);
if (x_61 == 0)
{
lean_dec(x_55);
lean_dec(x_4);
x_2 = x_5;
x_4 = x_56;
goto _start;
}
else
{
uint8_t x_63; 
x_63 = l_Lean_Expr_isAutoParam(x_55);
if (x_63 == 0)
{
uint8_t x_64; 
x_64 = l_Lean_Expr_isOptParam(x_55);
lean_dec(x_55);
if (x_64 == 0)
{
lean_object* x_65; 
lean_dec(x_56);
lean_dec(x_3);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_4);
return x_65;
}
else
{
lean_dec(x_4);
x_2 = x_5;
x_4 = x_56;
goto _start;
}
}
else
{
lean_dec(x_55);
lean_dec(x_4);
x_2 = x_5;
x_4 = x_56;
goto _start;
}
}
}
else
{
uint8_t x_68; 
x_68 = l_Lean_Expr_isAutoParam(x_55);
if (x_68 == 0)
{
uint8_t x_69; 
x_69 = l_Lean_Expr_isOptParam(x_55);
lean_dec(x_55);
if (x_69 == 0)
{
lean_object* x_70; 
lean_dec(x_56);
lean_dec(x_3);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_4);
return x_70;
}
else
{
lean_dec(x_4);
x_2 = x_5;
x_4 = x_56;
goto _start;
}
}
else
{
lean_dec(x_55);
lean_dec(x_4);
x_2 = x_5;
x_4 = x_56;
goto _start;
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_59);
lean_dec(x_55);
lean_dec(x_4);
x_73 = l_Lean_Elab_Term_ElabAppArgs_eraseNamedArgCore(x_3, x_54);
lean_dec(x_54);
x_2 = x_5;
x_3 = x_73;
x_4 = x_56;
goto _start;
}
}
else
{
lean_object* x_75; 
lean_dec(x_4);
lean_dec(x_3);
x_75 = lean_box(0);
return x_75;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody(x_5, x_2, x_3, x_4);
return x_6;
}
}
uint8_t l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_shouldPropagateExpectedTypeFor(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Lean_Syntax_getKind(x_2);
x_4 = l_myMacro____x40_Init_Notation___hyg_12938____closed__13;
x_5 = lean_name_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_Parser_Term_syntheticHole___elambda__1___closed__1;
x_7 = lean_name_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Parser_Term_byTactic___elambda__1___closed__2;
x_9 = lean_name_eq(x_3, x_8);
lean_dec(x_3);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
else
{
uint8_t x_12; 
lean_dec(x_3);
x_12 = 0;
return x_12;
}
}
else
{
uint8_t x_13; 
lean_dec(x_3);
x_13 = 0;
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = 0;
return x_14;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_shouldPropagateExpectedTypeFor___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_shouldPropagateExpectedTypeFor(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_11 = lean_ctor_get(x_8, 3);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_6, x_7, x_8, x_9, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_take(x_9, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 3);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_16, 3);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_13);
lean_inc(x_11);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_11);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Std_PersistentArray_push___rarg(x_22, x_24);
lean_ctor_set(x_17, 0, x_25);
x_26 = lean_st_ref_set(x_9, x_16, x_18);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_33 = lean_ctor_get_uint8(x_17, sizeof(void*)*1);
x_34 = lean_ctor_get(x_17, 0);
lean_inc(x_34);
lean_dec(x_17);
x_35 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_35, 0, x_1);
lean_ctor_set(x_35, 1, x_13);
lean_inc(x_11);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_11);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Std_PersistentArray_push___rarg(x_34, x_36);
x_38 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set_uint8(x_38, sizeof(void*)*1, x_33);
lean_ctor_set(x_16, 3, x_38);
x_39 = lean_st_ref_set(x_9, x_16, x_18);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_41 = x_39;
} else {
 lean_dec_ref(x_39);
 x_41 = lean_box(0);
}
x_42 = lean_box(0);
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_44 = lean_ctor_get(x_16, 0);
x_45 = lean_ctor_get(x_16, 1);
x_46 = lean_ctor_get(x_16, 2);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_16);
x_47 = lean_ctor_get_uint8(x_17, sizeof(void*)*1);
x_48 = lean_ctor_get(x_17, 0);
lean_inc(x_48);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_49 = x_17;
} else {
 lean_dec_ref(x_17);
 x_49 = lean_box(0);
}
x_50 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_50, 0, x_1);
lean_ctor_set(x_50, 1, x_13);
lean_inc(x_11);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_11);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Std_PersistentArray_push___rarg(x_48, x_51);
if (lean_is_scalar(x_49)) {
 x_53 = lean_alloc_ctor(0, 1, 1);
} else {
 x_53 = x_49;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set_uint8(x_53, sizeof(void*)*1, x_47);
x_54 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_54, 0, x_44);
lean_ctor_set(x_54, 1, x_45);
lean_ctor_set(x_54, 2, x_46);
lean_ctor_set(x_54, 3, x_53);
x_55 = lean_st_ref_set(x_9, x_54, x_18);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_57 = x_55;
} else {
 lean_dec_ref(x_55);
 x_57 = lean_box(0);
}
x_58 = lean_box(0);
if (lean_is_scalar(x_57)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_57;
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = l_Lean_checkTraceOption(x_10, x_1);
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_1077____closed__1;
x_2 = l_myMacro____x40_Init_Notation___hyg_2191____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("propagateExpectedType");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__1;
x_2 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("etaArgs.size: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", numRemainingArgs: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", fType: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_shouldPropagateExpectedTypeFor(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_13 = lean_st_ref_get(x_8, x_9);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_2, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 x_18 = x_15;
} else {
 lean_dec_ref(x_15);
 x_18 = lean_box(0);
}
x_19 = lean_ctor_get(x_16, 5);
lean_inc(x_19);
x_20 = l_Array_isEmpty___rarg(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_box(0);
if (lean_is_scalar(x_18)) {
 x_22 = lean_alloc_ctor(0, 2, 0);
} else {
 x_22 = x_18;
}
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = lean_ctor_get_uint8(x_16, sizeof(void*)*8 + 2);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = lean_box(0);
if (lean_is_scalar(x_18)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_18;
}
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_17);
return x_25;
}
else
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_16, 4);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_box(0);
if (lean_is_scalar(x_18)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_18;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_17);
return x_28;
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_26, 0);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l_Lean_Expr_isProp(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_197; lean_object* x_198; lean_object* x_220; lean_object* x_221; lean_object* x_222; uint8_t x_223; 
x_31 = lean_ctor_get(x_16, 2);
lean_inc(x_31);
x_32 = lean_unsigned_to_nat(0u);
x_33 = l_List_lengthAux___rarg(x_31, x_32);
lean_dec(x_31);
x_220 = lean_st_ref_get(x_8, x_17);
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_221, 3);
lean_inc(x_222);
lean_dec(x_221);
x_223 = lean_ctor_get_uint8(x_222, sizeof(void*)*1);
lean_dec(x_222);
if (x_223 == 0)
{
lean_object* x_224; uint8_t x_225; 
x_224 = lean_ctor_get(x_220, 1);
lean_inc(x_224);
lean_dec(x_220);
x_225 = 0;
x_197 = x_225;
x_198 = x_224;
goto block_219;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_226 = lean_ctor_get(x_220, 1);
lean_inc(x_226);
lean_dec(x_220);
x_227 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3;
x_228 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2(x_227, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_226);
x_229 = lean_ctor_get(x_228, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_228, 1);
lean_inc(x_230);
lean_dec(x_228);
x_231 = lean_unbox(x_229);
lean_dec(x_229);
x_197 = x_231;
x_198 = x_230;
goto block_219;
}
block_196:
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get_uint8(x_16, sizeof(void*)*8);
x_36 = lean_ctor_get(x_16, 3);
lean_inc(x_36);
x_37 = lean_ctor_get(x_16, 1);
lean_inc(x_37);
lean_dec(x_16);
x_38 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody(x_35, x_33, x_36, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_box(0);
if (lean_is_scalar(x_18)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_18;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_34);
return x_40;
}
else
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
lean_dec(x_38);
x_42 = l_Lean_Expr_hasLooseBVars(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_18);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_41);
x_43 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__3(x_41, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_34);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_94; lean_object* x_95; uint8_t x_108; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
x_108 = lean_unbox(x_45);
lean_dec(x_45);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
lean_free_object(x_43);
x_109 = lean_st_ref_get(x_8, x_46);
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_110, 3);
lean_inc(x_111);
lean_dec(x_110);
x_112 = lean_ctor_get_uint8(x_111, sizeof(void*)*1);
lean_dec(x_111);
if (x_112 == 0)
{
lean_object* x_113; uint8_t x_114; 
x_113 = lean_ctor_get(x_109, 1);
lean_inc(x_113);
lean_dec(x_109);
x_114 = 0;
x_94 = x_114;
x_95 = x_113;
goto block_107;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_115 = lean_ctor_get(x_109, 1);
lean_inc(x_115);
lean_dec(x_109);
x_116 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3;
x_117 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2(x_116, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_115);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = lean_unbox(x_118);
lean_dec(x_118);
x_94 = x_120;
x_95 = x_119;
goto block_107;
}
}
else
{
lean_object* x_121; 
lean_dec(x_41);
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_121 = lean_box(0);
lean_ctor_set(x_43, 0, x_121);
return x_43;
}
block_93:
{
lean_object* x_48; 
lean_inc(x_8);
x_48 = l_Lean_Meta_isExprDefEq(x_29, x_41, x_5, x_6, x_7, x_8, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
if (x_50 == 0)
{
uint8_t x_51; 
lean_dec(x_8);
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_48);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_48, 0);
lean_dec(x_52);
x_53 = lean_box(0);
lean_ctor_set(x_48, 0, x_53);
return x_48;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
lean_dec(x_48);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_57 = lean_ctor_get(x_48, 1);
lean_inc(x_57);
lean_dec(x_48);
x_58 = lean_st_ref_get(x_8, x_57);
lean_dec(x_8);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_st_ref_take(x_2, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = !lean_is_exclusive(x_61);
if (x_63 == 0)
{
uint8_t x_64; lean_object* x_65; uint8_t x_66; 
x_64 = 0;
lean_ctor_set_uint8(x_61, sizeof(void*)*8 + 2, x_64);
x_65 = lean_st_ref_set(x_2, x_61, x_62);
lean_dec(x_2);
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_65, 0);
lean_dec(x_67);
x_68 = lean_box(0);
lean_ctor_set(x_65, 0, x_68);
return x_65;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_65, 1);
lean_inc(x_69);
lean_dec(x_65);
x_70 = lean_box(0);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
else
{
uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_72 = lean_ctor_get_uint8(x_61, sizeof(void*)*8);
x_73 = lean_ctor_get(x_61, 0);
x_74 = lean_ctor_get(x_61, 1);
x_75 = lean_ctor_get(x_61, 2);
x_76 = lean_ctor_get(x_61, 3);
x_77 = lean_ctor_get_uint8(x_61, sizeof(void*)*8 + 1);
x_78 = lean_ctor_get(x_61, 4);
x_79 = lean_ctor_get(x_61, 5);
x_80 = lean_ctor_get(x_61, 6);
x_81 = lean_ctor_get(x_61, 7);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_61);
x_82 = 0;
x_83 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_83, 0, x_73);
lean_ctor_set(x_83, 1, x_74);
lean_ctor_set(x_83, 2, x_75);
lean_ctor_set(x_83, 3, x_76);
lean_ctor_set(x_83, 4, x_78);
lean_ctor_set(x_83, 5, x_79);
lean_ctor_set(x_83, 6, x_80);
lean_ctor_set(x_83, 7, x_81);
lean_ctor_set_uint8(x_83, sizeof(void*)*8, x_72);
lean_ctor_set_uint8(x_83, sizeof(void*)*8 + 1, x_77);
lean_ctor_set_uint8(x_83, sizeof(void*)*8 + 2, x_82);
x_84 = lean_st_ref_set(x_2, x_83, x_62);
lean_dec(x_2);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_86 = x_84;
} else {
 lean_dec_ref(x_84);
 x_86 = lean_box(0);
}
x_87 = lean_box(0);
if (lean_is_scalar(x_86)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_86;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_85);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_8);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_48);
if (x_89 == 0)
{
return x_48;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_48, 0);
x_91 = lean_ctor_get(x_48, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_48);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
block_107:
{
if (x_94 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
x_47 = x_95;
goto block_93;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_inc(x_29);
x_96 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_96, 0, x_29);
x_97 = l_Lean_KernelException_toMessageData___closed__15;
x_98 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_96);
x_99 = l_Lean_Meta_isLevelDefEqAux___closed__5;
x_100 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
lean_inc(x_41);
x_101 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_101, 0, x_41);
x_102 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_97);
x_104 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3;
x_105 = l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1(x_104, x_103, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_95);
lean_dec(x_4);
lean_dec(x_3);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
lean_dec(x_105);
x_47 = x_106;
goto block_93;
}
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_161; lean_object* x_162; uint8_t x_175; 
x_122 = lean_ctor_get(x_43, 0);
x_123 = lean_ctor_get(x_43, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_43);
x_175 = lean_unbox(x_122);
lean_dec(x_122);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; 
x_176 = lean_st_ref_get(x_8, x_123);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_177, 3);
lean_inc(x_178);
lean_dec(x_177);
x_179 = lean_ctor_get_uint8(x_178, sizeof(void*)*1);
lean_dec(x_178);
if (x_179 == 0)
{
lean_object* x_180; uint8_t x_181; 
x_180 = lean_ctor_get(x_176, 1);
lean_inc(x_180);
lean_dec(x_176);
x_181 = 0;
x_161 = x_181;
x_162 = x_180;
goto block_174;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; 
x_182 = lean_ctor_get(x_176, 1);
lean_inc(x_182);
lean_dec(x_176);
x_183 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3;
x_184 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2(x_183, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_182);
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_unbox(x_185);
lean_dec(x_185);
x_161 = x_187;
x_162 = x_186;
goto block_174;
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_41);
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_188 = lean_box(0);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_123);
return x_189;
}
block_160:
{
lean_object* x_125; 
lean_inc(x_8);
x_125 = l_Lean_Meta_isExprDefEq(x_29, x_41, x_5, x_6, x_7, x_8, x_124);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; uint8_t x_127; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_unbox(x_126);
lean_dec(x_126);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_8);
lean_dec(x_2);
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_129 = x_125;
} else {
 lean_dec_ref(x_125);
 x_129 = lean_box(0);
}
x_130 = lean_box(0);
if (lean_is_scalar(x_129)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_129;
}
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_128);
return x_131;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_132 = lean_ctor_get(x_125, 1);
lean_inc(x_132);
lean_dec(x_125);
x_133 = lean_st_ref_get(x_8, x_132);
lean_dec(x_8);
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
lean_dec(x_133);
x_135 = lean_st_ref_take(x_2, x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = lean_ctor_get_uint8(x_136, sizeof(void*)*8);
x_139 = lean_ctor_get(x_136, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_136, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_136, 2);
lean_inc(x_141);
x_142 = lean_ctor_get(x_136, 3);
lean_inc(x_142);
x_143 = lean_ctor_get_uint8(x_136, sizeof(void*)*8 + 1);
x_144 = lean_ctor_get(x_136, 4);
lean_inc(x_144);
x_145 = lean_ctor_get(x_136, 5);
lean_inc(x_145);
x_146 = lean_ctor_get(x_136, 6);
lean_inc(x_146);
x_147 = lean_ctor_get(x_136, 7);
lean_inc(x_147);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 lean_ctor_release(x_136, 2);
 lean_ctor_release(x_136, 3);
 lean_ctor_release(x_136, 4);
 lean_ctor_release(x_136, 5);
 lean_ctor_release(x_136, 6);
 lean_ctor_release(x_136, 7);
 x_148 = x_136;
} else {
 lean_dec_ref(x_136);
 x_148 = lean_box(0);
}
x_149 = 0;
if (lean_is_scalar(x_148)) {
 x_150 = lean_alloc_ctor(0, 8, 3);
} else {
 x_150 = x_148;
}
lean_ctor_set(x_150, 0, x_139);
lean_ctor_set(x_150, 1, x_140);
lean_ctor_set(x_150, 2, x_141);
lean_ctor_set(x_150, 3, x_142);
lean_ctor_set(x_150, 4, x_144);
lean_ctor_set(x_150, 5, x_145);
lean_ctor_set(x_150, 6, x_146);
lean_ctor_set(x_150, 7, x_147);
lean_ctor_set_uint8(x_150, sizeof(void*)*8, x_138);
lean_ctor_set_uint8(x_150, sizeof(void*)*8 + 1, x_143);
lean_ctor_set_uint8(x_150, sizeof(void*)*8 + 2, x_149);
x_151 = lean_st_ref_set(x_2, x_150, x_137);
lean_dec(x_2);
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_153 = x_151;
} else {
 lean_dec_ref(x_151);
 x_153 = lean_box(0);
}
x_154 = lean_box(0);
if (lean_is_scalar(x_153)) {
 x_155 = lean_alloc_ctor(0, 2, 0);
} else {
 x_155 = x_153;
}
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_152);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_8);
lean_dec(x_2);
x_156 = lean_ctor_get(x_125, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_125, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_158 = x_125;
} else {
 lean_dec_ref(x_125);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(1, 2, 0);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_157);
return x_159;
}
}
block_174:
{
if (x_161 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
x_124 = x_162;
goto block_160;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_inc(x_29);
x_163 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_163, 0, x_29);
x_164 = l_Lean_KernelException_toMessageData___closed__15;
x_165 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_163);
x_166 = l_Lean_Meta_isLevelDefEqAux___closed__5;
x_167 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
lean_inc(x_41);
x_168 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_168, 0, x_41);
x_169 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_164);
x_171 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3;
x_172 = l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1(x_171, x_170, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_162);
lean_dec(x_4);
lean_dec(x_3);
x_173 = lean_ctor_get(x_172, 1);
lean_inc(x_173);
lean_dec(x_172);
x_124 = x_173;
goto block_160;
}
}
}
}
else
{
uint8_t x_190; 
lean_dec(x_41);
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_190 = !lean_is_exclusive(x_43);
if (x_190 == 0)
{
return x_43;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_43, 0);
x_192 = lean_ctor_get(x_43, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_43);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
return x_193;
}
}
}
else
{
lean_object* x_194; lean_object* x_195; 
lean_dec(x_41);
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_194 = lean_box(0);
if (lean_is_scalar(x_18)) {
 x_195 = lean_alloc_ctor(0, 2, 0);
} else {
 x_195 = x_18;
}
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_34);
return x_195;
}
}
}
block_219:
{
if (x_197 == 0)
{
lean_dec(x_19);
x_34 = x_198;
goto block_196;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_199 = lean_array_get_size(x_19);
lean_dec(x_19);
x_200 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_199);
x_201 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_201, 0, x_200);
x_202 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__5;
x_203 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_201);
x_204 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__7;
x_205 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
lean_inc(x_33);
x_206 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_33);
x_207 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_207, 0, x_206);
x_208 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_208, 0, x_205);
lean_ctor_set(x_208, 1, x_207);
x_209 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__9;
x_210 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
x_211 = lean_ctor_get(x_16, 1);
lean_inc(x_211);
x_212 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_212, 0, x_211);
x_213 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_213, 0, x_210);
lean_ctor_set(x_213, 1, x_212);
x_214 = l_Lean_KernelException_toMessageData___closed__15;
x_215 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
x_216 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3;
x_217 = l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1(x_216, x_215, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_198);
x_218 = lean_ctor_get(x_217, 1);
lean_inc(x_218);
lean_dec(x_217);
x_34 = x_218;
goto block_196;
}
}
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; 
lean_dec(x_29);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_232 = lean_st_ref_get(x_8, x_17);
lean_dec(x_8);
x_233 = lean_ctor_get(x_232, 1);
lean_inc(x_233);
lean_dec(x_232);
x_234 = lean_st_ref_take(x_2, x_233);
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_234, 1);
lean_inc(x_236);
lean_dec(x_234);
x_237 = !lean_is_exclusive(x_235);
if (x_237 == 0)
{
uint8_t x_238; lean_object* x_239; uint8_t x_240; 
x_238 = 0;
lean_ctor_set_uint8(x_235, sizeof(void*)*8 + 2, x_238);
x_239 = lean_st_ref_set(x_2, x_235, x_236);
lean_dec(x_2);
x_240 = !lean_is_exclusive(x_239);
if (x_240 == 0)
{
lean_object* x_241; lean_object* x_242; 
x_241 = lean_ctor_get(x_239, 0);
lean_dec(x_241);
x_242 = lean_box(0);
lean_ctor_set(x_239, 0, x_242);
return x_239;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_243 = lean_ctor_get(x_239, 1);
lean_inc(x_243);
lean_dec(x_239);
x_244 = lean_box(0);
x_245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_243);
return x_245;
}
}
else
{
uint8_t x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; uint8_t x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; uint8_t x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_246 = lean_ctor_get_uint8(x_235, sizeof(void*)*8);
x_247 = lean_ctor_get(x_235, 0);
x_248 = lean_ctor_get(x_235, 1);
x_249 = lean_ctor_get(x_235, 2);
x_250 = lean_ctor_get(x_235, 3);
x_251 = lean_ctor_get_uint8(x_235, sizeof(void*)*8 + 1);
x_252 = lean_ctor_get(x_235, 4);
x_253 = lean_ctor_get(x_235, 5);
x_254 = lean_ctor_get(x_235, 6);
x_255 = lean_ctor_get(x_235, 7);
lean_inc(x_255);
lean_inc(x_254);
lean_inc(x_253);
lean_inc(x_252);
lean_inc(x_250);
lean_inc(x_249);
lean_inc(x_248);
lean_inc(x_247);
lean_dec(x_235);
x_256 = 0;
x_257 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_257, 0, x_247);
lean_ctor_set(x_257, 1, x_248);
lean_ctor_set(x_257, 2, x_249);
lean_ctor_set(x_257, 3, x_250);
lean_ctor_set(x_257, 4, x_252);
lean_ctor_set(x_257, 5, x_253);
lean_ctor_set(x_257, 6, x_254);
lean_ctor_set(x_257, 7, x_255);
lean_ctor_set_uint8(x_257, sizeof(void*)*8, x_246);
lean_ctor_set_uint8(x_257, sizeof(void*)*8 + 1, x_251);
lean_ctor_set_uint8(x_257, sizeof(void*)*8 + 2, x_256);
x_258 = lean_st_ref_set(x_2, x_257, x_236);
lean_dec(x_2);
x_259 = lean_ctor_get(x_258, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 lean_ctor_release(x_258, 1);
 x_260 = x_258;
} else {
 lean_dec_ref(x_258);
 x_260 = lean_box(0);
}
x_261 = lean_box(0);
if (lean_is_scalar(x_260)) {
 x_262 = lean_alloc_ctor(0, 2, 0);
} else {
 x_262 = x_260;
}
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_259);
return x_262;
}
}
}
}
}
}
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_apply_9(x_1, x_5, x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___rarg___lambda__1), 10, 4);
lean_closure_set(x_13, 0, x_4);
lean_closure_set(x_13, 1, x_5);
lean_closure_set(x_13, 2, x_6);
lean_closure_set(x_13, 3, x_7);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_13, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_take(x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_14, 5);
lean_inc(x_5);
x_18 = lean_array_push(x_17, x_5);
lean_ctor_set(x_14, 5, x_18);
x_19 = lean_st_ref_set(x_1, x_14, x_15);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_5, x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_apply_8(x_4, x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_22);
return x_23;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_24 = lean_ctor_get_uint8(x_14, sizeof(void*)*8);
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
x_27 = lean_ctor_get(x_14, 2);
x_28 = lean_ctor_get(x_14, 3);
x_29 = lean_ctor_get_uint8(x_14, sizeof(void*)*8 + 1);
x_30 = lean_ctor_get(x_14, 4);
x_31 = lean_ctor_get(x_14, 5);
x_32 = lean_ctor_get(x_14, 6);
x_33 = lean_ctor_get(x_14, 7);
x_34 = lean_ctor_get_uint8(x_14, sizeof(void*)*8 + 2);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
lean_inc(x_5);
x_35 = lean_array_push(x_31, x_5);
x_36 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_36, 0, x_25);
lean_ctor_set(x_36, 1, x_26);
lean_ctor_set(x_36, 2, x_27);
lean_ctor_set(x_36, 3, x_28);
lean_ctor_set(x_36, 4, x_30);
lean_ctor_set(x_36, 5, x_35);
lean_ctor_set(x_36, 6, x_32);
lean_ctor_set(x_36, 7, x_33);
lean_ctor_set_uint8(x_36, sizeof(void*)*8, x_24);
lean_ctor_set_uint8(x_36, sizeof(void*)*8 + 1, x_29);
lean_ctor_set_uint8(x_36, sizeof(void*)*8 + 2, x_34);
x_37 = lean_st_ref_set(x_1, x_36, x_15);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_5, x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_38);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_apply_8(x_4, x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_40);
return x_41;
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__2___lambda__1), 10, 4);
lean_closure_set(x_13, 0, x_5);
lean_closure_set(x_13, 1, x_6);
lean_closure_set(x_13, 2, x_7);
lean_closure_set(x_13, 3, x_1);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_2, x_3, x_4, x_13, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getBindingName(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 0;
x_17 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__2(x_1, x_11, x_16, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_17;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___rarg(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__1___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg___spec__2(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = x_5 < x_4;
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_6);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; 
lean_dec(x_6);
x_17 = lean_array_uget(x_3, x_5);
lean_inc(x_1);
lean_inc(x_2);
x_18 = l_Lean_Elab_Term_registerMVarErrorImplicitArgInfo(x_17, x_2, x_1, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = 1;
x_21 = x_5 + x_20;
x_22 = lean_box(0);
x_5 = x_21;
x_6 = x_22;
x_14 = x_19;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_ElabAppArgs_synthesizeAppInstMVars(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_1);
return x_11;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("after etaArgs, ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_3);
x_13 = l_Lean_Meta_inferType(x_3, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_59; lean_object* x_60; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_73 = lean_st_ref_get(x_11, x_15);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_74, 3);
lean_inc(x_75);
lean_dec(x_74);
x_76 = lean_ctor_get_uint8(x_75, sizeof(void*)*1);
lean_dec(x_75);
if (x_76 == 0)
{
lean_object* x_77; uint8_t x_78; 
x_77 = lean_ctor_get(x_73, 1);
lean_inc(x_77);
lean_dec(x_73);
x_78 = 0;
x_59 = x_78;
x_60 = x_77;
goto block_72;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_79 = lean_ctor_get(x_73, 1);
lean_inc(x_79);
lean_dec(x_73);
lean_inc(x_2);
x_80 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_79);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_unbox(x_81);
lean_dec(x_81);
x_59 = x_83;
x_60 = x_82;
goto block_72;
}
block_58:
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_1, 4);
lean_inc(x_17);
lean_dec(x_1);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_2);
x_18 = lean_box(0);
x_19 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__1(x_3, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
return x_19;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_47 = lean_st_ref_get(x_11, x_16);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_48, 3);
lean_inc(x_49);
lean_dec(x_48);
x_50 = lean_ctor_get_uint8(x_49, sizeof(void*)*1);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
lean_dec(x_47);
x_52 = 0;
x_21 = x_52;
x_22 = x_51;
goto block_46;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_53 = lean_ctor_get(x_47, 1);
lean_inc(x_53);
lean_dec(x_47);
lean_inc(x_2);
x_54 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_unbox(x_55);
lean_dec(x_55);
x_21 = x_57;
x_22 = x_56;
goto block_46;
}
block_46:
{
if (x_21 == 0)
{
lean_object* x_23; 
lean_dec(x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_isExprDefEq(x_20, x_14, x_8, x_9, x_10, x_11, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_box(0);
x_26 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__1(x_3, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_24);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_23);
if (x_27 == 0)
{
return x_23;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_23, 0);
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_23);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_inc(x_20);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_20);
x_32 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___lambda__2___closed__3;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l_Lean_KernelException_toMessageData___closed__15;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1(x_2, x_35, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_22);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_38 = l_Lean_Meta_isExprDefEq(x_20, x_14, x_8, x_9, x_10, x_11, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_box(0);
x_41 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__1(x_3, x_40, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_39);
return x_41;
}
else
{
uint8_t x_42; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_38);
if (x_42 == 0)
{
return x_38;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_38, 0);
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_38);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
}
block_72:
{
if (x_59 == 0)
{
x_16 = x_60;
goto block_58;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_inc(x_3);
x_61 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_61, 0, x_3);
x_62 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__2;
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
lean_inc(x_14);
x_66 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_66, 0, x_14);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_KernelException_toMessageData___closed__15;
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
lean_inc(x_2);
x_70 = l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1(x_2, x_69, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_60);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_16 = x_71;
goto block_58;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_84 = !lean_is_exclusive(x_13);
if (x_84 == 0)
{
return x_13;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_13, 0);
x_86 = lean_ctor_get(x_13, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_13);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("finalize");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__1;
x_2 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_40 = lean_st_ref_get(x_7, x_13);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_41, 3);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get_uint8(x_42, sizeof(void*)*1);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
lean_dec(x_40);
x_15 = x_44;
goto block_39;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
lean_dec(x_40);
x_46 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__2;
x_47 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__2(x_46, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_45);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_unbox(x_48);
lean_dec(x_48);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_15 = x_50;
goto block_39;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
lean_dec(x_47);
lean_inc(x_14);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_14);
x_53 = l_Lean_addTrace___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___spec__1(x_46, x_52, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_51);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_15 = x_54;
goto block_39;
}
}
block_39:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_16 = lean_ctor_get(x_6, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_12, 6);
lean_inc(x_17);
x_18 = lean_array_get_size(x_17);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = 0;
x_21 = lean_box(0);
lean_inc(x_14);
x_22 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___spec__1(x_14, x_16, x_17, x_19, x_20, x_21, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_17);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_ctor_get(x_12, 5);
lean_inc(x_24);
x_25 = l_Array_isEmpty___rarg(x_24);
if (x_25 == 0)
{
uint8_t x_26; uint8_t x_27; lean_object* x_28; 
x_26 = 0;
x_27 = 1;
lean_inc(x_4);
x_28 = l_Lean_Meta_mkLambdaFVars(x_24, x_14, x_26, x_27, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__2;
x_32 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2(x_12, x_31, x_29, x_21, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
return x_32;
}
else
{
uint8_t x_33; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_24);
x_37 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__2;
x_38 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2(x_12, x_37, x_14, x_21, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
return x_38;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_17 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___spec__1(x_1, x_2, x_3, x_15, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
return x_17;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_8(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
return x_14;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_11);
x_14 = 0;
x_15 = lean_box(0);
lean_inc(x_5);
x_16 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_13, x_14, x_15, x_5, x_6, x_7, x_8, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_17);
x_19 = l_Lean_Meta_isTypeFormer(x_17, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_box(0);
x_24 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg___lambda__1(x_17, x_1, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_st_ref_get(x_8, x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_st_ref_take(x_2, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = !lean_is_exclusive(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_29, 6);
x_33 = l_Lean_Expr_mvarId_x21(x_17);
x_34 = lean_array_push(x_32, x_33);
lean_ctor_set(x_29, 6, x_34);
x_35 = lean_st_ref_set(x_2, x_29, x_30);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_box(0);
x_38 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg___lambda__1(x_17, x_1, x_37, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
return x_38;
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_39 = lean_ctor_get_uint8(x_29, sizeof(void*)*8);
x_40 = lean_ctor_get(x_29, 0);
x_41 = lean_ctor_get(x_29, 1);
x_42 = lean_ctor_get(x_29, 2);
x_43 = lean_ctor_get(x_29, 3);
x_44 = lean_ctor_get_uint8(x_29, sizeof(void*)*8 + 1);
x_45 = lean_ctor_get(x_29, 4);
x_46 = lean_ctor_get(x_29, 5);
x_47 = lean_ctor_get(x_29, 6);
x_48 = lean_ctor_get(x_29, 7);
x_49 = lean_ctor_get_uint8(x_29, sizeof(void*)*8 + 2);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_29);
x_50 = l_Lean_Expr_mvarId_x21(x_17);
x_51 = lean_array_push(x_47, x_50);
x_52 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_52, 0, x_40);
lean_ctor_set(x_52, 1, x_41);
lean_ctor_set(x_52, 2, x_42);
lean_ctor_set(x_52, 3, x_43);
lean_ctor_set(x_52, 4, x_45);
lean_ctor_set(x_52, 5, x_46);
lean_ctor_set(x_52, 6, x_51);
lean_ctor_set(x_52, 7, x_48);
lean_ctor_set_uint8(x_52, sizeof(void*)*8, x_39);
lean_ctor_set_uint8(x_52, sizeof(void*)*8 + 1, x_44);
lean_ctor_set_uint8(x_52, sizeof(void*)*8 + 2, x_49);
x_53 = lean_st_ref_set(x_2, x_52, x_30);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_box(0);
x_56 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg___lambda__1(x_17, x_1, x_55, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_54);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_19);
if (x_57 == 0)
{
return x_19;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_19, 0);
x_59 = lean_ctor_get(x_19, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_19);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
return x_12;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__1(x_1, x_2, x_5);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_Lean_LocalDecl_userName(x_1);
x_9 = lean_name_eq(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
return x_6;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_5, 1);
x_18 = lean_nat_dec_le(x_17, x_7);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_6, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_8);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_6, x_21);
lean_dec(x_6);
x_32 = l_Lean_instInhabitedExpr;
x_33 = lean_array_get(x_32, x_2, x_7);
x_34 = l_Lean_Expr_fvarId_x21(x_33);
lean_dec(x_33);
lean_inc(x_12);
x_35 = l_Lean_Meta_getLocalDecl(x_34, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = 0;
x_39 = l_List_foldr___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__1(x_36, x_38, x_1);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_36);
lean_inc(x_4);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_4);
x_23 = x_40;
x_24 = x_37;
goto block_31;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_41 = lean_st_ref_get(x_15, x_37);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_st_ref_get(x_13, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Expr_fvarId_x21(x_3);
x_48 = l_Lean_MetavarContext_localDeclDependsOn(x_46, x_36, x_47);
lean_dec(x_47);
x_49 = lean_unbox(x_48);
lean_dec(x_48);
if (x_49 == 0)
{
lean_object* x_50; 
lean_inc(x_4);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_4);
x_23 = x_50;
x_24 = x_45;
goto block_31;
}
else
{
lean_object* x_51; 
x_51 = l_Array_forInUnsafe_loop___at_Lean_Meta_contradictionCore___spec__4___lambda__2___closed__1;
x_23 = x_51;
x_24 = x_45;
goto block_31;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_4);
x_52 = !lean_is_exclusive(x_35);
if (x_52 == 0)
{
return x_35;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_35, 0);
x_54 = lean_ctor_get(x_35, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_35);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
block_31:
{
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_4);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 0);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_ctor_get(x_5, 2);
x_29 = lean_nat_add(x_7, x_28);
lean_dec(x_7);
x_6 = x_22;
x_7 = x_29;
x_8 = x_27;
x_16 = x_24;
goto _start;
}
}
}
else
{
lean_object* x_56; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_8);
lean_ctor_set(x_56, 1, x_16);
return x_56;
}
}
else
{
lean_object* x_57; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_8);
lean_ctor_set(x_57, 1, x_16);
return x_57;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__1___boxed), 9, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = l_Lean_instInhabitedExpr;
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_get(x_12, x_2, x_13);
x_15 = lean_array_get_size(x_2);
x_16 = lean_unsigned_to_nat(1u);
lean_inc(x_15);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
x_18 = l_Array_findSomeM_x3f___rarg___closed__1;
lean_inc(x_7);
x_19 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__2(x_1, x_2, x_14, x_18, x_17, x_15, x_16, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_17);
lean_dec(x_14);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___closed__1;
x_24 = lean_box(0);
x_25 = lean_apply_9(x_23, x_24, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_19, 0);
lean_dec(x_27);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_28);
return x_19;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_dec(x_19);
x_30 = lean_ctor_get(x_21, 0);
lean_inc(x_30);
lean_dec(x_21);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 3);
lean_inc(x_15);
x_16 = l_List_isEmpty___rarg(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_free_object(x_11);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___boxed), 11, 1);
lean_closure_set(x_18, 0, x_15);
x_19 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___rarg(x_17, x_18, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
return x_19;
}
else
{
uint8_t x_20; lean_object* x_21; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = 0;
x_21 = lean_box(x_20);
lean_ctor_set(x_11, 0, x_21);
return x_11;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_11, 0);
x_23 = lean_ctor_get(x_11, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_11);
x_24 = lean_ctor_get(x_22, 3);
lean_inc(x_24);
x_25 = l_List_isEmpty___rarg(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
x_27 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___boxed), 11, 1);
lean_closure_set(x_27, 0, x_24);
x_28 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasOptAutoParams___spec__2___rarg(x_26, x_27, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
return x_28;
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = 0;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_23);
return x_31;
}
}
}
}
lean_object* l_List_foldr___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_17;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__2___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
x_8 = lean_box(x_1);
x_9 = lean_apply_3(x_7, x_8, x_3, x_3);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_7);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
if (lean_obj_tag(x_10) == 4)
{
lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_10, sizeof(void*)*2);
lean_dec(x_10);
x_14 = lean_box_uint64(x_13);
x_15 = lean_apply_4(x_5, x_2, x_11, x_12, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_5);
x_16 = lean_apply_2(x_6, x_2, x_10);
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_apply_2(x_4, x_17, x_3);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_19 = lean_box(x_1);
x_20 = lean_apply_3(x_7, x_19, x_2, x_3);
return x_20;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__2___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__2___rarg(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_5, x_6, x_7, x_8, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
lean_inc(x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_Lean_SourceInfo_fromRef(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2___rarg___boxed), 3, 0);
return x_6;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid autoParam, argument must be a constant");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("by");
return x_1;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_2, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
x_17 = lean_ctor_get_uint8(x_13, sizeof(void*)*8);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_Expr_getOptParamDefault_x3f(x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = l_Lean_Expr_getAutoParamTactic_x3f(x_18);
lean_dec(x_18);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_13, 3);
lean_inc(x_22);
lean_dec(x_13);
x_23 = l_List_isEmpty___rarg(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_24 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_24);
if (x_31 == 0)
{
return x_24;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_24, 0);
x_33 = lean_ctor_get(x_24, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_24);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_35 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_fTypeHasOptAutoParams(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = lean_st_ref_get(x_8, x_38);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_st_ref_get(x_2, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get_uint8(x_42, sizeof(void*)*8 + 1);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_1);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_44);
lean_dec(x_4);
lean_dec(x_2);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_41, 1);
lean_inc(x_46);
lean_dec(x_41);
x_47 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_35, 1);
lean_inc(x_48);
lean_dec(x_35);
x_49 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_48);
return x_49;
}
}
else
{
uint8_t x_50; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_35);
if (x_50 == 0)
{
return x_35;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_35, 0);
x_52 = lean_ctor_get(x_35, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_35);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
lean_object* x_54; 
lean_dec(x_13);
x_54 = lean_ctor_get(x_21, 0);
lean_inc(x_54);
lean_dec(x_21);
if (lean_obj_tag(x_54) == 4)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_st_ref_get(x_8, x_19);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_ctor_get(x_7, 0);
lean_inc(x_60);
x_61 = l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe(x_59, x_60, x_55);
lean_dec(x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_1);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
lean_dec(x_61);
x_63 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_64 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_65 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__1(x_64, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_58);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_66 = lean_ctor_get(x_61, 0);
lean_inc(x_66);
lean_dec(x_61);
x_67 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2___rarg(x_7, x_8, x_58);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_69);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_71);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__4;
x_75 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_75, 0, x_68);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Array_empty___closed__1;
x_77 = lean_array_push(x_76, x_75);
x_78 = lean_array_push(x_76, x_66);
x_79 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15606____closed__3;
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
x_81 = lean_array_push(x_77, x_80);
x_82 = l_Lean_Parser_Term_byTactic___elambda__1___closed__2;
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_84, 0, x_83);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_84);
x_85 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType(x_84, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_73);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
lean_dec(x_85);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_87 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg(x_84, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_88);
return x_89;
}
else
{
uint8_t x_90; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_90 = !lean_is_exclusive(x_87);
if (x_90 == 0)
{
return x_87;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_87, 0);
x_92 = lean_ctor_get(x_87, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_87);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_85);
if (x_94 == 0)
{
return x_85;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_85, 0);
x_96 = lean_ctor_get(x_85, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_85);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
else
{
lean_object* x_98; lean_object* x_99; 
lean_dec(x_54);
lean_dec(x_1);
x_98 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__3;
x_99 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__1(x_98, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_99;
}
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_18);
lean_dec(x_13);
x_100 = lean_ctor_get(x_20, 0);
lean_inc(x_100);
lean_dec(x_20);
x_101 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_100, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
x_103 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_102);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_104 = lean_ctor_get(x_16, 1);
lean_inc(x_104);
lean_dec(x_16);
x_105 = lean_ctor_get(x_13, 3);
lean_inc(x_105);
lean_dec(x_13);
x_106 = l_List_isEmpty___rarg(x_105);
lean_dec(x_105);
if (x_106 == 0)
{
lean_object* x_107; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_107 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_104);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; uint8_t x_109; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_unbox(x_108);
lean_dec(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_107, 1);
lean_inc(x_110);
lean_dec(x_107);
x_111 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addEtaArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_110);
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_107, 1);
lean_inc(x_112);
lean_dec(x_107);
x_113 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_112);
return x_113;
}
}
else
{
uint8_t x_114; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_114 = !lean_is_exclusive(x_107);
if (x_114 == 0)
{
return x_107;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_107, 0);
x_116 = lean_ctor_get(x_107, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_107);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
else
{
lean_object* x_118; 
lean_dec(x_1);
x_118 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_104);
lean_dec(x_4);
lean_dec(x_2);
return x_118;
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_13);
x_119 = lean_ctor_get(x_12, 1);
lean_inc(x_119);
lean_dec(x_12);
x_120 = lean_ctor_get(x_14, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_14, 1);
lean_inc(x_121);
lean_dec(x_14);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_120);
x_122 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType(x_120, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_119);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_st_ref_get(x_8, x_123);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
lean_dec(x_124);
x_126 = lean_st_ref_take(x_2, x_125);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = !lean_is_exclusive(x_127);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_127, 2);
lean_dec(x_130);
lean_ctor_set(x_127, 2, x_121);
x_131 = lean_st_ref_set(x_2, x_127, x_128);
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
lean_dec(x_131);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_133 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg(x_120, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_132);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; 
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
lean_dec(x_133);
x_135 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_134);
return x_135;
}
else
{
uint8_t x_136; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_136 = !lean_is_exclusive(x_133);
if (x_136 == 0)
{
return x_133;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_133, 0);
x_138 = lean_ctor_get(x_133, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_133);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
else
{
uint8_t x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_140 = lean_ctor_get_uint8(x_127, sizeof(void*)*8);
x_141 = lean_ctor_get(x_127, 0);
x_142 = lean_ctor_get(x_127, 1);
x_143 = lean_ctor_get(x_127, 3);
x_144 = lean_ctor_get_uint8(x_127, sizeof(void*)*8 + 1);
x_145 = lean_ctor_get(x_127, 4);
x_146 = lean_ctor_get(x_127, 5);
x_147 = lean_ctor_get(x_127, 6);
x_148 = lean_ctor_get(x_127, 7);
x_149 = lean_ctor_get_uint8(x_127, sizeof(void*)*8 + 2);
lean_inc(x_148);
lean_inc(x_147);
lean_inc(x_146);
lean_inc(x_145);
lean_inc(x_143);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_127);
x_150 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_150, 0, x_141);
lean_ctor_set(x_150, 1, x_142);
lean_ctor_set(x_150, 2, x_121);
lean_ctor_set(x_150, 3, x_143);
lean_ctor_set(x_150, 4, x_145);
lean_ctor_set(x_150, 5, x_146);
lean_ctor_set(x_150, 6, x_147);
lean_ctor_set(x_150, 7, x_148);
lean_ctor_set_uint8(x_150, sizeof(void*)*8, x_140);
lean_ctor_set_uint8(x_150, sizeof(void*)*8 + 1, x_144);
lean_ctor_set_uint8(x_150, sizeof(void*)*8 + 2, x_149);
x_151 = lean_st_ref_set(x_2, x_150, x_128);
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
lean_dec(x_151);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_153 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg(x_120, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_152);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; 
x_154 = lean_ctor_get(x_153, 1);
lean_inc(x_154);
lean_dec(x_153);
x_155 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_154);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_156 = lean_ctor_get(x_153, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_153, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_158 = x_153;
} else {
 lean_dec_ref(x_153);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(1, 2, 0);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_157);
return x_159;
}
}
}
else
{
uint8_t x_160; 
lean_dec(x_121);
lean_dec(x_120);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_160 = !lean_is_exclusive(x_122);
if (x_160 == 0)
{
return x_122;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_122, 0);
x_162 = lean_ctor_get(x_122, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_122);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processImplicitArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_2, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get_uint8(x_13, sizeof(void*)*8);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addImplicitArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
return x_18;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 0);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_8);
if (x_17 == 0)
{
lean_object* x_18; size_t x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_8, 1);
x_19 = lean_ctor_get_usize(x_8, 2);
x_20 = lean_ctor_get(x_8, 0);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_9);
if (x_21 == 0)
{
lean_object* x_22; size_t x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_9, 1);
x_23 = lean_ctor_get_usize(x_9, 2);
x_24 = lean_ctor_get(x_9, 0);
lean_dec(x_24);
x_25 = !lean_is_exclusive(x_10);
if (x_25 == 0)
{
lean_object* x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_10, 1);
x_27 = lean_ctor_get_usize(x_10, 2);
x_28 = lean_ctor_get(x_10, 0);
lean_dec(x_28);
x_29 = !lean_is_exclusive(x_11);
if (x_29 == 0)
{
lean_object* x_30; size_t x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_11, 1);
x_31 = lean_ctor_get_usize(x_11, 2);
x_32 = lean_ctor_get(x_11, 0);
lean_dec(x_32);
x_33 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_34 = lean_string_dec_eq(x_30, x_33);
lean_dec(x_30);
if (x_34 == 0)
{
lean_object* x_35; 
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_26);
lean_free_object(x_9);
lean_dec(x_22);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_7);
lean_dec(x_15);
lean_dec(x_13);
lean_free_object(x_5);
lean_dec(x_2);
x_35 = lean_apply_1(x_3, x_1);
return x_35;
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_1);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_ctor_get(x_1, 1);
lean_dec(x_37);
x_38 = lean_ctor_get(x_1, 0);
lean_dec(x_38);
x_39 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_40 = lean_string_dec_eq(x_26, x_39);
if (x_40 == 0)
{
lean_object* x_41; 
lean_dec(x_2);
lean_ctor_set(x_11, 1, x_33);
x_41 = lean_apply_1(x_3, x_1);
return x_41;
}
else
{
lean_object* x_42; uint8_t x_43; 
lean_dec(x_26);
x_42 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_43 = lean_string_dec_eq(x_22, x_42);
if (x_43 == 0)
{
lean_object* x_44; 
lean_dec(x_2);
lean_ctor_set(x_11, 1, x_33);
lean_ctor_set(x_10, 1, x_39);
x_44 = lean_apply_1(x_3, x_1);
return x_44;
}
else
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_22);
x_45 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_46 = lean_string_dec_eq(x_18, x_45);
if (x_46 == 0)
{
lean_object* x_47; 
lean_dec(x_2);
lean_ctor_set(x_11, 1, x_33);
lean_ctor_set(x_10, 1, x_39);
lean_ctor_set(x_9, 1, x_42);
x_47 = lean_apply_1(x_3, x_1);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_free_object(x_1);
lean_free_object(x_11);
lean_free_object(x_10);
lean_free_object(x_9);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_7);
lean_free_object(x_5);
lean_dec(x_3);
x_48 = lean_box_usize(x_31);
x_49 = lean_box_usize(x_27);
x_50 = lean_box_usize(x_23);
x_51 = lean_box_usize(x_19);
x_52 = lean_apply_6(x_2, x_15, x_13, x_48, x_49, x_50, x_51);
return x_52;
}
}
}
}
else
{
lean_object* x_53; uint8_t x_54; 
lean_dec(x_1);
x_53 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_54 = lean_string_dec_eq(x_26, x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_2);
lean_ctor_set(x_11, 1, x_33);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_5);
lean_ctor_set(x_55, 1, x_13);
x_56 = lean_apply_1(x_3, x_55);
return x_56;
}
else
{
lean_object* x_57; uint8_t x_58; 
lean_dec(x_26);
x_57 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_58 = lean_string_dec_eq(x_22, x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_2);
lean_ctor_set(x_11, 1, x_33);
lean_ctor_set(x_10, 1, x_53);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_5);
lean_ctor_set(x_59, 1, x_13);
x_60 = lean_apply_1(x_3, x_59);
return x_60;
}
else
{
lean_object* x_61; uint8_t x_62; 
lean_dec(x_22);
x_61 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_62 = lean_string_dec_eq(x_18, x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_2);
lean_ctor_set(x_11, 1, x_33);
lean_ctor_set(x_10, 1, x_53);
lean_ctor_set(x_9, 1, x_57);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_5);
lean_ctor_set(x_63, 1, x_13);
x_64 = lean_apply_1(x_3, x_63);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_free_object(x_11);
lean_free_object(x_10);
lean_free_object(x_9);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_7);
lean_free_object(x_5);
lean_dec(x_3);
x_65 = lean_box_usize(x_31);
x_66 = lean_box_usize(x_27);
x_67 = lean_box_usize(x_23);
x_68 = lean_box_usize(x_19);
x_69 = lean_apply_6(x_2, x_15, x_13, x_65, x_66, x_67, x_68);
return x_69;
}
}
}
}
}
}
else
{
lean_object* x_70; size_t x_71; lean_object* x_72; uint8_t x_73; 
x_70 = lean_ctor_get(x_11, 1);
x_71 = lean_ctor_get_usize(x_11, 2);
lean_inc(x_70);
lean_dec(x_11);
x_72 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_73 = lean_string_dec_eq(x_70, x_72);
lean_dec(x_70);
if (x_73 == 0)
{
lean_object* x_74; 
lean_free_object(x_10);
lean_dec(x_26);
lean_free_object(x_9);
lean_dec(x_22);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_7);
lean_dec(x_15);
lean_dec(x_13);
lean_free_object(x_5);
lean_dec(x_2);
x_74 = lean_apply_1(x_3, x_1);
return x_74;
}
else
{
lean_object* x_75; lean_object* x_76; uint8_t x_77; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_75 = x_1;
} else {
 lean_dec_ref(x_1);
 x_75 = lean_box(0);
}
x_76 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_77 = lean_string_dec_eq(x_26, x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_2);
x_78 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_78, 0, x_12);
lean_ctor_set(x_78, 1, x_72);
lean_ctor_set_usize(x_78, 2, x_71);
lean_ctor_set(x_10, 0, x_78);
if (lean_is_scalar(x_75)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_75;
}
lean_ctor_set(x_79, 0, x_5);
lean_ctor_set(x_79, 1, x_13);
x_80 = lean_apply_1(x_3, x_79);
return x_80;
}
else
{
lean_object* x_81; uint8_t x_82; 
lean_dec(x_26);
x_81 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_82 = lean_string_dec_eq(x_22, x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_2);
x_83 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_83, 0, x_12);
lean_ctor_set(x_83, 1, x_72);
lean_ctor_set_usize(x_83, 2, x_71);
lean_ctor_set(x_10, 1, x_76);
lean_ctor_set(x_10, 0, x_83);
if (lean_is_scalar(x_75)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_75;
}
lean_ctor_set(x_84, 0, x_5);
lean_ctor_set(x_84, 1, x_13);
x_85 = lean_apply_1(x_3, x_84);
return x_85;
}
else
{
lean_object* x_86; uint8_t x_87; 
lean_dec(x_22);
x_86 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_87 = lean_string_dec_eq(x_18, x_86);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_2);
x_88 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_88, 0, x_12);
lean_ctor_set(x_88, 1, x_72);
lean_ctor_set_usize(x_88, 2, x_71);
lean_ctor_set(x_10, 1, x_76);
lean_ctor_set(x_10, 0, x_88);
lean_ctor_set(x_9, 1, x_81);
if (lean_is_scalar(x_75)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_75;
}
lean_ctor_set(x_89, 0, x_5);
lean_ctor_set(x_89, 1, x_13);
x_90 = lean_apply_1(x_3, x_89);
return x_90;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_75);
lean_free_object(x_10);
lean_free_object(x_9);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_7);
lean_free_object(x_5);
lean_dec(x_3);
x_91 = lean_box_usize(x_71);
x_92 = lean_box_usize(x_27);
x_93 = lean_box_usize(x_23);
x_94 = lean_box_usize(x_19);
x_95 = lean_apply_6(x_2, x_15, x_13, x_91, x_92, x_93, x_94);
return x_95;
}
}
}
}
}
}
else
{
lean_object* x_96; size_t x_97; lean_object* x_98; size_t x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; 
x_96 = lean_ctor_get(x_10, 1);
x_97 = lean_ctor_get_usize(x_10, 2);
lean_inc(x_96);
lean_dec(x_10);
x_98 = lean_ctor_get(x_11, 1);
lean_inc(x_98);
x_99 = lean_ctor_get_usize(x_11, 2);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_100 = x_11;
} else {
 lean_dec_ref(x_11);
 x_100 = lean_box(0);
}
x_101 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_102 = lean_string_dec_eq(x_98, x_101);
lean_dec(x_98);
if (x_102 == 0)
{
lean_object* x_103; 
lean_dec(x_100);
lean_dec(x_96);
lean_free_object(x_9);
lean_dec(x_22);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_7);
lean_dec(x_15);
lean_dec(x_13);
lean_free_object(x_5);
lean_dec(x_2);
x_103 = lean_apply_1(x_3, x_1);
return x_103;
}
else
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_104 = x_1;
} else {
 lean_dec_ref(x_1);
 x_104 = lean_box(0);
}
x_105 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_106 = lean_string_dec_eq(x_96, x_105);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_2);
if (lean_is_scalar(x_100)) {
 x_107 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_107 = x_100;
}
lean_ctor_set(x_107, 0, x_12);
lean_ctor_set(x_107, 1, x_101);
lean_ctor_set_usize(x_107, 2, x_99);
x_108 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_96);
lean_ctor_set_usize(x_108, 2, x_97);
lean_ctor_set(x_9, 0, x_108);
if (lean_is_scalar(x_104)) {
 x_109 = lean_alloc_ctor(1, 2, 0);
} else {
 x_109 = x_104;
}
lean_ctor_set(x_109, 0, x_5);
lean_ctor_set(x_109, 1, x_13);
x_110 = lean_apply_1(x_3, x_109);
return x_110;
}
else
{
lean_object* x_111; uint8_t x_112; 
lean_dec(x_96);
x_111 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_112 = lean_string_dec_eq(x_22, x_111);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_2);
if (lean_is_scalar(x_100)) {
 x_113 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_113 = x_100;
}
lean_ctor_set(x_113, 0, x_12);
lean_ctor_set(x_113, 1, x_101);
lean_ctor_set_usize(x_113, 2, x_99);
x_114 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_105);
lean_ctor_set_usize(x_114, 2, x_97);
lean_ctor_set(x_9, 0, x_114);
if (lean_is_scalar(x_104)) {
 x_115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_115 = x_104;
}
lean_ctor_set(x_115, 0, x_5);
lean_ctor_set(x_115, 1, x_13);
x_116 = lean_apply_1(x_3, x_115);
return x_116;
}
else
{
lean_object* x_117; uint8_t x_118; 
lean_dec(x_22);
x_117 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_118 = lean_string_dec_eq(x_18, x_117);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_2);
if (lean_is_scalar(x_100)) {
 x_119 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_119 = x_100;
}
lean_ctor_set(x_119, 0, x_12);
lean_ctor_set(x_119, 1, x_101);
lean_ctor_set_usize(x_119, 2, x_99);
x_120 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_105);
lean_ctor_set_usize(x_120, 2, x_97);
lean_ctor_set(x_9, 1, x_111);
lean_ctor_set(x_9, 0, x_120);
if (lean_is_scalar(x_104)) {
 x_121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_121 = x_104;
}
lean_ctor_set(x_121, 0, x_5);
lean_ctor_set(x_121, 1, x_13);
x_122 = lean_apply_1(x_3, x_121);
return x_122;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_104);
lean_dec(x_100);
lean_free_object(x_9);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_7);
lean_free_object(x_5);
lean_dec(x_3);
x_123 = lean_box_usize(x_99);
x_124 = lean_box_usize(x_97);
x_125 = lean_box_usize(x_23);
x_126 = lean_box_usize(x_19);
x_127 = lean_apply_6(x_2, x_15, x_13, x_123, x_124, x_125, x_126);
return x_127;
}
}
}
}
}
}
else
{
lean_object* x_128; size_t x_129; lean_object* x_130; size_t x_131; lean_object* x_132; lean_object* x_133; size_t x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
x_128 = lean_ctor_get(x_9, 1);
x_129 = lean_ctor_get_usize(x_9, 2);
lean_inc(x_128);
lean_dec(x_9);
x_130 = lean_ctor_get(x_10, 1);
lean_inc(x_130);
x_131 = lean_ctor_get_usize(x_10, 2);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_132 = x_10;
} else {
 lean_dec_ref(x_10);
 x_132 = lean_box(0);
}
x_133 = lean_ctor_get(x_11, 1);
lean_inc(x_133);
x_134 = lean_ctor_get_usize(x_11, 2);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_135 = x_11;
} else {
 lean_dec_ref(x_11);
 x_135 = lean_box(0);
}
x_136 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_137 = lean_string_dec_eq(x_133, x_136);
lean_dec(x_133);
if (x_137 == 0)
{
lean_object* x_138; 
lean_dec(x_135);
lean_dec(x_132);
lean_dec(x_130);
lean_dec(x_128);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_7);
lean_dec(x_15);
lean_dec(x_13);
lean_free_object(x_5);
lean_dec(x_2);
x_138 = lean_apply_1(x_3, x_1);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; uint8_t x_141; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_139 = x_1;
} else {
 lean_dec_ref(x_1);
 x_139 = lean_box(0);
}
x_140 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_141 = lean_string_dec_eq(x_130, x_140);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_2);
if (lean_is_scalar(x_135)) {
 x_142 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_142 = x_135;
}
lean_ctor_set(x_142, 0, x_12);
lean_ctor_set(x_142, 1, x_136);
lean_ctor_set_usize(x_142, 2, x_134);
if (lean_is_scalar(x_132)) {
 x_143 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_143 = x_132;
}
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_130);
lean_ctor_set_usize(x_143, 2, x_131);
x_144 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_128);
lean_ctor_set_usize(x_144, 2, x_129);
lean_ctor_set(x_8, 0, x_144);
if (lean_is_scalar(x_139)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_139;
}
lean_ctor_set(x_145, 0, x_5);
lean_ctor_set(x_145, 1, x_13);
x_146 = lean_apply_1(x_3, x_145);
return x_146;
}
else
{
lean_object* x_147; uint8_t x_148; 
lean_dec(x_130);
x_147 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_148 = lean_string_dec_eq(x_128, x_147);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_2);
if (lean_is_scalar(x_135)) {
 x_149 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_149 = x_135;
}
lean_ctor_set(x_149, 0, x_12);
lean_ctor_set(x_149, 1, x_136);
lean_ctor_set_usize(x_149, 2, x_134);
if (lean_is_scalar(x_132)) {
 x_150 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_150 = x_132;
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_140);
lean_ctor_set_usize(x_150, 2, x_131);
x_151 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_128);
lean_ctor_set_usize(x_151, 2, x_129);
lean_ctor_set(x_8, 0, x_151);
if (lean_is_scalar(x_139)) {
 x_152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_152 = x_139;
}
lean_ctor_set(x_152, 0, x_5);
lean_ctor_set(x_152, 1, x_13);
x_153 = lean_apply_1(x_3, x_152);
return x_153;
}
else
{
lean_object* x_154; uint8_t x_155; 
lean_dec(x_128);
x_154 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_155 = lean_string_dec_eq(x_18, x_154);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_2);
if (lean_is_scalar(x_135)) {
 x_156 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_156 = x_135;
}
lean_ctor_set(x_156, 0, x_12);
lean_ctor_set(x_156, 1, x_136);
lean_ctor_set_usize(x_156, 2, x_134);
if (lean_is_scalar(x_132)) {
 x_157 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_157 = x_132;
}
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_140);
lean_ctor_set_usize(x_157, 2, x_131);
x_158 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_147);
lean_ctor_set_usize(x_158, 2, x_129);
lean_ctor_set(x_8, 0, x_158);
if (lean_is_scalar(x_139)) {
 x_159 = lean_alloc_ctor(1, 2, 0);
} else {
 x_159 = x_139;
}
lean_ctor_set(x_159, 0, x_5);
lean_ctor_set(x_159, 1, x_13);
x_160 = lean_apply_1(x_3, x_159);
return x_160;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_139);
lean_dec(x_135);
lean_dec(x_132);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_7);
lean_free_object(x_5);
lean_dec(x_3);
x_161 = lean_box_usize(x_134);
x_162 = lean_box_usize(x_131);
x_163 = lean_box_usize(x_129);
x_164 = lean_box_usize(x_19);
x_165 = lean_apply_6(x_2, x_15, x_13, x_161, x_162, x_163, x_164);
return x_165;
}
}
}
}
}
}
else
{
lean_object* x_166; size_t x_167; lean_object* x_168; size_t x_169; lean_object* x_170; lean_object* x_171; size_t x_172; lean_object* x_173; lean_object* x_174; size_t x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
x_166 = lean_ctor_get(x_8, 1);
x_167 = lean_ctor_get_usize(x_8, 2);
lean_inc(x_166);
lean_dec(x_8);
x_168 = lean_ctor_get(x_9, 1);
lean_inc(x_168);
x_169 = lean_ctor_get_usize(x_9, 2);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_170 = x_9;
} else {
 lean_dec_ref(x_9);
 x_170 = lean_box(0);
}
x_171 = lean_ctor_get(x_10, 1);
lean_inc(x_171);
x_172 = lean_ctor_get_usize(x_10, 2);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_173 = x_10;
} else {
 lean_dec_ref(x_10);
 x_173 = lean_box(0);
}
x_174 = lean_ctor_get(x_11, 1);
lean_inc(x_174);
x_175 = lean_ctor_get_usize(x_11, 2);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_176 = x_11;
} else {
 lean_dec_ref(x_11);
 x_176 = lean_box(0);
}
x_177 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_178 = lean_string_dec_eq(x_174, x_177);
lean_dec(x_174);
if (x_178 == 0)
{
lean_object* x_179; 
lean_dec(x_176);
lean_dec(x_173);
lean_dec(x_171);
lean_dec(x_170);
lean_dec(x_168);
lean_dec(x_166);
lean_free_object(x_7);
lean_dec(x_15);
lean_dec(x_13);
lean_free_object(x_5);
lean_dec(x_2);
x_179 = lean_apply_1(x_3, x_1);
return x_179;
}
else
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_180 = x_1;
} else {
 lean_dec_ref(x_1);
 x_180 = lean_box(0);
}
x_181 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_182 = lean_string_dec_eq(x_171, x_181);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_2);
if (lean_is_scalar(x_176)) {
 x_183 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_183 = x_176;
}
lean_ctor_set(x_183, 0, x_12);
lean_ctor_set(x_183, 1, x_177);
lean_ctor_set_usize(x_183, 2, x_175);
if (lean_is_scalar(x_173)) {
 x_184 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_184 = x_173;
}
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_171);
lean_ctor_set_usize(x_184, 2, x_172);
if (lean_is_scalar(x_170)) {
 x_185 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_185 = x_170;
}
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_168);
lean_ctor_set_usize(x_185, 2, x_169);
x_186 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_166);
lean_ctor_set_usize(x_186, 2, x_167);
lean_ctor_set(x_7, 0, x_186);
if (lean_is_scalar(x_180)) {
 x_187 = lean_alloc_ctor(1, 2, 0);
} else {
 x_187 = x_180;
}
lean_ctor_set(x_187, 0, x_5);
lean_ctor_set(x_187, 1, x_13);
x_188 = lean_apply_1(x_3, x_187);
return x_188;
}
else
{
lean_object* x_189; uint8_t x_190; 
lean_dec(x_171);
x_189 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_190 = lean_string_dec_eq(x_168, x_189);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_2);
if (lean_is_scalar(x_176)) {
 x_191 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_191 = x_176;
}
lean_ctor_set(x_191, 0, x_12);
lean_ctor_set(x_191, 1, x_177);
lean_ctor_set_usize(x_191, 2, x_175);
if (lean_is_scalar(x_173)) {
 x_192 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_192 = x_173;
}
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_181);
lean_ctor_set_usize(x_192, 2, x_172);
if (lean_is_scalar(x_170)) {
 x_193 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_193 = x_170;
}
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_168);
lean_ctor_set_usize(x_193, 2, x_169);
x_194 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_166);
lean_ctor_set_usize(x_194, 2, x_167);
lean_ctor_set(x_7, 0, x_194);
if (lean_is_scalar(x_180)) {
 x_195 = lean_alloc_ctor(1, 2, 0);
} else {
 x_195 = x_180;
}
lean_ctor_set(x_195, 0, x_5);
lean_ctor_set(x_195, 1, x_13);
x_196 = lean_apply_1(x_3, x_195);
return x_196;
}
else
{
lean_object* x_197; uint8_t x_198; 
lean_dec(x_168);
x_197 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_198 = lean_string_dec_eq(x_166, x_197);
if (x_198 == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_2);
if (lean_is_scalar(x_176)) {
 x_199 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_199 = x_176;
}
lean_ctor_set(x_199, 0, x_12);
lean_ctor_set(x_199, 1, x_177);
lean_ctor_set_usize(x_199, 2, x_175);
if (lean_is_scalar(x_173)) {
 x_200 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_200 = x_173;
}
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_181);
lean_ctor_set_usize(x_200, 2, x_172);
if (lean_is_scalar(x_170)) {
 x_201 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_201 = x_170;
}
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_189);
lean_ctor_set_usize(x_201, 2, x_169);
x_202 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_166);
lean_ctor_set_usize(x_202, 2, x_167);
lean_ctor_set(x_7, 0, x_202);
if (lean_is_scalar(x_180)) {
 x_203 = lean_alloc_ctor(1, 2, 0);
} else {
 x_203 = x_180;
}
lean_ctor_set(x_203, 0, x_5);
lean_ctor_set(x_203, 1, x_13);
x_204 = lean_apply_1(x_3, x_203);
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_180);
lean_dec(x_176);
lean_dec(x_173);
lean_dec(x_170);
lean_dec(x_166);
lean_free_object(x_7);
lean_free_object(x_5);
lean_dec(x_3);
x_205 = lean_box_usize(x_175);
x_206 = lean_box_usize(x_172);
x_207 = lean_box_usize(x_169);
x_208 = lean_box_usize(x_167);
x_209 = lean_apply_6(x_2, x_15, x_13, x_205, x_206, x_207, x_208);
return x_209;
}
}
}
}
}
}
else
{
lean_object* x_210; lean_object* x_211; size_t x_212; lean_object* x_213; lean_object* x_214; size_t x_215; lean_object* x_216; lean_object* x_217; size_t x_218; lean_object* x_219; lean_object* x_220; size_t x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; 
x_210 = lean_ctor_get(x_7, 1);
lean_inc(x_210);
lean_dec(x_7);
x_211 = lean_ctor_get(x_8, 1);
lean_inc(x_211);
x_212 = lean_ctor_get_usize(x_8, 2);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_213 = x_8;
} else {
 lean_dec_ref(x_8);
 x_213 = lean_box(0);
}
x_214 = lean_ctor_get(x_9, 1);
lean_inc(x_214);
x_215 = lean_ctor_get_usize(x_9, 2);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_216 = x_9;
} else {
 lean_dec_ref(x_9);
 x_216 = lean_box(0);
}
x_217 = lean_ctor_get(x_10, 1);
lean_inc(x_217);
x_218 = lean_ctor_get_usize(x_10, 2);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_219 = x_10;
} else {
 lean_dec_ref(x_10);
 x_219 = lean_box(0);
}
x_220 = lean_ctor_get(x_11, 1);
lean_inc(x_220);
x_221 = lean_ctor_get_usize(x_11, 2);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_222 = x_11;
} else {
 lean_dec_ref(x_11);
 x_222 = lean_box(0);
}
x_223 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_224 = lean_string_dec_eq(x_220, x_223);
lean_dec(x_220);
if (x_224 == 0)
{
lean_object* x_225; 
lean_dec(x_222);
lean_dec(x_219);
lean_dec(x_217);
lean_dec(x_216);
lean_dec(x_214);
lean_dec(x_213);
lean_dec(x_211);
lean_dec(x_210);
lean_dec(x_13);
lean_free_object(x_5);
lean_dec(x_2);
x_225 = lean_apply_1(x_3, x_1);
return x_225;
}
else
{
lean_object* x_226; lean_object* x_227; uint8_t x_228; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_226 = x_1;
} else {
 lean_dec_ref(x_1);
 x_226 = lean_box(0);
}
x_227 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_228 = lean_string_dec_eq(x_217, x_227);
if (x_228 == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
lean_dec(x_2);
if (lean_is_scalar(x_222)) {
 x_229 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_229 = x_222;
}
lean_ctor_set(x_229, 0, x_12);
lean_ctor_set(x_229, 1, x_223);
lean_ctor_set_usize(x_229, 2, x_221);
if (lean_is_scalar(x_219)) {
 x_230 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_230 = x_219;
}
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_217);
lean_ctor_set_usize(x_230, 2, x_218);
if (lean_is_scalar(x_216)) {
 x_231 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_231 = x_216;
}
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_214);
lean_ctor_set_usize(x_231, 2, x_215);
if (lean_is_scalar(x_213)) {
 x_232 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_232 = x_213;
}
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_211);
lean_ctor_set_usize(x_232, 2, x_212);
x_233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_233, 1, x_210);
lean_ctor_set(x_5, 0, x_233);
if (lean_is_scalar(x_226)) {
 x_234 = lean_alloc_ctor(1, 2, 0);
} else {
 x_234 = x_226;
}
lean_ctor_set(x_234, 0, x_5);
lean_ctor_set(x_234, 1, x_13);
x_235 = lean_apply_1(x_3, x_234);
return x_235;
}
else
{
lean_object* x_236; uint8_t x_237; 
lean_dec(x_217);
x_236 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_237 = lean_string_dec_eq(x_214, x_236);
if (x_237 == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_2);
if (lean_is_scalar(x_222)) {
 x_238 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_238 = x_222;
}
lean_ctor_set(x_238, 0, x_12);
lean_ctor_set(x_238, 1, x_223);
lean_ctor_set_usize(x_238, 2, x_221);
if (lean_is_scalar(x_219)) {
 x_239 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_239 = x_219;
}
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_227);
lean_ctor_set_usize(x_239, 2, x_218);
if (lean_is_scalar(x_216)) {
 x_240 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_240 = x_216;
}
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_214);
lean_ctor_set_usize(x_240, 2, x_215);
if (lean_is_scalar(x_213)) {
 x_241 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_241 = x_213;
}
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_211);
lean_ctor_set_usize(x_241, 2, x_212);
x_242 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_210);
lean_ctor_set(x_5, 0, x_242);
if (lean_is_scalar(x_226)) {
 x_243 = lean_alloc_ctor(1, 2, 0);
} else {
 x_243 = x_226;
}
lean_ctor_set(x_243, 0, x_5);
lean_ctor_set(x_243, 1, x_13);
x_244 = lean_apply_1(x_3, x_243);
return x_244;
}
else
{
lean_object* x_245; uint8_t x_246; 
lean_dec(x_214);
x_245 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_246 = lean_string_dec_eq(x_211, x_245);
if (x_246 == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_2);
if (lean_is_scalar(x_222)) {
 x_247 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_247 = x_222;
}
lean_ctor_set(x_247, 0, x_12);
lean_ctor_set(x_247, 1, x_223);
lean_ctor_set_usize(x_247, 2, x_221);
if (lean_is_scalar(x_219)) {
 x_248 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_248 = x_219;
}
lean_ctor_set(x_248, 0, x_247);
lean_ctor_set(x_248, 1, x_227);
lean_ctor_set_usize(x_248, 2, x_218);
if (lean_is_scalar(x_216)) {
 x_249 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_249 = x_216;
}
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_236);
lean_ctor_set_usize(x_249, 2, x_215);
if (lean_is_scalar(x_213)) {
 x_250 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_250 = x_213;
}
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_211);
lean_ctor_set_usize(x_250, 2, x_212);
x_251 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_210);
lean_ctor_set(x_5, 0, x_251);
if (lean_is_scalar(x_226)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_226;
}
lean_ctor_set(x_252, 0, x_5);
lean_ctor_set(x_252, 1, x_13);
x_253 = lean_apply_1(x_3, x_252);
return x_253;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_226);
lean_dec(x_222);
lean_dec(x_219);
lean_dec(x_216);
lean_dec(x_213);
lean_dec(x_211);
lean_free_object(x_5);
lean_dec(x_3);
x_254 = lean_box_usize(x_221);
x_255 = lean_box_usize(x_218);
x_256 = lean_box_usize(x_215);
x_257 = lean_box_usize(x_212);
x_258 = lean_apply_6(x_2, x_210, x_13, x_254, x_255, x_256, x_257);
return x_258;
}
}
}
}
}
}
else
{
lean_object* x_259; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_free_object(x_5);
lean_dec(x_7);
lean_dec(x_2);
x_259 = lean_apply_1(x_3, x_1);
return x_259;
}
}
else
{
lean_object* x_260; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_free_object(x_5);
lean_dec(x_7);
lean_dec(x_2);
x_260 = lean_apply_1(x_3, x_1);
return x_260;
}
}
else
{
lean_object* x_261; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_free_object(x_5);
lean_dec(x_7);
lean_dec(x_2);
x_261 = lean_apply_1(x_3, x_1);
return x_261;
}
}
else
{
lean_object* x_262; 
lean_dec(x_9);
lean_dec(x_8);
lean_free_object(x_5);
lean_dec(x_7);
lean_dec(x_2);
x_262 = lean_apply_1(x_3, x_1);
return x_262;
}
}
else
{
lean_object* x_263; 
lean_dec(x_8);
lean_free_object(x_5);
lean_dec(x_7);
lean_dec(x_2);
x_263 = lean_apply_1(x_3, x_1);
return x_263;
}
}
else
{
lean_object* x_264; 
lean_free_object(x_5);
lean_dec(x_7);
lean_dec(x_2);
x_264 = lean_apply_1(x_3, x_1);
return x_264;
}
}
else
{
lean_object* x_265; 
x_265 = lean_ctor_get(x_5, 0);
lean_inc(x_265);
lean_dec(x_5);
if (lean_obj_tag(x_265) == 1)
{
lean_object* x_266; 
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
if (lean_obj_tag(x_266) == 1)
{
lean_object* x_267; 
x_267 = lean_ctor_get(x_266, 0);
lean_inc(x_267);
if (lean_obj_tag(x_267) == 1)
{
lean_object* x_268; 
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
if (lean_obj_tag(x_268) == 1)
{
lean_object* x_269; 
x_269 = lean_ctor_get(x_268, 0);
lean_inc(x_269);
if (lean_obj_tag(x_269) == 1)
{
lean_object* x_270; 
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; size_t x_275; lean_object* x_276; lean_object* x_277; size_t x_278; lean_object* x_279; lean_object* x_280; size_t x_281; lean_object* x_282; lean_object* x_283; size_t x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; 
x_271 = lean_ctor_get(x_1, 1);
lean_inc(x_271);
x_272 = lean_ctor_get(x_265, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_265)) {
 lean_ctor_release(x_265, 0);
 lean_ctor_release(x_265, 1);
 x_273 = x_265;
} else {
 lean_dec_ref(x_265);
 x_273 = lean_box(0);
}
x_274 = lean_ctor_get(x_266, 1);
lean_inc(x_274);
x_275 = lean_ctor_get_usize(x_266, 2);
if (lean_is_exclusive(x_266)) {
 lean_ctor_release(x_266, 0);
 lean_ctor_release(x_266, 1);
 x_276 = x_266;
} else {
 lean_dec_ref(x_266);
 x_276 = lean_box(0);
}
x_277 = lean_ctor_get(x_267, 1);
lean_inc(x_277);
x_278 = lean_ctor_get_usize(x_267, 2);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_279 = x_267;
} else {
 lean_dec_ref(x_267);
 x_279 = lean_box(0);
}
x_280 = lean_ctor_get(x_268, 1);
lean_inc(x_280);
x_281 = lean_ctor_get_usize(x_268, 2);
if (lean_is_exclusive(x_268)) {
 lean_ctor_release(x_268, 0);
 lean_ctor_release(x_268, 1);
 x_282 = x_268;
} else {
 lean_dec_ref(x_268);
 x_282 = lean_box(0);
}
x_283 = lean_ctor_get(x_269, 1);
lean_inc(x_283);
x_284 = lean_ctor_get_usize(x_269, 2);
if (lean_is_exclusive(x_269)) {
 lean_ctor_release(x_269, 0);
 lean_ctor_release(x_269, 1);
 x_285 = x_269;
} else {
 lean_dec_ref(x_269);
 x_285 = lean_box(0);
}
x_286 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_287 = lean_string_dec_eq(x_283, x_286);
lean_dec(x_283);
if (x_287 == 0)
{
lean_object* x_288; 
lean_dec(x_285);
lean_dec(x_282);
lean_dec(x_280);
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_276);
lean_dec(x_274);
lean_dec(x_273);
lean_dec(x_272);
lean_dec(x_271);
lean_dec(x_2);
x_288 = lean_apply_1(x_3, x_1);
return x_288;
}
else
{
lean_object* x_289; lean_object* x_290; uint8_t x_291; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_289 = x_1;
} else {
 lean_dec_ref(x_1);
 x_289 = lean_box(0);
}
x_290 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_291 = lean_string_dec_eq(x_280, x_290);
if (x_291 == 0)
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
lean_dec(x_2);
if (lean_is_scalar(x_285)) {
 x_292 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_292 = x_285;
}
lean_ctor_set(x_292, 0, x_270);
lean_ctor_set(x_292, 1, x_286);
lean_ctor_set_usize(x_292, 2, x_284);
if (lean_is_scalar(x_282)) {
 x_293 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_293 = x_282;
}
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_280);
lean_ctor_set_usize(x_293, 2, x_281);
if (lean_is_scalar(x_279)) {
 x_294 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_294 = x_279;
}
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_277);
lean_ctor_set_usize(x_294, 2, x_278);
if (lean_is_scalar(x_276)) {
 x_295 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_295 = x_276;
}
lean_ctor_set(x_295, 0, x_294);
lean_ctor_set(x_295, 1, x_274);
lean_ctor_set_usize(x_295, 2, x_275);
if (lean_is_scalar(x_273)) {
 x_296 = lean_alloc_ctor(1, 2, 0);
} else {
 x_296 = x_273;
}
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_272);
x_297 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_297, 0, x_296);
if (lean_is_scalar(x_289)) {
 x_298 = lean_alloc_ctor(1, 2, 0);
} else {
 x_298 = x_289;
}
lean_ctor_set(x_298, 0, x_297);
lean_ctor_set(x_298, 1, x_271);
x_299 = lean_apply_1(x_3, x_298);
return x_299;
}
else
{
lean_object* x_300; uint8_t x_301; 
lean_dec(x_280);
x_300 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_301 = lean_string_dec_eq(x_277, x_300);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
lean_dec(x_2);
if (lean_is_scalar(x_285)) {
 x_302 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_302 = x_285;
}
lean_ctor_set(x_302, 0, x_270);
lean_ctor_set(x_302, 1, x_286);
lean_ctor_set_usize(x_302, 2, x_284);
if (lean_is_scalar(x_282)) {
 x_303 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_303 = x_282;
}
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_290);
lean_ctor_set_usize(x_303, 2, x_281);
if (lean_is_scalar(x_279)) {
 x_304 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_304 = x_279;
}
lean_ctor_set(x_304, 0, x_303);
lean_ctor_set(x_304, 1, x_277);
lean_ctor_set_usize(x_304, 2, x_278);
if (lean_is_scalar(x_276)) {
 x_305 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_305 = x_276;
}
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_274);
lean_ctor_set_usize(x_305, 2, x_275);
if (lean_is_scalar(x_273)) {
 x_306 = lean_alloc_ctor(1, 2, 0);
} else {
 x_306 = x_273;
}
lean_ctor_set(x_306, 0, x_305);
lean_ctor_set(x_306, 1, x_272);
x_307 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_307, 0, x_306);
if (lean_is_scalar(x_289)) {
 x_308 = lean_alloc_ctor(1, 2, 0);
} else {
 x_308 = x_289;
}
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_308, 1, x_271);
x_309 = lean_apply_1(x_3, x_308);
return x_309;
}
else
{
lean_object* x_310; uint8_t x_311; 
lean_dec(x_277);
x_310 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_311 = lean_string_dec_eq(x_274, x_310);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
lean_dec(x_2);
if (lean_is_scalar(x_285)) {
 x_312 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_312 = x_285;
}
lean_ctor_set(x_312, 0, x_270);
lean_ctor_set(x_312, 1, x_286);
lean_ctor_set_usize(x_312, 2, x_284);
if (lean_is_scalar(x_282)) {
 x_313 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_313 = x_282;
}
lean_ctor_set(x_313, 0, x_312);
lean_ctor_set(x_313, 1, x_290);
lean_ctor_set_usize(x_313, 2, x_281);
if (lean_is_scalar(x_279)) {
 x_314 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_314 = x_279;
}
lean_ctor_set(x_314, 0, x_313);
lean_ctor_set(x_314, 1, x_300);
lean_ctor_set_usize(x_314, 2, x_278);
if (lean_is_scalar(x_276)) {
 x_315 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_315 = x_276;
}
lean_ctor_set(x_315, 0, x_314);
lean_ctor_set(x_315, 1, x_274);
lean_ctor_set_usize(x_315, 2, x_275);
if (lean_is_scalar(x_273)) {
 x_316 = lean_alloc_ctor(1, 2, 0);
} else {
 x_316 = x_273;
}
lean_ctor_set(x_316, 0, x_315);
lean_ctor_set(x_316, 1, x_272);
x_317 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_317, 0, x_316);
if (lean_is_scalar(x_289)) {
 x_318 = lean_alloc_ctor(1, 2, 0);
} else {
 x_318 = x_289;
}
lean_ctor_set(x_318, 0, x_317);
lean_ctor_set(x_318, 1, x_271);
x_319 = lean_apply_1(x_3, x_318);
return x_319;
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; 
lean_dec(x_289);
lean_dec(x_285);
lean_dec(x_282);
lean_dec(x_279);
lean_dec(x_276);
lean_dec(x_274);
lean_dec(x_273);
lean_dec(x_3);
x_320 = lean_box_usize(x_284);
x_321 = lean_box_usize(x_281);
x_322 = lean_box_usize(x_278);
x_323 = lean_box_usize(x_275);
x_324 = lean_apply_6(x_2, x_272, x_271, x_320, x_321, x_322, x_323);
return x_324;
}
}
}
}
}
else
{
lean_object* x_325; 
lean_dec(x_270);
lean_dec(x_269);
lean_dec(x_268);
lean_dec(x_267);
lean_dec(x_266);
lean_dec(x_265);
lean_dec(x_2);
x_325 = lean_apply_1(x_3, x_1);
return x_325;
}
}
else
{
lean_object* x_326; 
lean_dec(x_269);
lean_dec(x_268);
lean_dec(x_267);
lean_dec(x_266);
lean_dec(x_265);
lean_dec(x_2);
x_326 = lean_apply_1(x_3, x_1);
return x_326;
}
}
else
{
lean_object* x_327; 
lean_dec(x_268);
lean_dec(x_267);
lean_dec(x_266);
lean_dec(x_265);
lean_dec(x_2);
x_327 = lean_apply_1(x_3, x_1);
return x_327;
}
}
else
{
lean_object* x_328; 
lean_dec(x_267);
lean_dec(x_266);
lean_dec(x_265);
lean_dec(x_2);
x_328 = lean_apply_1(x_3, x_1);
return x_328;
}
}
else
{
lean_object* x_329; 
lean_dec(x_266);
lean_dec(x_265);
lean_dec(x_2);
x_329 = lean_apply_1(x_3, x_1);
return x_329;
}
}
else
{
lean_object* x_330; 
lean_dec(x_265);
lean_dec(x_2);
x_330 = lean_apply_1(x_3, x_1);
return x_330;
}
}
}
else
{
lean_object* x_331; 
lean_dec(x_5);
lean_dec(x_2);
x_331 = lean_apply_1(x_3, x_1);
return x_331;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
x_16 = 0;
x_17 = lean_box(x_16);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
x_19 = 0;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_13, 0);
lean_inc(x_22);
lean_dec(x_13);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
if (lean_obj_tag(x_23) == 1)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
if (lean_obj_tag(x_24) == 1)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 1)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 1)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 1)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_11);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_30 = lean_ctor_get(x_11, 0);
lean_dec(x_30);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_dec(x_24);
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_dec(x_25);
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_dec(x_26);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_dec(x_27);
x_35 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_36 = lean_string_dec_eq(x_34, x_35);
lean_dec(x_34);
if (x_36 == 0)
{
uint8_t x_37; lean_object* x_38; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
x_37 = 0;
x_38 = lean_box(x_37);
lean_ctor_set(x_11, 0, x_38);
return x_11;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_40 = lean_string_dec_eq(x_33, x_39);
lean_dec(x_33);
if (x_40 == 0)
{
uint8_t x_41; lean_object* x_42; 
lean_dec(x_32);
lean_dec(x_31);
x_41 = 0;
x_42 = lean_box(x_41);
lean_ctor_set(x_11, 0, x_42);
return x_11;
}
else
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_44 = lean_string_dec_eq(x_32, x_43);
lean_dec(x_32);
if (x_44 == 0)
{
uint8_t x_45; lean_object* x_46; 
lean_dec(x_31);
x_45 = 0;
x_46 = lean_box(x_45);
lean_ctor_set(x_11, 0, x_46);
return x_11;
}
else
{
lean_object* x_47; uint8_t x_48; 
x_47 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_48 = lean_string_dec_eq(x_31, x_47);
lean_dec(x_31);
if (x_48 == 0)
{
uint8_t x_49; lean_object* x_50; 
x_49 = 0;
x_50 = lean_box(x_49);
lean_ctor_set(x_11, 0, x_50);
return x_11;
}
else
{
uint8_t x_51; lean_object* x_52; 
x_51 = 1;
x_52 = lean_box(x_51);
lean_ctor_set(x_11, 0, x_52);
return x_11;
}
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_53 = lean_ctor_get(x_11, 1);
lean_inc(x_53);
lean_dec(x_11);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_dec(x_24);
x_55 = lean_ctor_get(x_25, 1);
lean_inc(x_55);
lean_dec(x_25);
x_56 = lean_ctor_get(x_26, 1);
lean_inc(x_56);
lean_dec(x_26);
x_57 = lean_ctor_get(x_27, 1);
lean_inc(x_57);
lean_dec(x_27);
x_58 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_59 = lean_string_dec_eq(x_57, x_58);
lean_dec(x_57);
if (x_59 == 0)
{
uint8_t x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
x_60 = 0;
x_61 = lean_box(x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_53);
return x_62;
}
else
{
lean_object* x_63; uint8_t x_64; 
x_63 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_64 = lean_string_dec_eq(x_56, x_63);
lean_dec(x_56);
if (x_64 == 0)
{
uint8_t x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_55);
lean_dec(x_54);
x_65 = 0;
x_66 = lean_box(x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_53);
return x_67;
}
else
{
lean_object* x_68; uint8_t x_69; 
x_68 = l_myMacro____x40_Init_Notation___hyg_2191____closed__1;
x_69 = lean_string_dec_eq(x_55, x_68);
lean_dec(x_55);
if (x_69 == 0)
{
uint8_t x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_54);
x_70 = 0;
x_71 = lean_box(x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_53);
return x_72;
}
else
{
lean_object* x_73; uint8_t x_74; 
x_73 = l_myMacro____x40_Init_Notation___hyg_12938____closed__12;
x_74 = lean_string_dec_eq(x_54, x_73);
lean_dec(x_54);
if (x_74 == 0)
{
uint8_t x_75; lean_object* x_76; lean_object* x_77; 
x_75 = 0;
x_76 = lean_box(x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_53);
return x_77;
}
else
{
uint8_t x_78; lean_object* x_79; lean_object* x_80; 
x_78 = 1;
x_79 = lean_box(x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_53);
return x_80;
}
}
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
x_81 = !lean_is_exclusive(x_11);
if (x_81 == 0)
{
lean_object* x_82; uint8_t x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_11, 0);
lean_dec(x_82);
x_83 = 0;
x_84 = lean_box(x_83);
lean_ctor_set(x_11, 0, x_84);
return x_11;
}
else
{
lean_object* x_85; uint8_t x_86; lean_object* x_87; lean_object* x_88; 
x_85 = lean_ctor_get(x_11, 1);
lean_inc(x_85);
lean_dec(x_11);
x_86 = 0;
x_87 = lean_box(x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_85);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
x_89 = !lean_is_exclusive(x_11);
if (x_89 == 0)
{
lean_object* x_90; uint8_t x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_11, 0);
lean_dec(x_90);
x_91 = 0;
x_92 = lean_box(x_91);
lean_ctor_set(x_11, 0, x_92);
return x_11;
}
else
{
lean_object* x_93; uint8_t x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_11, 1);
lean_inc(x_93);
lean_dec(x_11);
x_94 = 0;
x_95 = lean_box(x_94);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_93);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
x_97 = !lean_is_exclusive(x_11);
if (x_97 == 0)
{
lean_object* x_98; uint8_t x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_11, 0);
lean_dec(x_98);
x_99 = 0;
x_100 = lean_box(x_99);
lean_ctor_set(x_11, 0, x_100);
return x_11;
}
else
{
lean_object* x_101; uint8_t x_102; lean_object* x_103; lean_object* x_104; 
x_101 = lean_ctor_get(x_11, 1);
lean_inc(x_101);
lean_dec(x_11);
x_102 = 0;
x_103 = lean_box(x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_101);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_25);
lean_dec(x_24);
x_105 = !lean_is_exclusive(x_11);
if (x_105 == 0)
{
lean_object* x_106; uint8_t x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_11, 0);
lean_dec(x_106);
x_107 = 0;
x_108 = lean_box(x_107);
lean_ctor_set(x_11, 0, x_108);
return x_11;
}
else
{
lean_object* x_109; uint8_t x_110; lean_object* x_111; lean_object* x_112; 
x_109 = lean_ctor_get(x_11, 1);
lean_inc(x_109);
lean_dec(x_11);
x_110 = 0;
x_111 = lean_box(x_110);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_109);
return x_112;
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_24);
x_113 = !lean_is_exclusive(x_11);
if (x_113 == 0)
{
lean_object* x_114; uint8_t x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_11, 0);
lean_dec(x_114);
x_115 = 0;
x_116 = lean_box(x_115);
lean_ctor_set(x_11, 0, x_116);
return x_11;
}
else
{
lean_object* x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; 
x_117 = lean_ctor_get(x_11, 1);
lean_inc(x_117);
lean_dec(x_11);
x_118 = 0;
x_119 = lean_box(x_118);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_117);
return x_120;
}
}
}
else
{
uint8_t x_121; 
lean_dec(x_23);
x_121 = !lean_is_exclusive(x_11);
if (x_121 == 0)
{
lean_object* x_122; uint8_t x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_11, 0);
lean_dec(x_122);
x_123 = 0;
x_124 = lean_box(x_123);
lean_ctor_set(x_11, 0, x_124);
return x_11;
}
else
{
lean_object* x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; 
x_125 = lean_ctor_get(x_11, 1);
lean_inc(x_125);
lean_dec(x_11);
x_126 = 0;
x_127 = lean_box(x_126);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_125);
return x_128;
}
}
}
else
{
uint8_t x_129; 
lean_dec(x_22);
x_129 = !lean_is_exclusive(x_11);
if (x_129 == 0)
{
lean_object* x_130; uint8_t x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_11, 0);
lean_dec(x_130);
x_131 = 0;
x_132 = lean_box(x_131);
lean_ctor_set(x_11, 0, x_132);
return x_11;
}
else
{
lean_object* x_133; uint8_t x_134; lean_object* x_135; lean_object* x_136; 
x_133 = lean_ctor_get(x_11, 1);
lean_inc(x_133);
lean_dec(x_11);
x_134 = 0;
x_135 = lean_box(x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_133);
return x_136;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processInstImplicitArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_2, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get_uint8(x_13, sizeof(void*)*8);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = 1;
x_21 = lean_box(0);
lean_inc(x_5);
x_22 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_19, x_20, x_21, x_5, x_6, x_7, x_8, x_18);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Expr_mvarId_x21(x_23);
x_26 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addInstMVar(x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_dec(x_12);
x_32 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_isNextArgHole(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
x_38 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getArgExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = 1;
x_43 = lean_box(0);
lean_inc(x_5);
x_44 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_41, x_42, x_43, x_5, x_6, x_7, x_8, x_40);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_st_ref_get(x_8, x_46);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_st_ref_take(x_2, x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = !lean_is_exclusive(x_50);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_53 = lean_ctor_get(x_50, 2);
x_54 = l_List_tail_x21___rarg(x_53);
lean_dec(x_53);
lean_ctor_set(x_50, 2, x_54);
x_55 = lean_st_ref_set(x_2, x_50, x_51);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l_Lean_Expr_mvarId_x21(x_45);
x_58 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addInstMVar(x_57, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_56);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_45, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_59);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_61);
return x_62;
}
else
{
uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_63 = lean_ctor_get_uint8(x_50, sizeof(void*)*8);
x_64 = lean_ctor_get(x_50, 0);
x_65 = lean_ctor_get(x_50, 1);
x_66 = lean_ctor_get(x_50, 2);
x_67 = lean_ctor_get(x_50, 3);
x_68 = lean_ctor_get_uint8(x_50, sizeof(void*)*8 + 1);
x_69 = lean_ctor_get(x_50, 4);
x_70 = lean_ctor_get(x_50, 5);
x_71 = lean_ctor_get(x_50, 6);
x_72 = lean_ctor_get(x_50, 7);
x_73 = lean_ctor_get_uint8(x_50, sizeof(void*)*8 + 2);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_50);
x_74 = l_List_tail_x21___rarg(x_66);
lean_dec(x_66);
x_75 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_75, 0, x_64);
lean_ctor_set(x_75, 1, x_65);
lean_ctor_set(x_75, 2, x_74);
lean_ctor_set(x_75, 3, x_67);
lean_ctor_set(x_75, 4, x_69);
lean_ctor_set(x_75, 5, x_70);
lean_ctor_set(x_75, 6, x_71);
lean_ctor_set(x_75, 7, x_72);
lean_ctor_set_uint8(x_75, sizeof(void*)*8, x_63);
lean_ctor_set_uint8(x_75, sizeof(void*)*8 + 1, x_68);
lean_ctor_set_uint8(x_75, sizeof(void*)*8 + 2, x_73);
x_76 = lean_st_ref_set(x_2, x_75, x_51);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_78 = l_Lean_Expr_mvarId_x21(x_45);
x_79 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addInstMVar(x_78, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_77);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_addNewArg(x_45, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_80);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_83 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_82);
return x_83;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasArgsToProcess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
x_15 = l_List_isEmpty___rarg(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; 
lean_dec(x_13);
x_16 = 1;
x_17 = lean_box(x_16);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_13, 3);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_List_isEmpty___rarg(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; 
x_20 = 1;
x_21 = lean_box(x_20);
lean_ctor_set(x_11, 0, x_21);
return x_11;
}
else
{
uint8_t x_22; lean_object* x_23; 
x_22 = 0;
x_23 = lean_box(x_22);
lean_ctor_set(x_11, 0, x_23);
return x_11;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_26 = lean_ctor_get(x_24, 2);
lean_inc(x_26);
x_27 = l_List_isEmpty___rarg(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_24);
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
return x_30;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_24, 3);
lean_inc(x_31);
lean_dec(x_24);
x_32 = l_List_isEmpty___rarg(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_33 = 1;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_25);
return x_35;
}
else
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_36 = 0;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_25);
return x_38;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasArgsToProcess___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasArgsToProcess(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_main_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(x_1);
switch (lean_obj_tag(x_5)) {
case 1:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 3:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(x_1);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_main_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_ElabAppArgs_main_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_main_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_Term_ElabAppArgs_main_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Term_ElabAppArgs_main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_ElabAppArgs_main), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_ElabAppArgs_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_normalizeFunType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Expr_isForall(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_14);
x_17 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_hasArgsToProcess(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_20);
lean_dec(x_3);
lean_dec(x_1);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_23 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_8 = x_24;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_23);
if (x_26 == 0)
{
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 0);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_23);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_30 = l_Lean_Expr_bindingName_x21(x_14);
x_31 = l_Lean_Expr_bindingInfo_x21(x_14);
lean_dec(x_14);
x_32 = lean_st_ref_get(x_7, x_15);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_st_ref_get(x_1, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
lean_inc(x_30);
x_37 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_getForallBody___lambda__1___boxed), 2, 1);
lean_closure_set(x_37, 0, x_30);
x_38 = lean_ctor_get(x_35, 3);
lean_inc(x_38);
lean_dec(x_35);
x_39 = l_List_find_x3f___rarg(x_37, x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; 
lean_dec(x_30);
x_40 = lean_box(x_31);
switch (lean_obj_tag(x_40)) {
case 1:
{
lean_object* x_41; lean_object* x_42; 
x_41 = l_Lean_Elab_Term_ElabAppArgs_main___closed__1;
x_42 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processImplicitArg(x_41, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_36);
return x_42;
}
case 3:
{
lean_object* x_43; lean_object* x_44; 
x_43 = l_Lean_Elab_Term_ElabAppArgs_main___closed__1;
x_44 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processInstImplicitArg(x_43, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_36);
return x_44;
}
default: 
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_40);
x_45 = l_Lean_Elab_Term_ElabAppArgs_main___closed__1;
x_46 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg(x_45, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_36);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_39, 0);
lean_inc(x_47);
lean_dec(x_39);
x_48 = lean_ctor_get(x_47, 2);
lean_inc(x_48);
lean_dec(x_47);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_48);
x_49 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType(x_48, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_36);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = l_Lean_Elab_Term_ElabAppArgs_eraseNamedArg(x_30, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
lean_dec(x_30);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_53 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_elabAndAddNewArg(x_48, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_8 = x_54;
goto _start;
}
else
{
uint8_t x_56; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_53);
if (x_56 == 0)
{
return x_53;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_53, 0);
x_58 = lean_ctor_get(x_53, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_53);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_48);
lean_dec(x_30);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_49);
if (x_60 == 0)
{
return x_49;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_49, 0);
x_62 = lean_ctor_get(x_49, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_49);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_13);
if (x_64 == 0)
{
return x_13;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_13, 0);
x_66 = lean_ctor_get(x_13, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_13);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Expr_getAppFn(x_1);
x_10 = l_Lean_Expr_constName_x3f(x_9);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 1;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_st_ref_get(x_7, x_8);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Lean_Elab_Term_elabWithoutExpectedTypeAttr;
x_20 = l_Lean_TagAttribute_hasTag(x_19, x_18, x_14);
lean_dec(x_14);
lean_dec(x_18);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; 
x_21 = 1;
x_22 = lean_box(x_21);
lean_ctor_set(x_15, 0, x_22);
return x_15;
}
else
{
uint8_t x_23; lean_object* x_24; 
x_23 = 0;
x_24 = lean_box(x_23);
lean_ctor_set(x_15, 0, x_24);
return x_15;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Elab_Term_elabWithoutExpectedTypeAttr;
x_29 = l_Lean_TagAttribute_hasTag(x_28, x_27, x_14);
lean_dec(x_14);
lean_dec(x_27);
if (x_29 == 0)
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_30 = 1;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_26);
return x_32;
}
else
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_33 = 0;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_26);
return x_35;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabAppArgs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_propagateExpectedTypeFor(x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_to_list(lean_box(0), x_2);
x_20 = lean_array_to_list(lean_box(0), x_3);
x_21 = l_Array_empty___closed__1;
x_22 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_5);
lean_ctor_set(x_22, 2, x_19);
lean_ctor_set(x_22, 3, x_20);
lean_ctor_set(x_22, 4, x_7);
lean_ctor_set(x_22, 5, x_21);
lean_ctor_set(x_22, 6, x_21);
lean_ctor_set(x_22, 7, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*8, x_4);
lean_ctor_set_uint8(x_22, sizeof(void*)*8 + 1, x_6);
x_23 = lean_unbox(x_17);
lean_dec(x_17);
lean_ctor_set_uint8(x_22, sizeof(void*)*8 + 2, x_23);
x_24 = lean_st_ref_get(x_14, x_18);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_st_mk_ref(x_22, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_14);
lean_inc(x_27);
x_29 = l_Lean_Elab_Term_ElabAppArgs_main(x_27, x_9, x_10, x_11, x_12, x_13, x_14, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_st_ref_get(x_14, x_31);
lean_dec(x_14);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_st_ref_get(x_27, x_33);
lean_dec(x_27);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_30);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_27);
lean_dec(x_14);
x_39 = !lean_is_exclusive(x_29);
if (x_39 == 0)
{
return x_29;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_29, 0);
x_41 = lean_ctor_get(x_29, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_29);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_elabAppArgs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("args");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabAppArgs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__1;
x_2 = l_Lean_Elab_Term_elabAppArgs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabAppArgs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("explicit: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabAppArgs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabAppArgs___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabAppArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_1);
x_14 = l_Lean_Meta_inferType(x_1, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_17 = l_Lean_Meta_instantiateMVars(x_15, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_42; lean_object* x_43; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_62 = lean_st_ref_get(x_12, x_19);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_63, 3);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_ctor_get_uint8(x_64, sizeof(void*)*1);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_62, 1);
lean_inc(x_66);
lean_dec(x_62);
x_67 = 0;
x_42 = x_67;
x_43 = x_66;
goto block_61;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_68 = lean_ctor_get(x_62, 1);
lean_inc(x_68);
lean_dec(x_62);
x_69 = l_Lean_Elab_Term_elabAppArgs___closed__2;
x_70 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_69, x_7, x_8, x_9, x_10, x_11, x_12, x_68);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_unbox(x_71);
lean_dec(x_71);
x_42 = x_73;
x_43 = x_72;
goto block_61;
}
block_41:
{
uint8_t x_21; 
x_21 = l_Array_isEmpty___rarg(x_2);
if (x_21 == 0)
{
lean_object* x_22; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_18);
x_22 = l_Lean_Elab_Term_tryPostponeIfMVar(x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_elabAppArgs___lambda__1(x_1, x_3, x_2, x_5, x_18, x_6, x_4, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_24);
lean_dec(x_23);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_22);
if (x_26 == 0)
{
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_22, 0);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_22);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
x_30 = l_Array_isEmpty___rarg(x_3);
if (x_30 == 0)
{
lean_object* x_31; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_18);
x_31 = l_Lean_Elab_Term_tryPostponeIfMVar(x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_20);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_elabAppArgs___lambda__1(x_1, x_3, x_2, x_5, x_18, x_6, x_4, x_32, x_7, x_8, x_9, x_10, x_11, x_12, x_33);
lean_dec(x_32);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_31, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_31);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_box(0);
x_40 = l_Lean_Elab_Term_elabAppArgs___lambda__1(x_1, x_3, x_2, x_5, x_18, x_6, x_4, x_39, x_7, x_8, x_9, x_10, x_11, x_12, x_20);
return x_40;
}
}
}
block_61:
{
if (x_42 == 0)
{
x_20 = x_43;
goto block_41;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_44 = l_Std_fmt___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__2(x_5);
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = l_Lean_Elab_Term_elabAppArgs___closed__4;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = l_Lean_PrettyPrinter_Parenthesizer_maybeParenthesize___closed__14;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
lean_inc(x_1);
x_50 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_50, 0, x_1);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
lean_inc(x_18);
x_54 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_54, 0, x_18);
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_KernelException_toMessageData___closed__15;
x_57 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_Elab_Term_elabAppArgs___closed__2;
x_59 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_58, x_57, x_7, x_8, x_9, x_10, x_11, x_12, x_43);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_20 = x_60;
goto block_41;
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_17);
if (x_74 == 0)
{
return x_17;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_17, 0);
x_76 = lean_ctor_get(x_17, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_17);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_14);
if (x_78 == 0)
{
return x_14;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_14, 0);
x_80 = lean_ctor_get(x_14, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_14);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabAppArgs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_4);
lean_dec(x_4);
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = l_Lean_Elab_Term_elabAppArgs___lambda__1(x_1, x_2, x_3, x_16, x_5, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
return x_18;
}
}
lean_object* l_Lean_Elab_Term_elabAppArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = lean_unbox(x_6);
lean_dec(x_6);
x_16 = l_Lean_Elab_Term_elabAppArgs(x_1, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = l_Lean_KernelException_toMessageData___closed__15;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_indentExpr(x_1);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_indentExpr(x_2);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_11);
x_21 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___spec__1___rarg(x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_21;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_6 < x_5;
if (x_8 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_7);
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_uget(x_4, x_6);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(x_1, x_9, x_2);
if (lean_obj_tag(x_10) == 0)
{
size_t x_11; size_t x_12; 
x_11 = 1;
x_12 = x_6 + x_11;
{
size_t _tmp_5 = x_12;
lean_object* _tmp_6 = x_3;
x_6 = _tmp_5;
x_7 = _tmp_6;
}
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = l_Lean_Name_append(x_2, x_3);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_environment_find(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_6 = l_Lean_mkPrivateName(x_1, x_4);
lean_inc(x_6);
lean_inc(x_1);
x_7 = lean_environment_find(x_1, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
lean_dec(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Lean_isStructureLike(x_1, x_2);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_1);
x_10 = l_Lean_getParentStructures(x_1, x_2);
x_11 = lean_box(0);
x_12 = lean_array_get_size(x_10);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
x_15 = l_Array_findSomeM_x3f___rarg___closed__1;
x_16 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f___spec__1(x_1, x_3, x_15, x_10, x_13, x_14, x_15);
lean_dec(x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
if (lean_obj_tag(x_17) == 0)
{
return x_11;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_3);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_7);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_7, 0);
lean_dec(x_22);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_2);
lean_ctor_set(x_23, 1, x_6);
lean_ctor_set(x_7, 0, x_23);
return x_7;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_7);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_6);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_3);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_5);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_5, 0);
lean_dec(x_27);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_4);
lean_ctor_set(x_5, 0, x_28);
return x_5;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_5);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_4);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f___spec__1(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_3(x_6, x_1, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_6);
x_11 = lean_apply_2(x_7, x_1, x_2);
return x_11;
}
}
else
{
lean_dec(x_7);
lean_dec(x_6);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_apply_3(x_3, x_12, x_13, x_14);
return x_15;
}
case 1:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_3);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_apply_3(x_4, x_16, x_17, x_18);
return x_19;
}
default: 
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_apply_3(x_5, x_20, x_21, x_22);
return x_23;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux_match__3___rarg), 7, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid projection, structure has only ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" field(s)");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_getStructureFields(x_1, x_2);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_3, x_15);
x_17 = lean_array_get_size(x_14);
x_18 = lean_nat_dec_lt(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_19 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_17);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__2;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__4;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_4, x_5, x_24, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_inc(x_2);
x_26 = l_Lean_isStructure(x_1, x_2);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set(x_27, 1, x_16);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_13);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_array_fget(x_14, x_16);
lean_dec(x_16);
lean_dec(x_14);
lean_inc(x_2);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_2);
lean_ctor_set(x_30, 2, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_13);
return x_31;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid projection, structure expected");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_st_ref_get(x_11, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_1);
lean_inc(x_16);
x_17 = l_Lean_isStructureLike(x_16, x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_16);
lean_dec(x_1);
x_18 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__3;
x_19 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_3, x_4, x_18, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1(x_16, x_1, x_2, x_3, x_4, x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
return x_25;
}
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field notation, type is not of the form (C ...) where C is a constant");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid [..] notation, type is not of the form (C ...) where C is a constant");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid projection, index must be greater than 0");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field notation, '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__10;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a valid \"field\" because environment does not contain '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__12;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("getOp");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid [..] notation because environment does not contain '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__15;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Expr_getAppFn(x_2);
x_12 = l_Lean_Expr_constName_x3f(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_13 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__6;
x_14 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_15 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__3;
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
return x_16;
}
}
else
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
lean_dec(x_3);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2(x_17, x_18, x_1, x_2, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_18);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__9;
x_24 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
case 1:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_12, 0);
lean_inc(x_29);
lean_dec(x_12);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_dec(x_3);
x_31 = lean_st_ref_get(x_9, x_10);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_29);
lean_inc(x_35);
x_36 = l_Lean_isStructure(x_35, x_29);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_inc(x_30);
lean_inc(x_29);
x_37 = lean_name_mk_string(x_29, x_30);
x_38 = lean_ctor_get(x_8, 4);
x_39 = lean_box(0);
lean_inc(x_37);
x_40 = l_Lean_Name_replacePrefix(x_37, x_38, x_39);
x_41 = lean_ctor_get(x_6, 1);
lean_inc(x_41);
x_42 = lean_local_ctx_find_from_user_name(x_41, x_40);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_inc(x_30);
x_43 = lean_name_mk_string(x_39, x_30);
lean_inc(x_29);
x_44 = l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(x_35, x_29, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_free_object(x_31);
lean_dec(x_29);
x_45 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_46 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_50, 0, x_37);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_KernelException_toMessageData___closed__3;
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_53, x_4, x_5, x_6, x_7, x_8, x_9, x_34);
lean_dec(x_6);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_37);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_ctor_get(x_44, 0);
lean_inc(x_55);
lean_dec(x_44);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_29);
lean_ctor_set(x_58, 2, x_57);
lean_ctor_set(x_31, 0, x_58);
return x_31;
}
}
else
{
lean_object* x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; 
x_59 = lean_ctor_get(x_42, 0);
lean_inc(x_59);
lean_dec(x_42);
x_60 = l_Lean_LocalDecl_binderInfo(x_59);
x_61 = 4;
x_62 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_206_(x_60, x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_59);
lean_inc(x_30);
x_63 = lean_name_mk_string(x_39, x_30);
lean_inc(x_29);
x_64 = l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(x_35, x_29, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_free_object(x_31);
lean_dec(x_29);
x_65 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_66 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11;
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13;
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_70, 0, x_37);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Lean_KernelException_toMessageData___closed__3;
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
x_74 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_73, x_4, x_5, x_6, x_7, x_8, x_9, x_34);
lean_dec(x_6);
return x_74;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_37);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_75 = lean_ctor_get(x_64, 0);
lean_inc(x_75);
lean_dec(x_64);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_29);
lean_ctor_set(x_78, 2, x_77);
lean_ctor_set(x_31, 0, x_78);
return x_31;
}
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_35);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_79 = l_Lean_LocalDecl_toExpr(x_59);
lean_dec(x_59);
x_80 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_80, 0, x_29);
lean_ctor_set(x_80, 1, x_37);
lean_ctor_set(x_80, 2, x_79);
lean_ctor_set(x_31, 0, x_80);
return x_31;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_box(0);
lean_inc(x_30);
x_82 = lean_name_mk_string(x_81, x_30);
lean_inc(x_29);
lean_inc(x_35);
x_83 = l_Lean_findField_x3f(x_35, x_29, x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_inc(x_30);
lean_inc(x_29);
x_84 = lean_name_mk_string(x_29, x_30);
x_85 = lean_ctor_get(x_8, 4);
lean_inc(x_84);
x_86 = l_Lean_Name_replacePrefix(x_84, x_85, x_81);
x_87 = lean_ctor_get(x_6, 1);
lean_inc(x_87);
x_88 = lean_local_ctx_find_from_user_name(x_87, x_86);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; 
lean_inc(x_29);
x_89 = l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(x_35, x_29, x_82);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_free_object(x_31);
lean_dec(x_29);
x_90 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_91 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11;
x_92 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_90);
x_93 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13;
x_94 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_95, 0, x_84);
x_96 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = l_Lean_KernelException_toMessageData___closed__3;
x_98 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_98, x_4, x_5, x_6, x_7, x_8, x_9, x_34);
lean_dec(x_6);
return x_99;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_84);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_100 = lean_ctor_get(x_89, 0);
lean_inc(x_100);
lean_dec(x_89);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_29);
lean_ctor_set(x_103, 2, x_102);
lean_ctor_set(x_31, 0, x_103);
return x_31;
}
}
else
{
lean_object* x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; 
x_104 = lean_ctor_get(x_88, 0);
lean_inc(x_104);
lean_dec(x_88);
x_105 = l_Lean_LocalDecl_binderInfo(x_104);
x_106 = 4;
x_107 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_206_(x_105, x_106);
if (x_107 == 0)
{
lean_object* x_108; 
lean_dec(x_104);
lean_inc(x_29);
x_108 = l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(x_35, x_29, x_82);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_free_object(x_31);
lean_dec(x_29);
x_109 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_110 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11;
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
x_112 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13;
x_113 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_114, 0, x_84);
x_115 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = l_Lean_KernelException_toMessageData___closed__3;
x_117 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
x_118 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_117, x_4, x_5, x_6, x_7, x_8, x_9, x_34);
lean_dec(x_6);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_84);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_119 = lean_ctor_get(x_108, 0);
lean_inc(x_119);
lean_dec(x_108);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_29);
lean_ctor_set(x_122, 2, x_121);
lean_ctor_set(x_31, 0, x_122);
return x_31;
}
}
else
{
lean_object* x_123; lean_object* x_124; 
lean_dec(x_82);
lean_dec(x_35);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_123 = l_Lean_LocalDecl_toExpr(x_104);
lean_dec(x_104);
x_124 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_124, 0, x_29);
lean_ctor_set(x_124, 1, x_84);
lean_ctor_set(x_124, 2, x_123);
lean_ctor_set(x_31, 0, x_124);
return x_31;
}
}
}
else
{
lean_object* x_125; lean_object* x_126; 
lean_dec(x_35);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_125 = lean_ctor_get(x_83, 0);
lean_inc(x_125);
lean_dec(x_83);
x_126 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_29);
lean_ctor_set(x_126, 2, x_82);
lean_ctor_set(x_31, 0, x_126);
return x_31;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_127 = lean_ctor_get(x_31, 0);
x_128 = lean_ctor_get(x_31, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_31);
x_129 = lean_ctor_get(x_127, 0);
lean_inc(x_129);
lean_dec(x_127);
lean_inc(x_29);
lean_inc(x_129);
x_130 = l_Lean_isStructure(x_129, x_29);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_inc(x_30);
lean_inc(x_29);
x_131 = lean_name_mk_string(x_29, x_30);
x_132 = lean_ctor_get(x_8, 4);
x_133 = lean_box(0);
lean_inc(x_131);
x_134 = l_Lean_Name_replacePrefix(x_131, x_132, x_133);
x_135 = lean_ctor_get(x_6, 1);
lean_inc(x_135);
x_136 = lean_local_ctx_find_from_user_name(x_135, x_134);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; lean_object* x_138; 
lean_inc(x_30);
x_137 = lean_name_mk_string(x_133, x_30);
lean_inc(x_29);
x_138 = l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(x_129, x_29, x_137);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_29);
x_139 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_140 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11;
x_141 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_139);
x_142 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13;
x_143 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_144, 0, x_131);
x_145 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
x_146 = l_Lean_KernelException_toMessageData___closed__3;
x_147 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
x_148 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_147, x_4, x_5, x_6, x_7, x_8, x_9, x_128);
lean_dec(x_6);
return x_148;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_131);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_149 = lean_ctor_get(x_138, 0);
lean_inc(x_149);
lean_dec(x_138);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_29);
lean_ctor_set(x_152, 2, x_151);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_128);
return x_153;
}
}
else
{
lean_object* x_154; uint8_t x_155; uint8_t x_156; uint8_t x_157; 
x_154 = lean_ctor_get(x_136, 0);
lean_inc(x_154);
lean_dec(x_136);
x_155 = l_Lean_LocalDecl_binderInfo(x_154);
x_156 = 4;
x_157 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_206_(x_155, x_156);
if (x_157 == 0)
{
lean_object* x_158; lean_object* x_159; 
lean_dec(x_154);
lean_inc(x_30);
x_158 = lean_name_mk_string(x_133, x_30);
lean_inc(x_29);
x_159 = l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(x_129, x_29, x_158);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_29);
x_160 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_161 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11;
x_162 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_160);
x_163 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13;
x_164 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_165, 0, x_131);
x_166 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
x_167 = l_Lean_KernelException_toMessageData___closed__3;
x_168 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
x_169 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_168, x_4, x_5, x_6, x_7, x_8, x_9, x_128);
lean_dec(x_6);
return x_169;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_131);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_170 = lean_ctor_get(x_159, 0);
lean_inc(x_170);
lean_dec(x_159);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec(x_170);
x_173 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_29);
lean_ctor_set(x_173, 2, x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_128);
return x_174;
}
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_129);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_175 = l_Lean_LocalDecl_toExpr(x_154);
lean_dec(x_154);
x_176 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_176, 0, x_29);
lean_ctor_set(x_176, 1, x_131);
lean_ctor_set(x_176, 2, x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_128);
return x_177;
}
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_box(0);
lean_inc(x_30);
x_179 = lean_name_mk_string(x_178, x_30);
lean_inc(x_29);
lean_inc(x_129);
x_180 = l_Lean_findField_x3f(x_129, x_29, x_179);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_inc(x_30);
lean_inc(x_29);
x_181 = lean_name_mk_string(x_29, x_30);
x_182 = lean_ctor_get(x_8, 4);
lean_inc(x_181);
x_183 = l_Lean_Name_replacePrefix(x_181, x_182, x_178);
x_184 = lean_ctor_get(x_6, 1);
lean_inc(x_184);
x_185 = lean_local_ctx_find_from_user_name(x_184, x_183);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; 
lean_inc(x_29);
x_186 = l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(x_129, x_29, x_179);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_29);
x_187 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_188 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11;
x_189 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_187);
x_190 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13;
x_191 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_191, 0, x_189);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_192, 0, x_181);
x_193 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
x_194 = l_Lean_KernelException_toMessageData___closed__3;
x_195 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
x_196 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_195, x_4, x_5, x_6, x_7, x_8, x_9, x_128);
lean_dec(x_6);
return x_196;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_181);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_197 = lean_ctor_get(x_186, 0);
lean_inc(x_197);
lean_dec(x_186);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_29);
lean_ctor_set(x_200, 2, x_199);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_128);
return x_201;
}
}
else
{
lean_object* x_202; uint8_t x_203; uint8_t x_204; uint8_t x_205; 
x_202 = lean_ctor_get(x_185, 0);
lean_inc(x_202);
lean_dec(x_185);
x_203 = l_Lean_LocalDecl_binderInfo(x_202);
x_204 = 4;
x_205 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_206_(x_203, x_204);
if (x_205 == 0)
{
lean_object* x_206; 
lean_dec(x_202);
lean_inc(x_29);
x_206 = l___private_Lean_Elab_App_0__Lean_Elab_Term_findMethod_x3f(x_129, x_29, x_179);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
lean_dec(x_29);
x_207 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_208 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11;
x_209 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_207);
x_210 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13;
x_211 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_212, 0, x_181);
x_213 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
x_214 = l_Lean_KernelException_toMessageData___closed__3;
x_215 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
x_216 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_215, x_4, x_5, x_6, x_7, x_8, x_9, x_128);
lean_dec(x_6);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
lean_dec(x_181);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_217 = lean_ctor_get(x_206, 0);
lean_inc(x_217);
lean_dec(x_206);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_29);
lean_ctor_set(x_220, 2, x_219);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_128);
return x_221;
}
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
lean_dec(x_179);
lean_dec(x_129);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_222 = l_Lean_LocalDecl_toExpr(x_202);
lean_dec(x_202);
x_223 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_223, 0, x_29);
lean_ctor_set(x_223, 1, x_181);
lean_ctor_set(x_223, 2, x_222);
x_224 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_128);
return x_224;
}
}
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_129);
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_225 = lean_ctor_get(x_180, 0);
lean_inc(x_225);
lean_dec(x_180);
x_226 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_29);
lean_ctor_set(x_226, 2, x_179);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_128);
return x_227;
}
}
}
}
default: 
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_228 = lean_ctor_get(x_12, 0);
lean_inc(x_228);
lean_dec(x_12);
x_229 = lean_ctor_get(x_3, 1);
lean_inc(x_229);
lean_dec(x_3);
x_230 = lean_st_ref_get(x_9, x_10);
x_231 = !lean_is_exclusive(x_230);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_232 = lean_ctor_get(x_230, 0);
x_233 = lean_ctor_get(x_230, 1);
x_234 = lean_ctor_get(x_232, 0);
lean_inc(x_234);
lean_dec(x_232);
x_235 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__14;
x_236 = lean_name_mk_string(x_228, x_235);
lean_inc(x_236);
x_237 = lean_environment_find(x_234, x_236);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_free_object(x_230);
lean_dec(x_229);
x_238 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_238, 0, x_236);
x_239 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__16;
x_240 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_238);
x_241 = l_Lean_KernelException_toMessageData___closed__3;
x_242 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_242, 0, x_240);
lean_ctor_set(x_242, 1, x_241);
x_243 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_242, x_4, x_5, x_6, x_7, x_8, x_9, x_233);
lean_dec(x_6);
return x_243;
}
else
{
lean_object* x_244; 
lean_dec(x_237);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_244 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_244, 0, x_236);
lean_ctor_set(x_244, 1, x_229);
lean_ctor_set(x_230, 0, x_244);
return x_230;
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_245 = lean_ctor_get(x_230, 0);
x_246 = lean_ctor_get(x_230, 1);
lean_inc(x_246);
lean_inc(x_245);
lean_dec(x_230);
x_247 = lean_ctor_get(x_245, 0);
lean_inc(x_247);
lean_dec(x_245);
x_248 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__14;
x_249 = lean_name_mk_string(x_228, x_248);
lean_inc(x_249);
x_250 = lean_environment_find(x_247, x_249);
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_229);
x_251 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_251, 0, x_249);
x_252 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__16;
x_253 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_251);
x_254 = l_Lean_KernelException_toMessageData___closed__3;
x_255 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_255, 0, x_253);
lean_ctor_set(x_255, 1, x_254);
x_256 = l___private_Lean_Elab_App_0__Lean_Elab_Term_throwLValError___rarg(x_1, x_2, x_255, x_4, x_5, x_6, x_7, x_8, x_9, x_246);
lean_dec(x_6);
return x_256;
}
else
{
lean_object* x_257; lean_object* x_258; 
lean_dec(x_250);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_257 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_257, 0, x_249);
lean_ctor_set(x_257, 1, x_229);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_246);
return x_258;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
return x_14;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
return x_13;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
return x_11;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 7)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; uint8_t x_18; uint8_t x_19; 
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_11, 2);
lean_inc(x_16);
x_17 = lean_ctor_get_uint64(x_11, sizeof(void*)*3);
x_18 = (uint8_t)((x_17 << 24) >> 61);
x_19 = l_Lean_BinderInfo_isExplicit(x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_free_object(x_10);
lean_dec(x_11);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_15);
x_21 = 0;
x_22 = lean_box(0);
lean_inc(x_5);
x_23 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_20, x_21, x_22, x_5, x_6, x_7, x_8, x_13);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_24);
x_26 = l_Lean_mkApp(x_1, x_24);
x_27 = lean_expr_instantiate1(x_16, x_24);
lean_dec(x_24);
lean_dec(x_16);
x_1 = x_26;
x_2 = x_27;
x_9 = x_25;
goto _start;
}
else
{
lean_object* x_29; 
x_29 = l_Lean_Expr_getOptParamDefault_x3f(x_15);
lean_dec(x_15);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; 
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_1);
lean_ctor_set(x_30, 1, x_11);
lean_ctor_set(x_10, 0, x_30);
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_free_object(x_10);
lean_dec(x_11);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_31);
x_32 = l_Lean_mkApp(x_1, x_31);
x_33 = lean_expr_instantiate1(x_16, x_31);
lean_dec(x_31);
lean_dec(x_16);
x_1 = x_32;
x_2 = x_33;
x_9 = x_13;
goto _start;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint64_t x_38; uint8_t x_39; uint8_t x_40; 
x_35 = lean_ctor_get(x_10, 1);
lean_inc(x_35);
lean_dec(x_10);
x_36 = lean_ctor_get(x_11, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_11, 2);
lean_inc(x_37);
x_38 = lean_ctor_get_uint64(x_11, sizeof(void*)*3);
x_39 = (uint8_t)((x_38 << 24) >> 61);
x_40 = l_Lean_BinderInfo_isExplicit(x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_11);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_36);
x_42 = 0;
x_43 = lean_box(0);
lean_inc(x_5);
x_44 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_41, x_42, x_43, x_5, x_6, x_7, x_8, x_35);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
lean_inc(x_45);
x_47 = l_Lean_mkApp(x_1, x_45);
x_48 = lean_expr_instantiate1(x_37, x_45);
lean_dec(x_45);
lean_dec(x_37);
x_1 = x_47;
x_2 = x_48;
x_9 = x_46;
goto _start;
}
else
{
lean_object* x_50; 
x_50 = l_Lean_Expr_getOptParamDefault_x3f(x_36);
lean_dec(x_36);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_37);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_1);
lean_ctor_set(x_51, 1, x_11);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_35);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_11);
x_53 = lean_ctor_get(x_50, 0);
lean_inc(x_53);
lean_dec(x_50);
lean_inc(x_53);
x_54 = l_Lean_mkApp(x_1, x_53);
x_55 = lean_expr_instantiate1(x_37, x_53);
lean_dec(x_53);
lean_dec(x_37);
x_1 = x_54;
x_2 = x_55;
x_9 = x_35;
goto _start;
}
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_57 = !lean_is_exclusive(x_10);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_10, 0);
lean_dec(x_58);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_1);
lean_ctor_set(x_59, 1, x_11);
lean_ctor_set(x_10, 0, x_59);
return x_10;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_10, 1);
lean_inc(x_60);
lean_dec(x_10);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_1);
lean_ctor_set(x_61, 1, x_11);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_10);
if (x_63 == 0)
{
return x_10;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_10, 0);
x_65 = lean_ctor_get(x_10, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_10);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_apply_3(x_2, x_1, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_apply_3(x_3, x_1, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
x_14 = l_Lean_Elab_logException___at___private_Lean_Elab_Term_0__Lean_Elab_Term_exceptionToSorry___spec__1(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = x_2 + x_17;
x_2 = x_18;
x_4 = x_15;
x_11 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_12 = l___private_Lean_Elab_App_0__Lean_Elab_Term_consumeImplicits(x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_17);
x_18 = l_Lean_Elab_Term_tryPostponeIfMVar(x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_17);
lean_inc(x_16);
x_20 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux(x_16, x_17, x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_ctor_set(x_13, 1, x_22);
lean_ctor_set(x_20, 0, x_13);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_20);
lean_ctor_set(x_13, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_13);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_free_object(x_13);
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_28 = l_Lean_Meta_unfoldDefinition_x3f(x_17, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
lean_dec(x_16);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_31 = lean_ctor_get(x_28, 1);
x_32 = lean_ctor_get(x_28, 0);
lean_dec(x_32);
x_33 = lean_array_get_size(x_4);
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_nat_dec_lt(x_34, x_33);
if (x_35 == 0)
{
lean_dec(x_33);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set_tag(x_28, 1);
lean_ctor_set(x_28, 0, x_26);
return x_28;
}
else
{
uint8_t x_36; 
x_36 = lean_nat_dec_le(x_33, x_33);
if (x_36 == 0)
{
lean_dec(x_33);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set_tag(x_28, 1);
lean_ctor_set(x_28, 0, x_26);
return x_28;
}
else
{
size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
lean_free_object(x_28);
x_37 = 0;
x_38 = lean_usize_of_nat(x_33);
lean_dec(x_33);
x_39 = lean_box(0);
x_40 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___spec__1(x_4, x_37, x_38, x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_31);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set_tag(x_40, 1);
lean_ctor_set(x_40, 0, x_26);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_26);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_26);
x_45 = !lean_is_exclusive(x_40);
if (x_45 == 0)
{
return x_40;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_40, 0);
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_40);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_28, 1);
lean_inc(x_49);
lean_dec(x_28);
x_50 = lean_array_get_size(x_4);
x_51 = lean_unsigned_to_nat(0u);
x_52 = lean_nat_dec_lt(x_51, x_50);
if (x_52 == 0)
{
lean_object* x_53; 
lean_dec(x_50);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_26);
lean_ctor_set(x_53, 1, x_49);
return x_53;
}
else
{
uint8_t x_54; 
x_54 = lean_nat_dec_le(x_50, x_50);
if (x_54 == 0)
{
lean_object* x_55; 
lean_dec(x_50);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_26);
lean_ctor_set(x_55, 1, x_49);
return x_55;
}
else
{
size_t x_56; size_t x_57; lean_object* x_58; lean_object* x_59; 
x_56 = 0;
x_57 = lean_usize_of_nat(x_50);
lean_dec(x_50);
x_58 = lean_box(0);
x_59 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___spec__1(x_4, x_56, x_57, x_58, x_5, x_6, x_7, x_8, x_9, x_10, x_49);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
 lean_ctor_set_tag(x_62, 1);
}
lean_ctor_set(x_62, 0, x_26);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_26);
x_63 = lean_ctor_get(x_59, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_65 = x_59;
} else {
 lean_dec_ref(x_59);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_28, 1);
lean_inc(x_67);
lean_dec(x_28);
x_68 = lean_ctor_get(x_29, 0);
lean_inc(x_68);
lean_dec(x_29);
x_69 = lean_array_push(x_4, x_26);
x_2 = x_16;
x_3 = x_68;
x_4 = x_69;
x_11 = x_67;
goto _start;
}
}
else
{
uint8_t x_71; 
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_28);
if (x_71 == 0)
{
return x_28;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_28, 0);
x_73 = lean_ctor_get(x_28, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_28);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
else
{
uint8_t x_75; 
lean_free_object(x_13);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_18);
if (x_75 == 0)
{
return x_18;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_18, 0);
x_77 = lean_ctor_get(x_18, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_18);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_13, 0);
x_80 = lean_ctor_get(x_13, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_80);
x_81 = l_Lean_Elab_Term_tryPostponeIfMVar(x_80, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_80);
lean_inc(x_79);
x_83 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux(x_79, x_80, x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_80);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_86 = x_83;
} else {
 lean_dec_ref(x_83);
 x_86 = lean_box(0);
}
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_79);
lean_ctor_set(x_87, 1, x_84);
if (lean_is_scalar(x_86)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_86;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_85);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_91 = l_Lean_Meta_unfoldDefinition_x3f(x_80, x_7, x_8, x_9, x_10, x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; 
lean_dec(x_79);
lean_dec(x_1);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
x_95 = lean_array_get_size(x_4);
x_96 = lean_unsigned_to_nat(0u);
x_97 = lean_nat_dec_lt(x_96, x_95);
if (x_97 == 0)
{
lean_object* x_98; 
lean_dec(x_95);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_94)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_94;
 lean_ctor_set_tag(x_98, 1);
}
lean_ctor_set(x_98, 0, x_89);
lean_ctor_set(x_98, 1, x_93);
return x_98;
}
else
{
uint8_t x_99; 
x_99 = lean_nat_dec_le(x_95, x_95);
if (x_99 == 0)
{
lean_object* x_100; 
lean_dec(x_95);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_94)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_94;
 lean_ctor_set_tag(x_100, 1);
}
lean_ctor_set(x_100, 0, x_89);
lean_ctor_set(x_100, 1, x_93);
return x_100;
}
else
{
size_t x_101; size_t x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_94);
x_101 = 0;
x_102 = lean_usize_of_nat(x_95);
lean_dec(x_95);
x_103 = lean_box(0);
x_104 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___spec__1(x_4, x_101, x_102, x_103, x_5, x_6, x_7, x_8, x_9, x_10, x_93);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_106 = x_104;
} else {
 lean_dec_ref(x_104);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(1, 2, 0);
} else {
 x_107 = x_106;
 lean_ctor_set_tag(x_107, 1);
}
lean_ctor_set(x_107, 0, x_89);
lean_ctor_set(x_107, 1, x_105);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_89);
x_108 = lean_ctor_get(x_104, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_104, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_110 = x_104;
} else {
 lean_dec_ref(x_104);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_91, 1);
lean_inc(x_112);
lean_dec(x_91);
x_113 = lean_ctor_get(x_92, 0);
lean_inc(x_113);
lean_dec(x_92);
x_114 = lean_array_push(x_4, x_89);
x_2 = x_79;
x_3 = x_113;
x_4 = x_114;
x_11 = x_112;
goto _start;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_89);
lean_dec(x_79);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_116 = lean_ctor_get(x_91, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_91, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_118 = x_91;
} else {
 lean_dec_ref(x_91);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_120 = lean_ctor_get(x_81, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_81, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_122 = x_81;
} else {
 lean_dec_ref(x_81);
 x_122 = lean_box(0);
}
if (lean_is_scalar(x_122)) {
 x_123 = lean_alloc_ctor(1, 2, 0);
} else {
 x_123 = x_122;
}
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_121);
return x_123;
}
}
}
else
{
uint8_t x_124; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_124 = !lean_is_exclusive(x_12);
if (x_124 == 0)
{
return x_12;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_12, 0);
x_126 = lean_ctor_get(x_12, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_12);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLVal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Meta_inferType(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Array_empty___closed__1;
x_14 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValLoop(x_2, x_1, x_11, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLVal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLVal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("self");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_box(0);
lean_inc(x_3);
x_14 = l_Lean_Elab_Term_mkConst(x_11, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_2);
x_18 = lean_box(0);
x_19 = l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2;
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_17);
x_21 = l_Lean_mkOptionalNode___closed__2;
x_22 = lean_array_push(x_21, x_20);
x_23 = lean_box(0);
x_24 = l_Array_empty___closed__1;
x_25 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_26 = l_Lean_Elab_Term_elabAppArgs(x_15, x_22, x_24, x_23, x_25, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_1 = x_12;
x_2 = x_27;
x_9 = x_28;
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_30 = !lean_is_exclusive(x_26);
if (x_30 == 0)
{
return x_26;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_26, 0);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_26);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_14);
if (x_34 == 0)
{
return x_14;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_14, 0);
x_36 = lean_ctor_get(x_14, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_14);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to access field in parent structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_getPathToBaseStructure_x3f(x_14, x_1, x_2);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__3;
x_17 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
lean_dec(x_15);
x_19 = l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg_match__3___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field notation, function '");
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has argument with the expected type");
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\nbut it cannot be used");
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_5, 1);
x_17 = lean_nat_dec_le(x_16, x_7);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_eq(x_6, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_8);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_6, x_20);
lean_dec(x_6);
x_22 = l_Lean_instInhabitedExpr;
x_23 = lean_array_get(x_22, x_2, x_7);
x_24 = l_Lean_Expr_fvarId_x21(x_23);
lean_dec(x_23);
lean_inc(x_11);
x_25 = l_Lean_Meta_getLocalDecl(x_24, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_LocalDecl_userName(x_26);
lean_dec(x_26);
x_29 = l_Lean_LocalDecl_userName(x_3);
x_30 = lean_name_eq(x_28, x_29);
lean_dec(x_29);
lean_dec(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_5, 2);
x_32 = lean_nat_add(x_7, x_31);
lean_dec(x_7);
x_33 = lean_box(0);
x_6 = x_21;
x_7 = x_32;
x_8 = x_33;
x_15 = x_27;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_21);
lean_dec(x_7);
x_35 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_35, 0, x_1);
x_36 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__2;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__4;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_indentExpr(x_4);
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__6;
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_43, x_9, x_10, x_11, x_12, x_13, x_14, x_27);
lean_dec(x_11);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
return x_44;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_25);
if (x_49 == 0)
{
return x_25;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_25, 0);
x_51 = lean_ctor_get(x_25, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_25);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_8);
lean_ctor_set(x_53, 1, x_15);
return x_53;
}
}
else
{
lean_object* x_54; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_8);
lean_ctor_set(x_54, 1, x_15);
return x_54;
}
}
}
uint8_t l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = l_Lean_LocalDecl_userName(x_1);
x_5 = lean_name_eq(x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; 
x_13 = l_Lean_LocalDecl_binderInfo(x_1);
x_14 = l_Lean_BinderInfo_isExplicit(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_4);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_3);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_4, x_19);
lean_dec(x_4);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_3);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_12);
return x_24;
}
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_unsigned_to_nat(1u);
lean_inc(x_1);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_1);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_box(0);
x_23 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1(x_2, x_3, x_4, x_5, x_21, x_1, x_19, x_22, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_21);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = l_Lean_LocalDecl_userName(x_4);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_6);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
lean_ctor_set(x_29, 2, x_27);
x_30 = lean_array_push(x_7, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_8);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_9);
lean_ctor_set(x_33, 1, x_10);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_23, 0, x_35);
return x_23;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_36 = lean_ctor_get(x_23, 1);
lean_inc(x_36);
lean_dec(x_23);
x_37 = l_Lean_LocalDecl_userName(x_4);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_6);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set(x_40, 2, x_38);
x_41 = lean_array_push(x_7, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_8);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_9);
lean_ctor_set(x_44, 1, x_10);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_36);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_48 = !lean_is_exclusive(x_23);
if (x_48 == 0)
{
return x_23;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_23, 0);
x_50 = lean_ctor_get(x_23, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_23);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, uint8_t x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
if (x_11 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_21 = lean_box(0);
x_22 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__2(x_1, x_2, x_3, x_12, x_21, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_16);
lean_dec(x_14);
return x_22;
}
else
{
lean_object* x_23; uint8_t x_24; 
lean_dec(x_3);
x_23 = lean_array_get_size(x_10);
x_24 = lean_nat_dec_le(x_12, x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__3(x_4, x_5, x_6, x_1, x_7, x_8, x_9, x_10, x_2, x_12, x_25, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
return x_26;
}
else
{
uint8_t x_27; uint8_t x_28; 
x_27 = l_Lean_LocalDecl_binderInfo(x_1);
x_28 = l_Lean_BinderInfo_isExplicit(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_box(0);
x_30 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__3(x_4, x_5, x_6, x_1, x_7, x_8, x_9, x_10, x_2, x_12, x_29, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_8);
x_32 = l_Array_insertAt___rarg(x_10, x_12, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_9);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_2);
lean_ctor_set(x_35, 1, x_12);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_20);
return x_38;
}
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, uint8_t x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
if (x_12 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_17, 2);
lean_inc(x_24);
x_25 = !lean_is_exclusive(x_22);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_26 = 2;
lean_ctor_set_uint8(x_22, 5, x_26);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_23);
lean_ctor_set(x_27, 2, x_24);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_7);
x_28 = l_Lean_Meta_whnf(x_7, x_27, x_18, x_19, x_20, x_21);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Expr_consumeMData(x_29);
lean_dec(x_29);
x_32 = l_Lean_Expr_isAppOf(x_31, x_11);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_box(0);
x_34 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_12, x_13, x_33, x_15, x_16, x_17, x_18, x_19, x_20, x_30);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
return x_34;
}
else
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_35 = 1;
x_36 = lean_box(0);
x_37 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_35, x_13, x_36, x_15, x_16, x_17, x_18, x_19, x_20, x_30);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_28);
if (x_38 == 0)
{
return x_28;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_28, 0);
x_40 = lean_ctor_get(x_28, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_28);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_42 = lean_ctor_get_uint8(x_22, 0);
x_43 = lean_ctor_get_uint8(x_22, 1);
x_44 = lean_ctor_get_uint8(x_22, 2);
x_45 = lean_ctor_get_uint8(x_22, 3);
x_46 = lean_ctor_get_uint8(x_22, 4);
x_47 = lean_ctor_get_uint8(x_22, 6);
x_48 = lean_ctor_get_uint8(x_22, 7);
x_49 = lean_ctor_get_uint8(x_22, 8);
lean_dec(x_22);
x_50 = 2;
x_51 = lean_alloc_ctor(0, 0, 9);
lean_ctor_set_uint8(x_51, 0, x_42);
lean_ctor_set_uint8(x_51, 1, x_43);
lean_ctor_set_uint8(x_51, 2, x_44);
lean_ctor_set_uint8(x_51, 3, x_45);
lean_ctor_set_uint8(x_51, 4, x_46);
lean_ctor_set_uint8(x_51, 5, x_50);
lean_ctor_set_uint8(x_51, 6, x_47);
lean_ctor_set_uint8(x_51, 7, x_48);
lean_ctor_set_uint8(x_51, 8, x_49);
x_52 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_23);
lean_ctor_set(x_52, 2, x_24);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_7);
x_53 = l_Lean_Meta_whnf(x_7, x_52, x_18, x_19, x_20, x_21);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Lean_Expr_consumeMData(x_54);
lean_dec(x_54);
x_57 = l_Lean_Expr_isAppOf(x_56, x_11);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_box(0);
x_59 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_12, x_13, x_58, x_15, x_16, x_17, x_18, x_19, x_20, x_55);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
return x_59;
}
else
{
uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_60 = 1;
x_61 = lean_box(0);
x_62 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_60, x_13, x_61, x_15, x_16, x_17, x_18, x_19, x_20, x_55);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_53, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_53, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_65 = x_53;
} else {
 lean_dec_ref(x_53);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_box(0);
x_68 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_12, x_13, x_67, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
return x_68;
}
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_11, 1);
x_23 = lean_nat_dec_le(x_22, x_13);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_eq(x_12, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_sub(x_12, x_26);
lean_dec(x_12);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_dec(x_14);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
x_32 = l_Lean_instInhabitedExpr;
x_33 = lean_array_get(x_32, x_9, x_13);
x_34 = l_Lean_Expr_fvarId_x21(x_33);
lean_dec(x_33);
lean_inc(x_17);
x_35 = l_Lean_Meta_getLocalDecl(x_34, x_17, x_18, x_19, x_20, x_21);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_36);
x_38 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__1___boxed), 2, 1);
lean_closure_set(x_38, 0, x_36);
x_39 = lean_array_get_size(x_30);
x_40 = l_Array_findIdx_x3f_loop___rarg(x_30, x_38, x_39, x_24, lean_box(0));
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_free_object(x_28);
x_41 = l_Lean_LocalDecl_type(x_36);
x_42 = l_Lean_Expr_consumeMData(x_41);
x_43 = l_Lean_Expr_isAppOf(x_42, x_1);
lean_dec(x_42);
if (x_43 == 0)
{
uint8_t x_44; lean_object* x_45; lean_object* x_46; 
x_44 = 0;
x_45 = lean_box(0);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_15);
lean_inc(x_4);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_10);
x_46 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__5(x_36, x_30, x_10, x_13, x_2, x_9, x_41, x_3, x_5, x_4, x_1, x_44, x_31, x_45, x_15, x_16, x_17, x_18, x_19, x_20, x_37);
lean_dec(x_36);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_46);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_46, 0);
lean_dec(x_49);
x_50 = lean_ctor_get(x_47, 0);
lean_inc(x_50);
lean_dec(x_47);
lean_ctor_set(x_46, 0, x_50);
return x_46;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
lean_dec(x_46);
x_52 = lean_ctor_get(x_47, 0);
lean_inc(x_52);
lean_dec(x_47);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_46, 1);
lean_inc(x_54);
lean_dec(x_46);
x_55 = lean_ctor_get(x_47, 0);
lean_inc(x_55);
lean_dec(x_47);
x_56 = lean_ctor_get(x_11, 2);
x_57 = lean_nat_add(x_13, x_56);
lean_dec(x_13);
x_12 = x_27;
x_13 = x_57;
x_14 = x_55;
x_21 = x_54;
goto _start;
}
}
else
{
uint8_t x_59; 
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = !lean_is_exclusive(x_46);
if (x_59 == 0)
{
return x_46;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_46, 0);
x_61 = lean_ctor_get(x_46, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_46);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_63 = 1;
x_64 = lean_box(0);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_15);
lean_inc(x_4);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_10);
x_65 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__5(x_36, x_30, x_10, x_13, x_2, x_9, x_41, x_3, x_5, x_4, x_1, x_63, x_31, x_64, x_15, x_16, x_17, x_18, x_19, x_20, x_37);
lean_dec(x_36);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
if (lean_obj_tag(x_66) == 0)
{
uint8_t x_67; 
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_67 = !lean_is_exclusive(x_65);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_65, 0);
lean_dec(x_68);
x_69 = lean_ctor_get(x_66, 0);
lean_inc(x_69);
lean_dec(x_66);
lean_ctor_set(x_65, 0, x_69);
return x_65;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_65, 1);
lean_inc(x_70);
lean_dec(x_65);
x_71 = lean_ctor_get(x_66, 0);
lean_inc(x_71);
lean_dec(x_66);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = lean_ctor_get(x_65, 1);
lean_inc(x_73);
lean_dec(x_65);
x_74 = lean_ctor_get(x_66, 0);
lean_inc(x_74);
lean_dec(x_66);
x_75 = lean_ctor_get(x_11, 2);
x_76 = lean_nat_add(x_13, x_75);
lean_dec(x_13);
x_12 = x_27;
x_13 = x_76;
x_14 = x_74;
x_21 = x_73;
goto _start;
}
}
else
{
uint8_t x_78; 
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_78 = !lean_is_exclusive(x_65);
if (x_78 == 0)
{
return x_65;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_65, 0);
x_80 = lean_ctor_get(x_65, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_65);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_36);
x_82 = lean_ctor_get(x_40, 0);
lean_inc(x_82);
lean_dec(x_40);
x_83 = l_Array_eraseIdx___rarg(x_30, x_82);
lean_dec(x_82);
lean_ctor_set(x_28, 0, x_83);
lean_inc(x_10);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_10);
lean_ctor_set(x_84, 1, x_28);
x_85 = lean_ctor_get(x_11, 2);
x_86 = lean_nat_add(x_13, x_85);
lean_dec(x_13);
x_12 = x_27;
x_13 = x_86;
x_14 = x_84;
x_21 = x_37;
goto _start;
}
}
else
{
uint8_t x_88; 
lean_free_object(x_28);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_88 = !lean_is_exclusive(x_35);
if (x_88 == 0)
{
return x_35;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_35, 0);
x_90 = lean_ctor_get(x_35, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_35);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_92 = lean_ctor_get(x_28, 0);
x_93 = lean_ctor_get(x_28, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_28);
x_94 = l_Lean_instInhabitedExpr;
x_95 = lean_array_get(x_94, x_9, x_13);
x_96 = l_Lean_Expr_fvarId_x21(x_95);
lean_dec(x_95);
lean_inc(x_17);
x_97 = l_Lean_Meta_getLocalDecl(x_96, x_17, x_18, x_19, x_20, x_21);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
lean_inc(x_98);
x_100 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__1___boxed), 2, 1);
lean_closure_set(x_100, 0, x_98);
x_101 = lean_array_get_size(x_92);
x_102 = l_Array_findIdx_x3f_loop___rarg(x_92, x_100, x_101, x_24, lean_box(0));
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_103 = l_Lean_LocalDecl_type(x_98);
x_104 = l_Lean_Expr_consumeMData(x_103);
x_105 = l_Lean_Expr_isAppOf(x_104, x_1);
lean_dec(x_104);
if (x_105 == 0)
{
uint8_t x_106; lean_object* x_107; lean_object* x_108; 
x_106 = 0;
x_107 = lean_box(0);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_15);
lean_inc(x_4);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_10);
x_108 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__5(x_98, x_92, x_10, x_13, x_2, x_9, x_103, x_3, x_5, x_4, x_1, x_106, x_93, x_107, x_15, x_16, x_17, x_18, x_19, x_20, x_99);
lean_dec(x_98);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_111 = x_108;
} else {
 lean_dec_ref(x_108);
 x_111 = lean_box(0);
}
x_112 = lean_ctor_get(x_109, 0);
lean_inc(x_112);
lean_dec(x_109);
if (lean_is_scalar(x_111)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_111;
}
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_110);
return x_113;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_114 = lean_ctor_get(x_108, 1);
lean_inc(x_114);
lean_dec(x_108);
x_115 = lean_ctor_get(x_109, 0);
lean_inc(x_115);
lean_dec(x_109);
x_116 = lean_ctor_get(x_11, 2);
x_117 = lean_nat_add(x_13, x_116);
lean_dec(x_13);
x_12 = x_27;
x_13 = x_117;
x_14 = x_115;
x_21 = x_114;
goto _start;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_119 = lean_ctor_get(x_108, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_108, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_121 = x_108;
} else {
 lean_dec_ref(x_108);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
}
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
uint8_t x_123; lean_object* x_124; lean_object* x_125; 
x_123 = 1;
x_124 = lean_box(0);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_15);
lean_inc(x_4);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_10);
x_125 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__5(x_98, x_92, x_10, x_13, x_2, x_9, x_103, x_3, x_5, x_4, x_1, x_123, x_93, x_124, x_15, x_16, x_17, x_18, x_19, x_20, x_99);
lean_dec(x_98);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_128 = x_125;
} else {
 lean_dec_ref(x_125);
 x_128 = lean_box(0);
}
x_129 = lean_ctor_get(x_126, 0);
lean_inc(x_129);
lean_dec(x_126);
if (lean_is_scalar(x_128)) {
 x_130 = lean_alloc_ctor(0, 2, 0);
} else {
 x_130 = x_128;
}
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_127);
return x_130;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_131 = lean_ctor_get(x_125, 1);
lean_inc(x_131);
lean_dec(x_125);
x_132 = lean_ctor_get(x_126, 0);
lean_inc(x_132);
lean_dec(x_126);
x_133 = lean_ctor_get(x_11, 2);
x_134 = lean_nat_add(x_13, x_133);
lean_dec(x_13);
x_12 = x_27;
x_13 = x_134;
x_14 = x_132;
x_21 = x_131;
goto _start;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_136 = lean_ctor_get(x_125, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_125, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_138 = x_125;
} else {
 lean_dec_ref(x_125);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_98);
x_140 = lean_ctor_get(x_102, 0);
lean_inc(x_140);
lean_dec(x_102);
x_141 = l_Array_eraseIdx___rarg(x_92, x_140);
lean_dec(x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_93);
lean_inc(x_10);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_10);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_ctor_get(x_11, 2);
x_145 = lean_nat_add(x_13, x_144);
lean_dec(x_13);
x_12 = x_27;
x_13 = x_145;
x_14 = x_143;
x_21 = x_99;
goto _start;
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_147 = lean_ctor_get(x_97, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_97, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_149 = x_97;
} else {
 lean_dec_ref(x_97);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(1, 2, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_148);
return x_150;
}
}
}
else
{
lean_object* x_151; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_14);
lean_ctor_set(x_151, 1, x_21);
return x_151;
}
}
else
{
lean_object* x_152; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_14);
lean_ctor_set(x_152, 1, x_21);
return x_152;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1), 10, 3);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(x_1, x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___rarg), 9, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' does not have argument with type (");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" ...) that can be used, it must be explicit or implicit with an unique name");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__2;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_2);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__4;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__3(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_20;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_array_get_size(x_11);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_unsigned_to_nat(1u);
lean_inc(x_18);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_box(0);
lean_inc(x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_19);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_3);
x_25 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2(x_2, x_3, x_4, x_5, x_1, x_6, x_7, x_8, x_11, x_22, x_21, x_18, x_19, x_24, x_9, x_10, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_box(0);
x_30 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1(x_3, x_2, x_29, x_9, x_10, x_13, x_14, x_15, x_16, x_28);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_25, 0);
lean_dec(x_32);
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_33);
return x_25;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_ctor_get(x_27, 0);
lean_inc(x_35);
lean_dec(x_27);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_25);
if (x_37 == 0)
{
return x_25;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_25, 0);
x_39 = lean_ctor_get(x_25, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_25);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__2___boxed), 17, 10);
lean_closure_set(x_17, 0, x_5);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_2);
lean_closure_set(x_17, 3, x_3);
lean_closure_set(x_17, 4, x_4);
lean_closure_set(x_17, 5, x_6);
lean_closure_set(x_17, 6, x_7);
lean_closure_set(x_17, 7, x_8);
lean_closure_set(x_17, 8, x_10);
lean_closure_set(x_17, 9, x_11);
x_18 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(x_9, x_17, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_instMonadQuotationTermElabM___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
x_4 = l_instMonadControlT__1___rarg(x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instMonadControlReaderT___closed__3;
x_2 = l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__1;
x_3 = l_instMonadControlT___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = l_instMonadControlReaderT___closed__3;
x_15 = l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__1;
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__2;
x_17 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_17;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
return x_19;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
uint8_t x_21; lean_object* x_22; 
x_21 = lean_unbox(x_11);
lean_dec(x_11);
x_22 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_21, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_1);
return x_22;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__5___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
uint8_t x_22; lean_object* x_23; 
x_22 = lean_unbox(x_12);
lean_dec(x_12);
x_23 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_22, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_1);
return x_23;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
lean_object* x_22; 
x_22 = l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_22;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_18;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_3(x_3, x_7, x_8, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_2, x_11, x_12);
return x_13;
}
case 2:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_3(x_4, x_14, x_15, x_16);
return x_17;
}
case 3:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_apply_3(x_5, x_18, x_19, x_20);
return x_21;
}
default: 
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_apply_2(x_6, x_22, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__2___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_3(x_4, x_1, x_6, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop_match__4___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
lean_inc(x_11);
lean_inc(x_1);
x_19 = l_Lean_Elab_Term_mkConst(x_1, x_18, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_LVal_getRef(x_2);
lean_inc(x_20);
x_23 = l_Lean_Elab_Term_addTermInfo(x_22, x_20, x_11, x_12, x_13, x_14, x_15, x_16, x_21);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_List_isEmpty___rarg(x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
lean_dec(x_9);
lean_dec(x_1);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_10);
x_27 = l_Lean_mkOptionalNode___closed__2;
x_28 = lean_array_push(x_27, x_26);
x_29 = lean_box(0);
x_30 = l_Array_empty___closed__1;
x_31 = 0;
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_32 = l_Lean_Elab_Term_elabAppArgs(x_20, x_30, x_28, x_29, x_31, x_31, x_11, x_12, x_13, x_14, x_15, x_16, x_24);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop(x_4, x_5, x_6, x_7, x_8, x_33, x_3, x_11, x_12, x_13, x_14, x_15, x_16, x_34);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_32);
if (x_36 == 0)
{
return x_32;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_32, 0);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_32);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
lean_object* x_40; 
lean_dec(x_3);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_20);
x_40 = l_Lean_Meta_inferType(x_20, x_13, x_14, x_15, x_16, x_24);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_43 = l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg(x_9, x_1, x_10, x_5, x_4, x_41, x_11, x_12, x_13, x_14, x_15, x_16, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = l_Lean_Elab_Term_elabAppArgs(x_20, x_47, x_46, x_6, x_7, x_8, x_11, x_12, x_13, x_14, x_15, x_16, x_45);
return x_48;
}
else
{
uint8_t x_49; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
x_49 = !lean_is_exclusive(x_43);
if (x_49 == 0)
{
return x_43;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_43, 0);
x_51 = lean_ctor_get(x_43, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_43);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_40);
if (x_53 == 0)
{
return x_40;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_40, 0);
x_55 = lean_ctor_get(x_40, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_40);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_19);
if (x_57 == 0)
{
return x_19;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_19, 0);
x_59 = lean_ctor_get(x_19, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_19);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("idx");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_15; 
x_15 = l_Lean_Elab_Term_elabAppArgs(x_6, x_1, x_2, x_3, x_4, x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_dec(x_7);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_16);
x_18 = l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLVal(x_6, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
switch (lean_obj_tag(x_20)) {
case 0:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_20, 2);
lean_inc(x_25);
lean_dec(x_20);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_26 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections(x_23, x_24, x_22, x_8, x_9, x_10, x_11, x_12, x_13, x_21);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_Name_append(x_23, x_25);
lean_dec(x_23);
x_30 = lean_box(0);
lean_inc(x_8);
x_31 = l_Lean_Elab_Term_mkConst(x_29, x_30, x_8, x_9, x_10, x_11, x_12, x_13, x_28);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_LVal_getRef(x_16);
lean_dec(x_16);
lean_inc(x_32);
x_35 = l_Lean_Elab_Term_addTermInfo(x_34, x_32, x_8, x_9, x_10, x_11, x_12, x_13, x_33);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_List_isEmpty___rarg(x_17);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_27);
x_39 = lean_box(0);
x_40 = l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2;
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_38);
x_42 = l_Lean_mkOptionalNode___closed__2;
x_43 = lean_array_push(x_42, x_41);
x_44 = lean_box(0);
x_45 = l_Array_empty___closed__1;
x_46 = 0;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_47 = l_Lean_Elab_Term_elabAppArgs(x_32, x_43, x_45, x_44, x_46, x_46, x_8, x_9, x_10, x_11, x_12, x_13, x_36);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_6 = x_48;
x_7 = x_17;
x_14 = x_49;
goto _start;
}
else
{
uint8_t x_51; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_47);
if (x_51 == 0)
{
return x_47;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_47, 0);
x_53 = lean_ctor_get(x_47, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_47);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_17);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_27);
x_56 = lean_box(0);
x_57 = l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2;
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_58, 2, x_55);
lean_inc(x_8);
x_59 = l_Lean_Elab_Term_addNamedArg(x_1, x_58, x_8, x_9, x_10, x_11, x_12, x_13, x_36);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = l_Lean_Elab_Term_elabAppArgs(x_32, x_60, x_2, x_3, x_4, x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_61);
return x_62;
}
else
{
uint8_t x_63; 
lean_dec(x_32);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_59);
if (x_63 == 0)
{
return x_59;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_59, 0);
x_65 = lean_ctor_get(x_59, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_59);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_27);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_31);
if (x_67 == 0)
{
return x_31;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_31, 0);
x_69 = lean_ctor_get(x_31, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_31);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_26);
if (x_71 == 0)
{
return x_26;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_26, 0);
x_73 = lean_ctor_get(x_26, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_26);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
case 1:
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_75 = lean_ctor_get(x_18, 1);
lean_inc(x_75);
lean_dec(x_18);
x_76 = lean_ctor_get(x_19, 0);
lean_inc(x_76);
lean_dec(x_19);
x_77 = lean_ctor_get(x_20, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_20, 1);
lean_inc(x_78);
lean_dec(x_20);
x_79 = l_Lean_mkProj(x_77, x_78, x_76);
x_80 = l_Lean_Elab_Term_LVal_getRef(x_16);
lean_dec(x_16);
lean_inc(x_79);
x_81 = l_Lean_Elab_Term_addTermInfo(x_80, x_79, x_8, x_9, x_10, x_11, x_12, x_13, x_75);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_6 = x_79;
x_7 = x_17;
x_14 = x_82;
goto _start;
}
case 2:
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_84 = lean_ctor_get(x_18, 1);
lean_inc(x_84);
lean_dec(x_18);
x_85 = lean_ctor_get(x_19, 0);
lean_inc(x_85);
lean_dec(x_19);
x_86 = lean_ctor_get(x_20, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_20, 1);
lean_inc(x_87);
x_88 = lean_ctor_get(x_20, 2);
lean_inc(x_88);
lean_dec(x_20);
x_89 = lean_name_eq(x_86, x_87);
if (x_89 == 0)
{
lean_object* x_90; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_90 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections(x_86, x_87, x_85, x_8, x_9, x_10, x_11, x_12, x_13, x_84);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___lambda__1(x_88, x_16, x_17, x_1, x_2, x_3, x_4, x_5, x_86, x_91, x_8, x_9, x_10, x_11, x_12, x_13, x_92);
lean_dec(x_16);
return x_93;
}
else
{
uint8_t x_94; 
lean_dec(x_88);
lean_dec(x_86);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_90);
if (x_94 == 0)
{
return x_90;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_90, 0);
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_90);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
else
{
lean_object* x_98; 
lean_dec(x_87);
x_98 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___lambda__1(x_88, x_16, x_17, x_1, x_2, x_3, x_4, x_5, x_86, x_85, x_8, x_9, x_10, x_11, x_12, x_13, x_84);
lean_dec(x_16);
return x_98;
}
}
case 3:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_99 = lean_ctor_get(x_18, 1);
lean_inc(x_99);
lean_dec(x_18);
x_100 = lean_ctor_get(x_19, 0);
lean_inc(x_100);
lean_dec(x_19);
x_101 = lean_ctor_get(x_20, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_20, 1);
lean_inc(x_102);
x_103 = lean_ctor_get(x_20, 2);
lean_inc(x_103);
lean_dec(x_20);
x_104 = l_Lean_Elab_Term_LVal_getRef(x_16);
lean_dec(x_16);
lean_inc(x_103);
x_105 = l_Lean_Elab_Term_addTermInfo(x_104, x_103, x_8, x_9, x_10, x_11, x_12, x_13, x_99);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
lean_dec(x_105);
x_107 = l_List_isEmpty___rarg(x_17);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; 
lean_dec(x_102);
lean_dec(x_101);
x_108 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_108, 0, x_100);
x_109 = l_Lean_mkOptionalNode___closed__2;
x_110 = lean_array_push(x_109, x_108);
x_111 = lean_box(0);
x_112 = l_Array_empty___closed__1;
x_113 = 0;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_114 = l_Lean_Elab_Term_elabAppArgs(x_103, x_112, x_110, x_111, x_113, x_113, x_8, x_9, x_10, x_11, x_12, x_13, x_106);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_6 = x_115;
x_7 = x_17;
x_14 = x_116;
goto _start;
}
else
{
uint8_t x_118; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_118 = !lean_is_exclusive(x_114);
if (x_118 == 0)
{
return x_114;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_114, 0);
x_120 = lean_ctor_get(x_114, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_114);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
lean_object* x_122; 
lean_dec(x_17);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_103);
x_122 = l_Lean_Meta_inferType(x_103, x_10, x_11, x_12, x_13, x_106);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_125 = l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg(x_101, x_102, x_100, x_2, x_1, x_123, x_8, x_9, x_10, x_11, x_12, x_13, x_124);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lean_ctor_get(x_126, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_126, 1);
lean_inc(x_129);
lean_dec(x_126);
x_130 = l_Lean_Elab_Term_elabAppArgs(x_103, x_129, x_128, x_3, x_4, x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_127);
return x_130;
}
else
{
uint8_t x_131; 
lean_dec(x_103);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_131 = !lean_is_exclusive(x_125);
if (x_131 == 0)
{
return x_125;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_125, 0);
x_133 = lean_ctor_get(x_125, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_125);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
else
{
uint8_t x_135; 
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_135 = !lean_is_exclusive(x_122);
if (x_135 == 0)
{
return x_122;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_122, 0);
x_137 = lean_ctor_get(x_122, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_122);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
}
default: 
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_139 = lean_ctor_get(x_18, 1);
lean_inc(x_139);
lean_dec(x_18);
x_140 = lean_ctor_get(x_19, 0);
lean_inc(x_140);
lean_dec(x_19);
x_141 = lean_ctor_get(x_20, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_20, 1);
lean_inc(x_142);
lean_dec(x_20);
x_143 = lean_box(0);
lean_inc(x_8);
x_144 = l_Lean_Elab_Term_mkConst(x_141, x_143, x_8, x_9, x_10, x_11, x_12, x_13, x_139);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_150; 
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
x_147 = l_Lean_Elab_Term_LVal_getRef(x_16);
lean_dec(x_16);
lean_inc(x_145);
x_148 = l_Lean_Elab_Term_addTermInfo(x_147, x_145, x_8, x_9, x_10, x_11, x_12, x_13, x_146);
x_149 = lean_ctor_get(x_148, 1);
lean_inc(x_149);
lean_dec(x_148);
x_150 = l_List_isEmpty___rarg(x_17);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; lean_object* x_164; 
x_151 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_151, 0, x_140);
x_152 = lean_box(0);
x_153 = l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2;
x_154 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
lean_ctor_set(x_154, 2, x_151);
x_155 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_155, 0, x_142);
x_156 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2;
x_157 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_157, 0, x_152);
lean_ctor_set(x_157, 1, x_156);
lean_ctor_set(x_157, 2, x_155);
x_158 = l_Lean_Syntax_mkApp___closed__1;
x_159 = lean_array_push(x_158, x_154);
x_160 = lean_array_push(x_159, x_157);
x_161 = lean_box(0);
x_162 = l_Array_empty___closed__1;
x_163 = 0;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_164 = l_Lean_Elab_Term_elabAppArgs(x_145, x_160, x_162, x_161, x_163, x_163, x_8, x_9, x_10, x_11, x_12, x_13, x_149);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; 
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_164, 1);
lean_inc(x_166);
lean_dec(x_164);
x_6 = x_165;
x_7 = x_17;
x_14 = x_166;
goto _start;
}
else
{
uint8_t x_168; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_168 = !lean_is_exclusive(x_164);
if (x_168 == 0)
{
return x_164;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_164, 0);
x_170 = lean_ctor_get(x_164, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_164);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set(x_171, 1, x_170);
return x_171;
}
}
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_17);
x_172 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_172, 0, x_140);
x_173 = lean_box(0);
x_174 = l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2;
x_175 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_174);
lean_ctor_set(x_175, 2, x_172);
lean_inc(x_8);
x_176 = l_Lean_Elab_Term_addNamedArg(x_1, x_175, x_8, x_9, x_10, x_11, x_12, x_13, x_149);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_179 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_179, 0, x_142);
x_180 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2;
x_181 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_181, 0, x_173);
lean_ctor_set(x_181, 1, x_180);
lean_ctor_set(x_181, 2, x_179);
lean_inc(x_8);
x_182 = l_Lean_Elab_Term_addNamedArg(x_177, x_181, x_8, x_9, x_10, x_11, x_12, x_13, x_178);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
lean_dec(x_182);
x_185 = l_Lean_Elab_Term_elabAppArgs(x_145, x_183, x_2, x_3, x_4, x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_184);
return x_185;
}
else
{
uint8_t x_186; 
lean_dec(x_145);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_186 = !lean_is_exclusive(x_182);
if (x_186 == 0)
{
return x_182;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_187 = lean_ctor_get(x_182, 0);
x_188 = lean_ctor_get(x_182, 1);
lean_inc(x_188);
lean_inc(x_187);
lean_dec(x_182);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_187);
lean_ctor_set(x_189, 1, x_188);
return x_189;
}
}
}
else
{
uint8_t x_190; 
lean_dec(x_145);
lean_dec(x_142);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_190 = !lean_is_exclusive(x_176);
if (x_190 == 0)
{
return x_176;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_176, 0);
x_192 = lean_ctor_get(x_176, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_176);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
return x_193;
}
}
}
}
else
{
uint8_t x_194; 
lean_dec(x_142);
lean_dec(x_140);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_194 = !lean_is_exclusive(x_144);
if (x_194 == 0)
{
return x_144;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_144, 0);
x_196 = lean_ctor_get(x_144, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_144);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
return x_197;
}
}
}
}
}
else
{
uint8_t x_198; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_198 = !lean_is_exclusive(x_18);
if (x_198 == 0)
{
return x_18;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_18, 0);
x_200 = lean_ctor_get(x_18, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_18);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_unbox(x_7);
lean_dec(x_7);
x_19 = lean_unbox(x_8);
lean_dec(x_8);
x_20 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_18, x_19, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_2);
return x_20;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_4);
lean_dec(x_4);
x_16 = lean_unbox(x_5);
lean_dec(x_5);
x_17 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop(x_1, x_2, x_3, x_15, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_15;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_4);
lean_dec(x_4);
x_16 = lean_unbox(x_5);
lean_dec(x_5);
x_17 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux(x_1, x_2, x_3, x_15, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_16;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of field notation with `@` modifier");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = l_List_isEmpty___rarg(x_2);
if (x_15 == 0)
{
if (x_6 == 0)
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop(x_3, x_4, x_5, x_6, x_7, x_1, x_2, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__3;
x_18 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop(x_3, x_4, x_5, x_6, x_7, x_1, x_2, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_23;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_4);
lean_dec(x_4);
x_17 = lean_unbox(x_5);
lean_dec(x_5);
x_18 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___lambda__1(x_1, x_2, x_3, x_16, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
return x_18;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_6);
lean_dec(x_6);
x_16 = lean_unbox(x_7);
lean_dec(x_7);
x_17 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_1, x_2, x_3, x_4, x_5, x_15, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Term_elabExplicitUnivs___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = 1;
x_14 = x_2 - x_13;
x_15 = lean_array_uget(x_1, x_14);
x_16 = l_Lean_Elab_Term_elabLevel(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_4);
x_2 = x_14;
x_4 = x_19;
x_11 = x_18;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_4);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
}
}
lean_object* l_Lean_Elab_Term_elabExplicitUnivs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_box(0);
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = 0;
x_16 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Term_elabExplicitUnivs___spec__1(x_1, x_14, x_15, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Term_elabExplicitUnivs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Term_elabExplicitUnivs___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_elabExplicitUnivs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabExplicitUnivs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Syntax_getId(x_4);
x_7 = l_Lean_Name_toString___closed__1;
x_8 = l_Lean_Name_toStringWithSep(x_7, x_6);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__1(x_5);
lean_ctor_set(x_1, 1, x_10);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = l_Lean_Syntax_getId(x_11);
x_14 = l_Lean_Name_toString___closed__1;
x_15 = l_Lean_Name_toStringWithSep(x_14, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__1(x_12);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_17; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_8);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_57; 
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_dec(x_9);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_21);
x_24 = l_Lean_Elab_Term_addTermInfo(x_22, x_21, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__1(x_23);
lean_inc(x_1);
x_27 = l_List_append___rarg(x_26, x_1);
x_28 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_25);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_57 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_21, x_27, x_2, x_3, x_4, x_5, x_6, x_10, x_11, x_12, x_13, x_14, x_15, x_30);
if (lean_obj_tag(x_57) == 0)
{
if (x_7 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
lean_dec(x_31);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_Lean_Elab_Term_SavedState_restore(x_29, x_10, x_11, x_12, x_13, x_14, x_15, x_62);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_63, 1);
x_66 = lean_ctor_get(x_63, 0);
lean_dec(x_66);
lean_ctor_set(x_63, 1, x_61);
lean_ctor_set(x_63, 0, x_58);
x_67 = lean_array_push(x_8, x_63);
x_8 = x_67;
x_9 = x_20;
x_16 = x_65;
goto _start;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_63, 1);
lean_inc(x_69);
lean_dec(x_63);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_58);
lean_ctor_set(x_70, 1, x_61);
x_71 = lean_array_push(x_8, x_70);
x_8 = x_71;
x_9 = x_20;
x_16 = x_69;
goto _start;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = lean_ctor_get(x_57, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_57, 1);
lean_inc(x_74);
lean_dec(x_57);
x_75 = lean_box(0);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_4);
x_76 = l_Lean_Elab_Term_ensureHasType(x_4, x_73, x_75, x_10, x_11, x_12, x_13, x_14, x_15, x_74);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
lean_dec(x_31);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_78);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Lean_Elab_Term_SavedState_restore(x_29, x_10, x_11, x_12, x_13, x_14, x_15, x_81);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_82, 1);
x_85 = lean_ctor_get(x_82, 0);
lean_dec(x_85);
lean_ctor_set(x_82, 1, x_80);
lean_ctor_set(x_82, 0, x_77);
x_86 = lean_array_push(x_8, x_82);
x_8 = x_86;
x_9 = x_20;
x_16 = x_84;
goto _start;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_82, 1);
lean_inc(x_88);
lean_dec(x_82);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_77);
lean_ctor_set(x_89, 1, x_80);
x_90 = lean_array_push(x_8, x_89);
x_8 = x_90;
x_9 = x_20;
x_16 = x_88;
goto _start;
}
}
else
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_76, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_76, 1);
lean_inc(x_93);
lean_dec(x_76);
x_32 = x_92;
x_33 = x_93;
goto block_56;
}
}
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_57, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_57, 1);
lean_inc(x_95);
lean_dec(x_57);
x_32 = x_94;
x_33 = x_95;
goto block_56;
}
block_56:
{
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_Term_SavedState_restore(x_29, x_10, x_11, x_12, x_13, x_14, x_15, x_36);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 1);
x_40 = lean_ctor_get(x_37, 0);
lean_dec(x_40);
lean_ctor_set_tag(x_37, 1);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 0, x_32);
x_41 = lean_array_push(x_8, x_37);
x_8 = x_41;
x_9 = x_20;
x_16 = x_39;
goto _start;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_32);
lean_ctor_set(x_44, 1, x_35);
x_45 = lean_array_push(x_8, x_44);
x_8 = x_45;
x_9 = x_20;
x_16 = x_43;
goto _start;
}
}
else
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = lean_ctor_get(x_32, 0);
lean_inc(x_47);
x_48 = l_Lean_Elab_postponeExceptionId;
x_49 = lean_nat_dec_eq(x_47, x_48);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; 
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_31)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_31;
 lean_ctor_set_tag(x_50, 1);
}
lean_ctor_set(x_50, 0, x_32);
lean_ctor_set(x_50, 1, x_33);
return x_50;
}
else
{
lean_object* x_51; uint8_t x_52; 
lean_dec(x_31);
x_51 = l_Lean_Elab_Term_SavedState_restore(x_29, x_10, x_11, x_12, x_13, x_14, x_15, x_33);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_51, 0);
lean_dec(x_53);
lean_ctor_set_tag(x_51, 1);
lean_ctor_set(x_51, 0, x_32);
return x_51;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_dec(x_51);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_32);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
}
}
lean_object* l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_17; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_8);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_57; 
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_dec(x_9);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_21);
x_24 = l_Lean_Elab_Term_addTermInfo(x_22, x_21, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__1(x_23);
lean_inc(x_1);
x_27 = l_List_append___rarg(x_26, x_1);
x_28 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_25);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_57 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_21, x_27, x_2, x_3, x_4, x_5, x_6, x_10, x_11, x_12, x_13, x_14, x_15, x_30);
if (lean_obj_tag(x_57) == 0)
{
if (x_7 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
lean_dec(x_31);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_Lean_Elab_Term_SavedState_restore(x_29, x_10, x_11, x_12, x_13, x_14, x_15, x_62);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_63, 1);
x_66 = lean_ctor_get(x_63, 0);
lean_dec(x_66);
lean_ctor_set(x_63, 1, x_61);
lean_ctor_set(x_63, 0, x_58);
x_67 = lean_array_push(x_8, x_63);
x_8 = x_67;
x_9 = x_20;
x_16 = x_65;
goto _start;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_63, 1);
lean_inc(x_69);
lean_dec(x_63);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_58);
lean_ctor_set(x_70, 1, x_61);
x_71 = lean_array_push(x_8, x_70);
x_8 = x_71;
x_9 = x_20;
x_16 = x_69;
goto _start;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = lean_ctor_get(x_57, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_57, 1);
lean_inc(x_74);
lean_dec(x_57);
x_75 = lean_box(0);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_4);
x_76 = l_Lean_Elab_Term_ensureHasType(x_4, x_73, x_75, x_10, x_11, x_12, x_13, x_14, x_15, x_74);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
lean_dec(x_31);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_78);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Lean_Elab_Term_SavedState_restore(x_29, x_10, x_11, x_12, x_13, x_14, x_15, x_81);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_82, 1);
x_85 = lean_ctor_get(x_82, 0);
lean_dec(x_85);
lean_ctor_set(x_82, 1, x_80);
lean_ctor_set(x_82, 0, x_77);
x_86 = lean_array_push(x_8, x_82);
x_8 = x_86;
x_9 = x_20;
x_16 = x_84;
goto _start;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_82, 1);
lean_inc(x_88);
lean_dec(x_82);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_77);
lean_ctor_set(x_89, 1, x_80);
x_90 = lean_array_push(x_8, x_89);
x_8 = x_90;
x_9 = x_20;
x_16 = x_88;
goto _start;
}
}
else
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_76, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_76, 1);
lean_inc(x_93);
lean_dec(x_76);
x_32 = x_92;
x_33 = x_93;
goto block_56;
}
}
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_57, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_57, 1);
lean_inc(x_95);
lean_dec(x_57);
x_32 = x_94;
x_33 = x_95;
goto block_56;
}
block_56:
{
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_Term_SavedState_restore(x_29, x_10, x_11, x_12, x_13, x_14, x_15, x_36);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 1);
x_40 = lean_ctor_get(x_37, 0);
lean_dec(x_40);
lean_ctor_set_tag(x_37, 1);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 0, x_32);
x_41 = lean_array_push(x_8, x_37);
x_8 = x_41;
x_9 = x_20;
x_16 = x_39;
goto _start;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_32);
lean_ctor_set(x_44, 1, x_35);
x_45 = lean_array_push(x_8, x_44);
x_8 = x_45;
x_9 = x_20;
x_16 = x_43;
goto _start;
}
}
else
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = lean_ctor_get(x_32, 0);
lean_inc(x_47);
x_48 = l_Lean_Elab_postponeExceptionId;
x_49 = lean_nat_dec_eq(x_47, x_48);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; 
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_31)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_31;
 lean_ctor_set_tag(x_50, 1);
}
lean_ctor_set(x_50, 0, x_32);
lean_ctor_set(x_50, 1, x_33);
return x_50;
}
else
{
lean_object* x_51; uint8_t x_52; 
lean_dec(x_31);
x_51 = l_Lean_Elab_Term_SavedState_restore(x_29, x_10, x_11, x_12, x_13, x_14, x_15, x_33);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_51, 0);
lean_dec(x_53);
lean_ctor_set_tag(x_51, 1);
lean_ctor_set(x_51, 0, x_32);
return x_51;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_dec(x_51);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_32);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, uint8_t x_8, uint8_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_15, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_15, 3);
lean_inc(x_21);
x_22 = lean_ctor_get(x_15, 4);
lean_inc(x_22);
x_23 = lean_ctor_get(x_15, 5);
lean_inc(x_23);
x_24 = lean_ctor_get(x_15, 6);
lean_inc(x_24);
x_25 = lean_ctor_get(x_15, 7);
lean_inc(x_25);
x_26 = l_Lean_replaceRef(x_1, x_21);
lean_dec(x_21);
x_27 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_19);
lean_ctor_set(x_27, 2, x_20);
lean_ctor_set(x_27, 3, x_26);
lean_ctor_set(x_27, 4, x_22);
lean_ctor_set(x_27, 5, x_23);
lean_ctor_set(x_27, 6, x_24);
lean_ctor_set(x_27, 7, x_25);
lean_inc(x_13);
lean_inc(x_11);
x_28 = l_Lean_Elab_Term_resolveName_x27(x_1, x_2, x_11, x_12, x_13, x_14, x_27, x_16, x_17);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_11, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_11, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_11, 2);
lean_inc(x_33);
x_34 = lean_ctor_get(x_11, 3);
lean_inc(x_34);
x_35 = lean_ctor_get(x_11, 4);
lean_inc(x_35);
x_36 = lean_ctor_get_uint8(x_11, sizeof(void*)*8);
x_37 = lean_ctor_get_uint8(x_11, sizeof(void*)*8 + 2);
x_38 = lean_ctor_get(x_11, 5);
lean_inc(x_38);
x_39 = lean_ctor_get(x_11, 6);
lean_inc(x_39);
x_40 = lean_ctor_get(x_11, 7);
lean_inc(x_40);
x_41 = lean_unsigned_to_nat(0u);
x_42 = l_List_lengthAux___rarg(x_29, x_41);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_dec_eq(x_42, x_43);
if (x_9 == 0)
{
uint8_t x_74; 
x_74 = lean_nat_dec_lt(x_43, x_42);
lean_dec(x_42);
x_45 = x_74;
goto block_73;
}
else
{
uint8_t x_75; 
lean_dec(x_42);
x_75 = 1;
x_45 = x_75;
goto block_73;
}
block_73:
{
if (x_44 == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; 
x_47 = lean_ctor_get(x_11, 7);
lean_dec(x_47);
x_48 = lean_ctor_get(x_11, 6);
lean_dec(x_48);
x_49 = lean_ctor_get(x_11, 5);
lean_dec(x_49);
x_50 = lean_ctor_get(x_11, 4);
lean_dec(x_50);
x_51 = lean_ctor_get(x_11, 3);
lean_dec(x_51);
x_52 = lean_ctor_get(x_11, 2);
lean_dec(x_52);
x_53 = lean_ctor_get(x_11, 1);
lean_dec(x_53);
x_54 = lean_ctor_get(x_11, 0);
lean_dec(x_54);
x_55 = 0;
lean_ctor_set_uint8(x_11, sizeof(void*)*8 + 1, x_55);
x_56 = l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__2(x_3, x_4, x_5, x_6, x_7, x_8, x_45, x_10, x_29, x_11, x_12, x_13, x_14, x_15, x_16, x_30);
return x_56;
}
else
{
uint8_t x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_11);
x_57 = 0;
x_58 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_58, 0, x_31);
lean_ctor_set(x_58, 1, x_32);
lean_ctor_set(x_58, 2, x_33);
lean_ctor_set(x_58, 3, x_34);
lean_ctor_set(x_58, 4, x_35);
lean_ctor_set(x_58, 5, x_38);
lean_ctor_set(x_58, 6, x_39);
lean_ctor_set(x_58, 7, x_40);
lean_ctor_set_uint8(x_58, sizeof(void*)*8, x_36);
lean_ctor_set_uint8(x_58, sizeof(void*)*8 + 1, x_57);
lean_ctor_set_uint8(x_58, sizeof(void*)*8 + 2, x_37);
x_59 = l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__2(x_3, x_4, x_5, x_6, x_7, x_8, x_45, x_10, x_29, x_58, x_12, x_13, x_14, x_15, x_16, x_30);
return x_59;
}
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_11);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_61 = lean_ctor_get(x_11, 7);
lean_dec(x_61);
x_62 = lean_ctor_get(x_11, 6);
lean_dec(x_62);
x_63 = lean_ctor_get(x_11, 5);
lean_dec(x_63);
x_64 = lean_ctor_get(x_11, 4);
lean_dec(x_64);
x_65 = lean_ctor_get(x_11, 3);
lean_dec(x_65);
x_66 = lean_ctor_get(x_11, 2);
lean_dec(x_66);
x_67 = lean_ctor_get(x_11, 1);
lean_dec(x_67);
x_68 = lean_ctor_get(x_11, 0);
lean_dec(x_68);
x_69 = l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__3(x_3, x_4, x_5, x_6, x_7, x_8, x_45, x_10, x_29, x_11, x_12, x_13, x_14, x_15, x_16, x_30);
return x_69;
}
else
{
uint8_t x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get_uint8(x_11, sizeof(void*)*8 + 1);
lean_dec(x_11);
x_71 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_71, 0, x_31);
lean_ctor_set(x_71, 1, x_32);
lean_ctor_set(x_71, 2, x_33);
lean_ctor_set(x_71, 3, x_34);
lean_ctor_set(x_71, 4, x_35);
lean_ctor_set(x_71, 5, x_38);
lean_ctor_set(x_71, 6, x_39);
lean_ctor_set(x_71, 7, x_40);
lean_ctor_set_uint8(x_71, sizeof(void*)*8, x_36);
lean_ctor_set_uint8(x_71, sizeof(void*)*8 + 1, x_70);
lean_ctor_set_uint8(x_71, sizeof(void*)*8 + 2, x_37);
x_72 = l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__3(x_3, x_4, x_5, x_6, x_7, x_8, x_45, x_10, x_29, x_71, x_12, x_13, x_14, x_15, x_16, x_30);
return x_72;
}
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_76 = !lean_is_exclusive(x_28);
if (x_76 == 0)
{
return x_28;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_28, 0);
x_78 = lean_ctor_get(x_28, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_28);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
lean_object* l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_17 = lean_unbox(x_5);
lean_dec(x_5);
x_18 = lean_unbox(x_6);
lean_dec(x_6);
x_19 = lean_unbox(x_7);
lean_dec(x_7);
x_20 = l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__2(x_1, x_2, x_3, x_4, x_17, x_18, x_19, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_20;
}
}
lean_object* l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_17 = lean_unbox(x_5);
lean_dec(x_5);
x_18 = lean_unbox(x_6);
lean_dec(x_6);
x_19 = lean_unbox(x_7);
lean_dec(x_7);
x_20 = l_List_foldlM___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___spec__3(x_1, x_2, x_3, x_4, x_17, x_18, x_19, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_20;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_18 = lean_unbox(x_7);
lean_dec(x_7);
x_19 = lean_unbox(x_8);
lean_dec(x_8);
x_20 = lean_unbox(x_9);
lean_dec(x_9);
x_21 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId(x_1, x_2, x_3, x_4, x_5, x_6, x_18, x_19, x_20, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_21;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2___rarg), 1, 0);
return x_7;
}
}
lean_object* l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Name_toString___closed__1;
x_8 = l_Lean_Name_toStringWithSep(x_7, x_5);
lean_inc(x_1);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__3(x_1, x_6);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_9);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = l_Lean_Name_toString___closed__1;
x_14 = l_Lean_Name_toStringWithSep(x_13, x_11);
lean_inc(x_1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__3(x_1, x_12);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, size_t x_8, size_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
uint8_t x_18; 
x_18 = x_8 == x_9;
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_array_uget(x_7, x_8);
x_20 = 1;
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn(x_19, x_1, x_2, x_3, x_4, x_5, x_6, x_20, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 1;
x_25 = x_8 + x_24;
x_8 = x_25;
x_10 = x_22;
x_17 = x_23;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_10);
lean_ctor_set(x_31, 1, x_17);
return x_31;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_push(x_1, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("placeholders '_' cannot be used where a function is expected");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected occurrence of named pattern");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_inc(x_1);
x_17 = l_Lean_Syntax_getKind(x_1);
x_18 = l_Lean_choiceKind;
x_19 = lean_name_eq(x_17, x_18);
lean_dec(x_17);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_Parser_Term_proj___elambda__1___closed__1;
lean_inc(x_1);
x_21 = l_Lean_Syntax_isOfKind(x_1, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = l_Lean_Parser_Term_pipeProj___elambda__1___closed__2;
lean_inc(x_1);
x_23 = l_Lean_Syntax_isOfKind(x_1, x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = l_Lean_Parser_Term_arrayRef___elambda__1___closed__2;
lean_inc(x_1);
x_25 = l_Lean_Syntax_isOfKind(x_1, x_24);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__2;
lean_inc(x_1);
x_27 = l_Lean_Syntax_isOfKind(x_1, x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = l_Lean_identKind___closed__2;
lean_inc(x_1);
x_29 = l_Lean_Syntax_isOfKind(x_1, x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
lean_inc(x_1);
x_31 = l_Lean_Syntax_isOfKind(x_1, x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = l_myMacro____x40_Init_NotationExtra___hyg_5658____closed__34;
lean_inc(x_1);
x_33 = l_Lean_Syntax_isOfKind(x_1, x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = l_myMacro____x40_Init_Notation___hyg_12938____closed__13;
lean_inc(x_1);
x_35 = l_Lean_Syntax_isOfKind(x_1, x_34);
if (x_35 == 0)
{
uint8_t x_36; uint8_t x_37; 
x_36 = l_List_isEmpty___rarg(x_2);
if (x_8 == 0)
{
uint8_t x_360; 
x_360 = 1;
x_37 = x_360;
goto block_359;
}
else
{
uint8_t x_361; 
x_361 = 0;
x_37 = x_361;
goto block_359;
}
block_359:
{
if (x_36 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_75; lean_object* x_76; lean_object* x_98; 
x_38 = lean_box(0);
x_39 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_42 = x_39;
} else {
 lean_dec_ref(x_39);
 x_42 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_98 = l_Lean_Elab_Term_elabTerm(x_1, x_38, x_37, x_10, x_11, x_12, x_13, x_14, x_15, x_41);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_101 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_99, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_100);
if (lean_obj_tag(x_101) == 0)
{
if (x_8 == 0)
{
lean_object* x_102; lean_object* x_103; 
lean_dec(x_42);
lean_dec(x_5);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_75 = x_102;
x_76 = x_103;
goto block_97;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_101, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_101, 1);
lean_inc(x_105);
lean_dec(x_101);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_106 = l_Lean_Elab_Term_ensureHasType(x_5, x_104, x_38, x_10, x_11, x_12, x_13, x_14, x_15, x_105);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; 
lean_dec(x_42);
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_75 = x_107;
x_76 = x_108;
goto block_97;
}
else
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_106, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_106, 1);
lean_inc(x_110);
lean_dec(x_106);
x_43 = x_109;
x_44 = x_110;
goto block_74;
}
}
}
else
{
lean_object* x_111; lean_object* x_112; 
lean_dec(x_5);
x_111 = lean_ctor_get(x_101, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_101, 1);
lean_inc(x_112);
lean_dec(x_101);
x_43 = x_111;
x_44 = x_112;
goto block_74;
}
}
else
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_113 = lean_ctor_get(x_98, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_98, 1);
lean_inc(x_114);
lean_dec(x_98);
x_43 = x_113;
x_44 = x_114;
goto block_74;
}
block_74:
{
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_42);
x_45 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_44);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_ctor_get(x_45, 1);
x_49 = l_Lean_Elab_Term_SavedState_restore(x_40, x_10, x_11, x_12, x_13, x_14, x_15, x_48);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_49, 1);
x_52 = lean_ctor_get(x_49, 0);
lean_dec(x_52);
lean_ctor_set_tag(x_49, 1);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 0, x_43);
x_53 = lean_array_push(x_9, x_49);
lean_ctor_set(x_45, 1, x_51);
lean_ctor_set(x_45, 0, x_53);
return x_45;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_49, 1);
lean_inc(x_54);
lean_dec(x_49);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_43);
lean_ctor_set(x_55, 1, x_47);
x_56 = lean_array_push(x_9, x_55);
lean_ctor_set(x_45, 1, x_54);
lean_ctor_set(x_45, 0, x_56);
return x_45;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_57 = lean_ctor_get(x_45, 0);
x_58 = lean_ctor_get(x_45, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_45);
x_59 = l_Lean_Elab_Term_SavedState_restore(x_40, x_10, x_11, x_12, x_13, x_14, x_15, x_58);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
 lean_ctor_set_tag(x_62, 1);
}
lean_ctor_set(x_62, 0, x_43);
lean_ctor_set(x_62, 1, x_57);
x_63 = lean_array_push(x_9, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; 
lean_dec(x_9);
x_65 = lean_ctor_get(x_43, 0);
lean_inc(x_65);
x_66 = l_Lean_Elab_postponeExceptionId;
x_67 = lean_nat_dec_eq(x_65, x_66);
lean_dec(x_65);
if (x_67 == 0)
{
lean_object* x_68; 
lean_dec(x_40);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_42)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_42;
 lean_ctor_set_tag(x_68, 1);
}
lean_ctor_set(x_68, 0, x_43);
lean_ctor_set(x_68, 1, x_44);
return x_68;
}
else
{
lean_object* x_69; uint8_t x_70; 
lean_dec(x_42);
x_69 = l_Lean_Elab_Term_SavedState_restore(x_40, x_10, x_11, x_12, x_13, x_14, x_15, x_44);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_69, 0);
lean_dec(x_71);
lean_ctor_set_tag(x_69, 1);
lean_ctor_set(x_69, 0, x_43);
return x_69;
}
else
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_69, 1);
lean_inc(x_72);
lean_dec(x_69);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_43);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
block_97:
{
lean_object* x_77; uint8_t x_78; 
x_77 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_76);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = lean_ctor_get(x_77, 1);
x_81 = l_Lean_Elab_Term_SavedState_restore(x_40, x_10, x_11, x_12, x_13, x_14, x_15, x_80);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_81, 1);
x_84 = lean_ctor_get(x_81, 0);
lean_dec(x_84);
lean_ctor_set(x_81, 1, x_79);
lean_ctor_set(x_81, 0, x_75);
x_85 = lean_array_push(x_9, x_81);
lean_ctor_set(x_77, 1, x_83);
lean_ctor_set(x_77, 0, x_85);
return x_77;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_81, 1);
lean_inc(x_86);
lean_dec(x_81);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_75);
lean_ctor_set(x_87, 1, x_79);
x_88 = lean_array_push(x_9, x_87);
lean_ctor_set(x_77, 1, x_86);
lean_ctor_set(x_77, 0, x_88);
return x_77;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_89 = lean_ctor_get(x_77, 0);
x_90 = lean_ctor_get(x_77, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_77);
x_91 = l_Lean_Elab_Term_SavedState_restore(x_40, x_10, x_11, x_12, x_13, x_14, x_15, x_90);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_75);
lean_ctor_set(x_94, 1, x_89);
x_95 = lean_array_push(x_9, x_94);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_92);
return x_96;
}
}
}
else
{
uint8_t x_115; 
x_115 = l_Array_isEmpty___rarg(x_3);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_153; lean_object* x_154; lean_object* x_176; 
x_116 = lean_box(0);
x_117 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_120 = x_117;
} else {
 lean_dec_ref(x_117);
 x_120 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_176 = l_Lean_Elab_Term_elabTerm(x_1, x_116, x_37, x_10, x_11, x_12, x_13, x_14, x_15, x_119);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_179 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_177, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_178);
if (lean_obj_tag(x_179) == 0)
{
if (x_8 == 0)
{
lean_object* x_180; lean_object* x_181; 
lean_dec(x_120);
lean_dec(x_5);
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
lean_dec(x_179);
x_153 = x_180;
x_154 = x_181;
goto block_175;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_179, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_179, 1);
lean_inc(x_183);
lean_dec(x_179);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_184 = l_Lean_Elab_Term_ensureHasType(x_5, x_182, x_116, x_10, x_11, x_12, x_13, x_14, x_15, x_183);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; lean_object* x_186; 
lean_dec(x_120);
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_153 = x_185;
x_154 = x_186;
goto block_175;
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_184, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_184, 1);
lean_inc(x_188);
lean_dec(x_184);
x_121 = x_187;
x_122 = x_188;
goto block_152;
}
}
}
else
{
lean_object* x_189; lean_object* x_190; 
lean_dec(x_5);
x_189 = lean_ctor_get(x_179, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_179, 1);
lean_inc(x_190);
lean_dec(x_179);
x_121 = x_189;
x_122 = x_190;
goto block_152;
}
}
else
{
lean_object* x_191; lean_object* x_192; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_191 = lean_ctor_get(x_176, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_176, 1);
lean_inc(x_192);
lean_dec(x_176);
x_121 = x_191;
x_122 = x_192;
goto block_152;
}
block_152:
{
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_123; uint8_t x_124; 
lean_dec(x_120);
x_123 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_122);
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_125 = lean_ctor_get(x_123, 0);
x_126 = lean_ctor_get(x_123, 1);
x_127 = l_Lean_Elab_Term_SavedState_restore(x_118, x_10, x_11, x_12, x_13, x_14, x_15, x_126);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_128 = !lean_is_exclusive(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_127, 1);
x_130 = lean_ctor_get(x_127, 0);
lean_dec(x_130);
lean_ctor_set_tag(x_127, 1);
lean_ctor_set(x_127, 1, x_125);
lean_ctor_set(x_127, 0, x_121);
x_131 = lean_array_push(x_9, x_127);
lean_ctor_set(x_123, 1, x_129);
lean_ctor_set(x_123, 0, x_131);
return x_123;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_127, 1);
lean_inc(x_132);
lean_dec(x_127);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_121);
lean_ctor_set(x_133, 1, x_125);
x_134 = lean_array_push(x_9, x_133);
lean_ctor_set(x_123, 1, x_132);
lean_ctor_set(x_123, 0, x_134);
return x_123;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_135 = lean_ctor_get(x_123, 0);
x_136 = lean_ctor_get(x_123, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_123);
x_137 = l_Lean_Elab_Term_SavedState_restore(x_118, x_10, x_11, x_12, x_13, x_14, x_15, x_136);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_138 = lean_ctor_get(x_137, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_139 = x_137;
} else {
 lean_dec_ref(x_137);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_139;
 lean_ctor_set_tag(x_140, 1);
}
lean_ctor_set(x_140, 0, x_121);
lean_ctor_set(x_140, 1, x_135);
x_141 = lean_array_push(x_9, x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_138);
return x_142;
}
}
else
{
lean_object* x_143; lean_object* x_144; uint8_t x_145; 
lean_dec(x_9);
x_143 = lean_ctor_get(x_121, 0);
lean_inc(x_143);
x_144 = l_Lean_Elab_postponeExceptionId;
x_145 = lean_nat_dec_eq(x_143, x_144);
lean_dec(x_143);
if (x_145 == 0)
{
lean_object* x_146; 
lean_dec(x_118);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_120)) {
 x_146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_146 = x_120;
 lean_ctor_set_tag(x_146, 1);
}
lean_ctor_set(x_146, 0, x_121);
lean_ctor_set(x_146, 1, x_122);
return x_146;
}
else
{
lean_object* x_147; uint8_t x_148; 
lean_dec(x_120);
x_147 = l_Lean_Elab_Term_SavedState_restore(x_118, x_10, x_11, x_12, x_13, x_14, x_15, x_122);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_148 = !lean_is_exclusive(x_147);
if (x_148 == 0)
{
lean_object* x_149; 
x_149 = lean_ctor_get(x_147, 0);
lean_dec(x_149);
lean_ctor_set_tag(x_147, 1);
lean_ctor_set(x_147, 0, x_121);
return x_147;
}
else
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_147, 1);
lean_inc(x_150);
lean_dec(x_147);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_121);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
}
}
block_175:
{
lean_object* x_155; uint8_t x_156; 
x_155 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_154);
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; uint8_t x_160; 
x_157 = lean_ctor_get(x_155, 0);
x_158 = lean_ctor_get(x_155, 1);
x_159 = l_Lean_Elab_Term_SavedState_restore(x_118, x_10, x_11, x_12, x_13, x_14, x_15, x_158);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_160 = !lean_is_exclusive(x_159);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_159, 1);
x_162 = lean_ctor_get(x_159, 0);
lean_dec(x_162);
lean_ctor_set(x_159, 1, x_157);
lean_ctor_set(x_159, 0, x_153);
x_163 = lean_array_push(x_9, x_159);
lean_ctor_set(x_155, 1, x_161);
lean_ctor_set(x_155, 0, x_163);
return x_155;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_159, 1);
lean_inc(x_164);
lean_dec(x_159);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_153);
lean_ctor_set(x_165, 1, x_157);
x_166 = lean_array_push(x_9, x_165);
lean_ctor_set(x_155, 1, x_164);
lean_ctor_set(x_155, 0, x_166);
return x_155;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_167 = lean_ctor_get(x_155, 0);
x_168 = lean_ctor_get(x_155, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_155);
x_169 = l_Lean_Elab_Term_SavedState_restore(x_118, x_10, x_11, x_12, x_13, x_14, x_15, x_168);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_170 = lean_ctor_get(x_169, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_171 = x_169;
} else {
 lean_dec_ref(x_169);
 x_171 = lean_box(0);
}
if (lean_is_scalar(x_171)) {
 x_172 = lean_alloc_ctor(0, 2, 0);
} else {
 x_172 = x_171;
}
lean_ctor_set(x_172, 0, x_153);
lean_ctor_set(x_172, 1, x_167);
x_173 = lean_array_push(x_9, x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_170);
return x_174;
}
}
}
else
{
uint8_t x_193; 
x_193 = l_Array_isEmpty___rarg(x_4);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_231; lean_object* x_232; lean_object* x_254; 
x_194 = lean_box(0);
x_195 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 lean_ctor_release(x_195, 1);
 x_198 = x_195;
} else {
 lean_dec_ref(x_195);
 x_198 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_254 = l_Lean_Elab_Term_elabTerm(x_1, x_194, x_37, x_10, x_11, x_12, x_13, x_14, x_15, x_197);
if (lean_obj_tag(x_254) == 0)
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
lean_dec(x_254);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_257 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_255, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_256);
if (lean_obj_tag(x_257) == 0)
{
if (x_8 == 0)
{
lean_object* x_258; lean_object* x_259; 
lean_dec(x_198);
lean_dec(x_5);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
x_231 = x_258;
x_232 = x_259;
goto block_253;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = lean_ctor_get(x_257, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_257, 1);
lean_inc(x_261);
lean_dec(x_257);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_262 = l_Lean_Elab_Term_ensureHasType(x_5, x_260, x_194, x_10, x_11, x_12, x_13, x_14, x_15, x_261);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; lean_object* x_264; 
lean_dec(x_198);
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_262, 1);
lean_inc(x_264);
lean_dec(x_262);
x_231 = x_263;
x_232 = x_264;
goto block_253;
}
else
{
lean_object* x_265; lean_object* x_266; 
x_265 = lean_ctor_get(x_262, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_262, 1);
lean_inc(x_266);
lean_dec(x_262);
x_199 = x_265;
x_200 = x_266;
goto block_230;
}
}
}
else
{
lean_object* x_267; lean_object* x_268; 
lean_dec(x_5);
x_267 = lean_ctor_get(x_257, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_257, 1);
lean_inc(x_268);
lean_dec(x_257);
x_199 = x_267;
x_200 = x_268;
goto block_230;
}
}
else
{
lean_object* x_269; lean_object* x_270; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_269 = lean_ctor_get(x_254, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_254, 1);
lean_inc(x_270);
lean_dec(x_254);
x_199 = x_269;
x_200 = x_270;
goto block_230;
}
block_230:
{
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_201; uint8_t x_202; 
lean_dec(x_198);
x_201 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_200);
x_202 = !lean_is_exclusive(x_201);
if (x_202 == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_203 = lean_ctor_get(x_201, 0);
x_204 = lean_ctor_get(x_201, 1);
x_205 = l_Lean_Elab_Term_SavedState_restore(x_196, x_10, x_11, x_12, x_13, x_14, x_15, x_204);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_206 = !lean_is_exclusive(x_205);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_205, 1);
x_208 = lean_ctor_get(x_205, 0);
lean_dec(x_208);
lean_ctor_set_tag(x_205, 1);
lean_ctor_set(x_205, 1, x_203);
lean_ctor_set(x_205, 0, x_199);
x_209 = lean_array_push(x_9, x_205);
lean_ctor_set(x_201, 1, x_207);
lean_ctor_set(x_201, 0, x_209);
return x_201;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_205, 1);
lean_inc(x_210);
lean_dec(x_205);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_199);
lean_ctor_set(x_211, 1, x_203);
x_212 = lean_array_push(x_9, x_211);
lean_ctor_set(x_201, 1, x_210);
lean_ctor_set(x_201, 0, x_212);
return x_201;
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_213 = lean_ctor_get(x_201, 0);
x_214 = lean_ctor_get(x_201, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_201);
x_215 = l_Lean_Elab_Term_SavedState_restore(x_196, x_10, x_11, x_12, x_13, x_14, x_15, x_214);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_216 = lean_ctor_get(x_215, 1);
lean_inc(x_216);
if (lean_is_exclusive(x_215)) {
 lean_ctor_release(x_215, 0);
 lean_ctor_release(x_215, 1);
 x_217 = x_215;
} else {
 lean_dec_ref(x_215);
 x_217 = lean_box(0);
}
if (lean_is_scalar(x_217)) {
 x_218 = lean_alloc_ctor(1, 2, 0);
} else {
 x_218 = x_217;
 lean_ctor_set_tag(x_218, 1);
}
lean_ctor_set(x_218, 0, x_199);
lean_ctor_set(x_218, 1, x_213);
x_219 = lean_array_push(x_9, x_218);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_216);
return x_220;
}
}
else
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; 
lean_dec(x_9);
x_221 = lean_ctor_get(x_199, 0);
lean_inc(x_221);
x_222 = l_Lean_Elab_postponeExceptionId;
x_223 = lean_nat_dec_eq(x_221, x_222);
lean_dec(x_221);
if (x_223 == 0)
{
lean_object* x_224; 
lean_dec(x_196);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_198)) {
 x_224 = lean_alloc_ctor(1, 2, 0);
} else {
 x_224 = x_198;
 lean_ctor_set_tag(x_224, 1);
}
lean_ctor_set(x_224, 0, x_199);
lean_ctor_set(x_224, 1, x_200);
return x_224;
}
else
{
lean_object* x_225; uint8_t x_226; 
lean_dec(x_198);
x_225 = l_Lean_Elab_Term_SavedState_restore(x_196, x_10, x_11, x_12, x_13, x_14, x_15, x_200);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_226 = !lean_is_exclusive(x_225);
if (x_226 == 0)
{
lean_object* x_227; 
x_227 = lean_ctor_get(x_225, 0);
lean_dec(x_227);
lean_ctor_set_tag(x_225, 1);
lean_ctor_set(x_225, 0, x_199);
return x_225;
}
else
{
lean_object* x_228; lean_object* x_229; 
x_228 = lean_ctor_get(x_225, 1);
lean_inc(x_228);
lean_dec(x_225);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_199);
lean_ctor_set(x_229, 1, x_228);
return x_229;
}
}
}
}
block_253:
{
lean_object* x_233; uint8_t x_234; 
x_233 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_232);
x_234 = !lean_is_exclusive(x_233);
if (x_234 == 0)
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; 
x_235 = lean_ctor_get(x_233, 0);
x_236 = lean_ctor_get(x_233, 1);
x_237 = l_Lean_Elab_Term_SavedState_restore(x_196, x_10, x_11, x_12, x_13, x_14, x_15, x_236);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_238 = !lean_is_exclusive(x_237);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_239 = lean_ctor_get(x_237, 1);
x_240 = lean_ctor_get(x_237, 0);
lean_dec(x_240);
lean_ctor_set(x_237, 1, x_235);
lean_ctor_set(x_237, 0, x_231);
x_241 = lean_array_push(x_9, x_237);
lean_ctor_set(x_233, 1, x_239);
lean_ctor_set(x_233, 0, x_241);
return x_233;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_242 = lean_ctor_get(x_237, 1);
lean_inc(x_242);
lean_dec(x_237);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_231);
lean_ctor_set(x_243, 1, x_235);
x_244 = lean_array_push(x_9, x_243);
lean_ctor_set(x_233, 1, x_242);
lean_ctor_set(x_233, 0, x_244);
return x_233;
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_245 = lean_ctor_get(x_233, 0);
x_246 = lean_ctor_get(x_233, 1);
lean_inc(x_246);
lean_inc(x_245);
lean_dec(x_233);
x_247 = l_Lean_Elab_Term_SavedState_restore(x_196, x_10, x_11, x_12, x_13, x_14, x_15, x_246);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_248 = lean_ctor_get(x_247, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_247)) {
 lean_ctor_release(x_247, 0);
 lean_ctor_release(x_247, 1);
 x_249 = x_247;
} else {
 lean_dec_ref(x_247);
 x_249 = lean_box(0);
}
if (lean_is_scalar(x_249)) {
 x_250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_250 = x_249;
}
lean_ctor_set(x_250, 0, x_231);
lean_ctor_set(x_250, 1, x_245);
x_251 = lean_array_push(x_9, x_250);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_248);
return x_252;
}
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (x_8 == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; uint8_t x_298; lean_object* x_299; 
x_271 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_272 = lean_ctor_get(x_271, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_271, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 x_274 = x_271;
} else {
 lean_dec_ref(x_271);
 x_274 = lean_box(0);
}
x_298 = 1;
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_299 = l_Lean_Elab_Term_elabTerm(x_1, x_5, x_298, x_10, x_11, x_12, x_13, x_14, x_15, x_273);
if (lean_obj_tag(x_299) == 0)
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; uint8_t x_306; 
lean_dec(x_274);
x_300 = lean_ctor_get(x_299, 0);
lean_inc(x_300);
x_301 = lean_ctor_get(x_299, 1);
lean_inc(x_301);
lean_dec(x_299);
x_302 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_301);
x_303 = lean_ctor_get(x_302, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_302, 1);
lean_inc(x_304);
lean_dec(x_302);
x_305 = l_Lean_Elab_Term_SavedState_restore(x_272, x_10, x_11, x_12, x_13, x_14, x_15, x_304);
x_306 = !lean_is_exclusive(x_305);
if (x_306 == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_307 = lean_ctor_get(x_305, 1);
x_308 = lean_ctor_get(x_305, 0);
lean_dec(x_308);
lean_ctor_set(x_305, 1, x_303);
lean_ctor_set(x_305, 0, x_300);
x_309 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_305, x_10, x_11, x_12, x_13, x_14, x_15, x_307);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_309;
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; 
x_310 = lean_ctor_get(x_305, 1);
lean_inc(x_310);
lean_dec(x_305);
x_311 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_311, 0, x_300);
lean_ctor_set(x_311, 1, x_303);
x_312 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_311, x_10, x_11, x_12, x_13, x_14, x_15, x_310);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_312;
}
}
else
{
lean_object* x_313; lean_object* x_314; 
x_313 = lean_ctor_get(x_299, 0);
lean_inc(x_313);
x_314 = lean_ctor_get(x_299, 1);
lean_inc(x_314);
lean_dec(x_299);
x_275 = x_313;
x_276 = x_314;
goto block_297;
}
block_297:
{
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; uint8_t x_281; 
lean_dec(x_274);
x_277 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_276);
x_278 = lean_ctor_get(x_277, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_277, 1);
lean_inc(x_279);
lean_dec(x_277);
x_280 = l_Lean_Elab_Term_SavedState_restore(x_272, x_10, x_11, x_12, x_13, x_14, x_15, x_279);
x_281 = !lean_is_exclusive(x_280);
if (x_281 == 0)
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_282 = lean_ctor_get(x_280, 1);
x_283 = lean_ctor_get(x_280, 0);
lean_dec(x_283);
lean_ctor_set_tag(x_280, 1);
lean_ctor_set(x_280, 1, x_278);
lean_ctor_set(x_280, 0, x_275);
x_284 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_280, x_10, x_11, x_12, x_13, x_14, x_15, x_282);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_284;
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_285 = lean_ctor_get(x_280, 1);
lean_inc(x_285);
lean_dec(x_280);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_275);
lean_ctor_set(x_286, 1, x_278);
x_287 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_286, x_10, x_11, x_12, x_13, x_14, x_15, x_285);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_287;
}
}
else
{
lean_object* x_288; lean_object* x_289; uint8_t x_290; 
lean_dec(x_9);
x_288 = lean_ctor_get(x_275, 0);
lean_inc(x_288);
x_289 = l_Lean_Elab_postponeExceptionId;
x_290 = lean_nat_dec_eq(x_288, x_289);
lean_dec(x_288);
if (x_290 == 0)
{
lean_object* x_291; 
lean_dec(x_272);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_274)) {
 x_291 = lean_alloc_ctor(1, 2, 0);
} else {
 x_291 = x_274;
 lean_ctor_set_tag(x_291, 1);
}
lean_ctor_set(x_291, 0, x_275);
lean_ctor_set(x_291, 1, x_276);
return x_291;
}
else
{
lean_object* x_292; uint8_t x_293; 
lean_dec(x_274);
x_292 = l_Lean_Elab_Term_SavedState_restore(x_272, x_10, x_11, x_12, x_13, x_14, x_15, x_276);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_293 = !lean_is_exclusive(x_292);
if (x_293 == 0)
{
lean_object* x_294; 
x_294 = lean_ctor_get(x_292, 0);
lean_dec(x_294);
lean_ctor_set_tag(x_292, 1);
lean_ctor_set(x_292, 0, x_275);
return x_292;
}
else
{
lean_object* x_295; lean_object* x_296; 
x_295 = lean_ctor_get(x_292, 1);
lean_inc(x_295);
lean_dec(x_292);
x_296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_296, 0, x_275);
lean_ctor_set(x_296, 1, x_295);
return x_296;
}
}
}
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_343; 
x_315 = lean_box(0);
x_316 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_317 = lean_ctor_get(x_316, 0);
lean_inc(x_317);
x_318 = lean_ctor_get(x_316, 1);
lean_inc(x_318);
if (lean_is_exclusive(x_316)) {
 lean_ctor_release(x_316, 0);
 lean_ctor_release(x_316, 1);
 x_319 = x_316;
} else {
 lean_dec_ref(x_316);
 x_319 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_343 = l_Lean_Elab_Term_elabTermEnsuringType(x_1, x_5, x_37, x_315, x_10, x_11, x_12, x_13, x_14, x_15, x_318);
if (lean_obj_tag(x_343) == 0)
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; uint8_t x_350; 
lean_dec(x_319);
x_344 = lean_ctor_get(x_343, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_343, 1);
lean_inc(x_345);
lean_dec(x_343);
x_346 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_345);
x_347 = lean_ctor_get(x_346, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_346, 1);
lean_inc(x_348);
lean_dec(x_346);
x_349 = l_Lean_Elab_Term_SavedState_restore(x_317, x_10, x_11, x_12, x_13, x_14, x_15, x_348);
x_350 = !lean_is_exclusive(x_349);
if (x_350 == 0)
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_351 = lean_ctor_get(x_349, 1);
x_352 = lean_ctor_get(x_349, 0);
lean_dec(x_352);
lean_ctor_set(x_349, 1, x_347);
lean_ctor_set(x_349, 0, x_344);
x_353 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_349, x_10, x_11, x_12, x_13, x_14, x_15, x_351);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_353;
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_354 = lean_ctor_get(x_349, 1);
lean_inc(x_354);
lean_dec(x_349);
x_355 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_355, 0, x_344);
lean_ctor_set(x_355, 1, x_347);
x_356 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_355, x_10, x_11, x_12, x_13, x_14, x_15, x_354);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_356;
}
}
else
{
lean_object* x_357; lean_object* x_358; 
x_357 = lean_ctor_get(x_343, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_343, 1);
lean_inc(x_358);
lean_dec(x_343);
x_320 = x_357;
x_321 = x_358;
goto block_342;
}
block_342:
{
if (lean_obj_tag(x_320) == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; uint8_t x_326; 
lean_dec(x_319);
x_322 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_321);
x_323 = lean_ctor_get(x_322, 0);
lean_inc(x_323);
x_324 = lean_ctor_get(x_322, 1);
lean_inc(x_324);
lean_dec(x_322);
x_325 = l_Lean_Elab_Term_SavedState_restore(x_317, x_10, x_11, x_12, x_13, x_14, x_15, x_324);
x_326 = !lean_is_exclusive(x_325);
if (x_326 == 0)
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_327 = lean_ctor_get(x_325, 1);
x_328 = lean_ctor_get(x_325, 0);
lean_dec(x_328);
lean_ctor_set_tag(x_325, 1);
lean_ctor_set(x_325, 1, x_323);
lean_ctor_set(x_325, 0, x_320);
x_329 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_325, x_10, x_11, x_12, x_13, x_14, x_15, x_327);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_329;
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_330 = lean_ctor_get(x_325, 1);
lean_inc(x_330);
lean_dec(x_325);
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_320);
lean_ctor_set(x_331, 1, x_323);
x_332 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_331, x_10, x_11, x_12, x_13, x_14, x_15, x_330);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_332;
}
}
else
{
lean_object* x_333; lean_object* x_334; uint8_t x_335; 
lean_dec(x_9);
x_333 = lean_ctor_get(x_320, 0);
lean_inc(x_333);
x_334 = l_Lean_Elab_postponeExceptionId;
x_335 = lean_nat_dec_eq(x_333, x_334);
lean_dec(x_333);
if (x_335 == 0)
{
lean_object* x_336; 
lean_dec(x_317);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_319)) {
 x_336 = lean_alloc_ctor(1, 2, 0);
} else {
 x_336 = x_319;
 lean_ctor_set_tag(x_336, 1);
}
lean_ctor_set(x_336, 0, x_320);
lean_ctor_set(x_336, 1, x_321);
return x_336;
}
else
{
lean_object* x_337; uint8_t x_338; 
lean_dec(x_319);
x_337 = l_Lean_Elab_Term_SavedState_restore(x_317, x_10, x_11, x_12, x_13, x_14, x_15, x_321);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_338 = !lean_is_exclusive(x_337);
if (x_338 == 0)
{
lean_object* x_339; 
x_339 = lean_ctor_get(x_337, 0);
lean_dec(x_339);
lean_ctor_set_tag(x_337, 1);
lean_ctor_set(x_337, 0, x_320);
return x_337;
}
else
{
lean_object* x_340; lean_object* x_341; 
x_340 = lean_ctor_get(x_337, 1);
lean_inc(x_340);
lean_dec(x_337);
x_341 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_341, 0, x_320);
lean_ctor_set(x_341, 1, x_340);
return x_341;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_362; lean_object* x_363; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_362 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__3;
x_363 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__1(x_362, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_363;
}
}
else
{
lean_object* x_364; lean_object* x_365; uint8_t x_366; 
x_364 = lean_unsigned_to_nat(1u);
x_365 = l_Lean_Syntax_getArg(x_1, x_364);
lean_inc(x_365);
x_366 = l_Lean_Syntax_isOfKind(x_365, x_28);
if (x_366 == 0)
{
uint8_t x_367; 
lean_inc(x_365);
x_367 = l_Lean_Syntax_isOfKind(x_365, x_30);
if (x_367 == 0)
{
lean_object* x_368; 
lean_dec(x_365);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_368 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2___rarg(x_16);
return x_368;
}
else
{
lean_object* x_369; lean_object* x_370; uint8_t x_371; 
x_369 = lean_unsigned_to_nat(0u);
x_370 = l_Lean_Syntax_getArg(x_365, x_369);
lean_dec(x_365);
x_371 = l_Lean_Syntax_isOfKind(x_370, x_28);
if (x_371 == 0)
{
lean_object* x_372; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_372 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2___rarg(x_16);
return x_372;
}
else
{
lean_object* x_373; uint8_t x_374; 
x_373 = l_Lean_Syntax_getArg(x_1, x_364);
lean_dec(x_1);
x_374 = 1;
x_1 = x_373;
x_6 = x_374;
goto _start;
}
}
}
else
{
uint8_t x_376; 
lean_dec(x_1);
x_376 = 1;
x_1 = x_365;
x_6 = x_376;
goto _start;
}
}
}
else
{
lean_object* x_378; lean_object* x_379; uint8_t x_380; 
x_378 = lean_unsigned_to_nat(0u);
x_379 = l_Lean_Syntax_getArg(x_1, x_378);
lean_inc(x_379);
x_380 = l_Lean_Syntax_isOfKind(x_379, x_28);
if (x_380 == 0)
{
uint8_t x_381; uint8_t x_382; 
lean_dec(x_379);
x_381 = l_List_isEmpty___rarg(x_2);
if (x_8 == 0)
{
uint8_t x_705; 
x_705 = 1;
x_382 = x_705;
goto block_704;
}
else
{
uint8_t x_706; 
x_706 = 0;
x_382 = x_706;
goto block_704;
}
block_704:
{
if (x_381 == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_420; lean_object* x_421; lean_object* x_443; 
x_383 = lean_box(0);
x_384 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_385 = lean_ctor_get(x_384, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_384, 1);
lean_inc(x_386);
if (lean_is_exclusive(x_384)) {
 lean_ctor_release(x_384, 0);
 lean_ctor_release(x_384, 1);
 x_387 = x_384;
} else {
 lean_dec_ref(x_384);
 x_387 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_443 = l_Lean_Elab_Term_elabTerm(x_1, x_383, x_382, x_10, x_11, x_12, x_13, x_14, x_15, x_386);
if (lean_obj_tag(x_443) == 0)
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; 
x_444 = lean_ctor_get(x_443, 0);
lean_inc(x_444);
x_445 = lean_ctor_get(x_443, 1);
lean_inc(x_445);
lean_dec(x_443);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_446 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_444, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_445);
if (lean_obj_tag(x_446) == 0)
{
if (x_8 == 0)
{
lean_object* x_447; lean_object* x_448; 
lean_dec(x_387);
lean_dec(x_5);
x_447 = lean_ctor_get(x_446, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_446, 1);
lean_inc(x_448);
lean_dec(x_446);
x_420 = x_447;
x_421 = x_448;
goto block_442;
}
else
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; 
x_449 = lean_ctor_get(x_446, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_446, 1);
lean_inc(x_450);
lean_dec(x_446);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_451 = l_Lean_Elab_Term_ensureHasType(x_5, x_449, x_383, x_10, x_11, x_12, x_13, x_14, x_15, x_450);
if (lean_obj_tag(x_451) == 0)
{
lean_object* x_452; lean_object* x_453; 
lean_dec(x_387);
x_452 = lean_ctor_get(x_451, 0);
lean_inc(x_452);
x_453 = lean_ctor_get(x_451, 1);
lean_inc(x_453);
lean_dec(x_451);
x_420 = x_452;
x_421 = x_453;
goto block_442;
}
else
{
lean_object* x_454; lean_object* x_455; 
x_454 = lean_ctor_get(x_451, 0);
lean_inc(x_454);
x_455 = lean_ctor_get(x_451, 1);
lean_inc(x_455);
lean_dec(x_451);
x_388 = x_454;
x_389 = x_455;
goto block_419;
}
}
}
else
{
lean_object* x_456; lean_object* x_457; 
lean_dec(x_5);
x_456 = lean_ctor_get(x_446, 0);
lean_inc(x_456);
x_457 = lean_ctor_get(x_446, 1);
lean_inc(x_457);
lean_dec(x_446);
x_388 = x_456;
x_389 = x_457;
goto block_419;
}
}
else
{
lean_object* x_458; lean_object* x_459; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_458 = lean_ctor_get(x_443, 0);
lean_inc(x_458);
x_459 = lean_ctor_get(x_443, 1);
lean_inc(x_459);
lean_dec(x_443);
x_388 = x_458;
x_389 = x_459;
goto block_419;
}
block_419:
{
if (lean_obj_tag(x_388) == 0)
{
lean_object* x_390; uint8_t x_391; 
lean_dec(x_387);
x_390 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_389);
x_391 = !lean_is_exclusive(x_390);
if (x_391 == 0)
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; uint8_t x_395; 
x_392 = lean_ctor_get(x_390, 0);
x_393 = lean_ctor_get(x_390, 1);
x_394 = l_Lean_Elab_Term_SavedState_restore(x_385, x_10, x_11, x_12, x_13, x_14, x_15, x_393);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_395 = !lean_is_exclusive(x_394);
if (x_395 == 0)
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; 
x_396 = lean_ctor_get(x_394, 1);
x_397 = lean_ctor_get(x_394, 0);
lean_dec(x_397);
lean_ctor_set_tag(x_394, 1);
lean_ctor_set(x_394, 1, x_392);
lean_ctor_set(x_394, 0, x_388);
x_398 = lean_array_push(x_9, x_394);
lean_ctor_set(x_390, 1, x_396);
lean_ctor_set(x_390, 0, x_398);
return x_390;
}
else
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; 
x_399 = lean_ctor_get(x_394, 1);
lean_inc(x_399);
lean_dec(x_394);
x_400 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_400, 0, x_388);
lean_ctor_set(x_400, 1, x_392);
x_401 = lean_array_push(x_9, x_400);
lean_ctor_set(x_390, 1, x_399);
lean_ctor_set(x_390, 0, x_401);
return x_390;
}
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; 
x_402 = lean_ctor_get(x_390, 0);
x_403 = lean_ctor_get(x_390, 1);
lean_inc(x_403);
lean_inc(x_402);
lean_dec(x_390);
x_404 = l_Lean_Elab_Term_SavedState_restore(x_385, x_10, x_11, x_12, x_13, x_14, x_15, x_403);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_405 = lean_ctor_get(x_404, 1);
lean_inc(x_405);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 x_406 = x_404;
} else {
 lean_dec_ref(x_404);
 x_406 = lean_box(0);
}
if (lean_is_scalar(x_406)) {
 x_407 = lean_alloc_ctor(1, 2, 0);
} else {
 x_407 = x_406;
 lean_ctor_set_tag(x_407, 1);
}
lean_ctor_set(x_407, 0, x_388);
lean_ctor_set(x_407, 1, x_402);
x_408 = lean_array_push(x_9, x_407);
x_409 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_409, 0, x_408);
lean_ctor_set(x_409, 1, x_405);
return x_409;
}
}
else
{
lean_object* x_410; lean_object* x_411; uint8_t x_412; 
lean_dec(x_9);
x_410 = lean_ctor_get(x_388, 0);
lean_inc(x_410);
x_411 = l_Lean_Elab_postponeExceptionId;
x_412 = lean_nat_dec_eq(x_410, x_411);
lean_dec(x_410);
if (x_412 == 0)
{
lean_object* x_413; 
lean_dec(x_385);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_387)) {
 x_413 = lean_alloc_ctor(1, 2, 0);
} else {
 x_413 = x_387;
 lean_ctor_set_tag(x_413, 1);
}
lean_ctor_set(x_413, 0, x_388);
lean_ctor_set(x_413, 1, x_389);
return x_413;
}
else
{
lean_object* x_414; uint8_t x_415; 
lean_dec(x_387);
x_414 = l_Lean_Elab_Term_SavedState_restore(x_385, x_10, x_11, x_12, x_13, x_14, x_15, x_389);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_415 = !lean_is_exclusive(x_414);
if (x_415 == 0)
{
lean_object* x_416; 
x_416 = lean_ctor_get(x_414, 0);
lean_dec(x_416);
lean_ctor_set_tag(x_414, 1);
lean_ctor_set(x_414, 0, x_388);
return x_414;
}
else
{
lean_object* x_417; lean_object* x_418; 
x_417 = lean_ctor_get(x_414, 1);
lean_inc(x_417);
lean_dec(x_414);
x_418 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_418, 0, x_388);
lean_ctor_set(x_418, 1, x_417);
return x_418;
}
}
}
}
block_442:
{
lean_object* x_422; uint8_t x_423; 
x_422 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_421);
x_423 = !lean_is_exclusive(x_422);
if (x_423 == 0)
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; uint8_t x_427; 
x_424 = lean_ctor_get(x_422, 0);
x_425 = lean_ctor_get(x_422, 1);
x_426 = l_Lean_Elab_Term_SavedState_restore(x_385, x_10, x_11, x_12, x_13, x_14, x_15, x_425);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_427 = !lean_is_exclusive(x_426);
if (x_427 == 0)
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; 
x_428 = lean_ctor_get(x_426, 1);
x_429 = lean_ctor_get(x_426, 0);
lean_dec(x_429);
lean_ctor_set(x_426, 1, x_424);
lean_ctor_set(x_426, 0, x_420);
x_430 = lean_array_push(x_9, x_426);
lean_ctor_set(x_422, 1, x_428);
lean_ctor_set(x_422, 0, x_430);
return x_422;
}
else
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_431 = lean_ctor_get(x_426, 1);
lean_inc(x_431);
lean_dec(x_426);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_420);
lean_ctor_set(x_432, 1, x_424);
x_433 = lean_array_push(x_9, x_432);
lean_ctor_set(x_422, 1, x_431);
lean_ctor_set(x_422, 0, x_433);
return x_422;
}
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_434 = lean_ctor_get(x_422, 0);
x_435 = lean_ctor_get(x_422, 1);
lean_inc(x_435);
lean_inc(x_434);
lean_dec(x_422);
x_436 = l_Lean_Elab_Term_SavedState_restore(x_385, x_10, x_11, x_12, x_13, x_14, x_15, x_435);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_437 = lean_ctor_get(x_436, 1);
lean_inc(x_437);
if (lean_is_exclusive(x_436)) {
 lean_ctor_release(x_436, 0);
 lean_ctor_release(x_436, 1);
 x_438 = x_436;
} else {
 lean_dec_ref(x_436);
 x_438 = lean_box(0);
}
if (lean_is_scalar(x_438)) {
 x_439 = lean_alloc_ctor(0, 2, 0);
} else {
 x_439 = x_438;
}
lean_ctor_set(x_439, 0, x_420);
lean_ctor_set(x_439, 1, x_434);
x_440 = lean_array_push(x_9, x_439);
x_441 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_441, 0, x_440);
lean_ctor_set(x_441, 1, x_437);
return x_441;
}
}
}
else
{
uint8_t x_460; 
x_460 = l_Array_isEmpty___rarg(x_3);
if (x_460 == 0)
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_498; lean_object* x_499; lean_object* x_521; 
x_461 = lean_box(0);
x_462 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_463 = lean_ctor_get(x_462, 0);
lean_inc(x_463);
x_464 = lean_ctor_get(x_462, 1);
lean_inc(x_464);
if (lean_is_exclusive(x_462)) {
 lean_ctor_release(x_462, 0);
 lean_ctor_release(x_462, 1);
 x_465 = x_462;
} else {
 lean_dec_ref(x_462);
 x_465 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_521 = l_Lean_Elab_Term_elabTerm(x_1, x_461, x_382, x_10, x_11, x_12, x_13, x_14, x_15, x_464);
if (lean_obj_tag(x_521) == 0)
{
lean_object* x_522; lean_object* x_523; lean_object* x_524; 
x_522 = lean_ctor_get(x_521, 0);
lean_inc(x_522);
x_523 = lean_ctor_get(x_521, 1);
lean_inc(x_523);
lean_dec(x_521);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_524 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_522, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_523);
if (lean_obj_tag(x_524) == 0)
{
if (x_8 == 0)
{
lean_object* x_525; lean_object* x_526; 
lean_dec(x_465);
lean_dec(x_5);
x_525 = lean_ctor_get(x_524, 0);
lean_inc(x_525);
x_526 = lean_ctor_get(x_524, 1);
lean_inc(x_526);
lean_dec(x_524);
x_498 = x_525;
x_499 = x_526;
goto block_520;
}
else
{
lean_object* x_527; lean_object* x_528; lean_object* x_529; 
x_527 = lean_ctor_get(x_524, 0);
lean_inc(x_527);
x_528 = lean_ctor_get(x_524, 1);
lean_inc(x_528);
lean_dec(x_524);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_529 = l_Lean_Elab_Term_ensureHasType(x_5, x_527, x_461, x_10, x_11, x_12, x_13, x_14, x_15, x_528);
if (lean_obj_tag(x_529) == 0)
{
lean_object* x_530; lean_object* x_531; 
lean_dec(x_465);
x_530 = lean_ctor_get(x_529, 0);
lean_inc(x_530);
x_531 = lean_ctor_get(x_529, 1);
lean_inc(x_531);
lean_dec(x_529);
x_498 = x_530;
x_499 = x_531;
goto block_520;
}
else
{
lean_object* x_532; lean_object* x_533; 
x_532 = lean_ctor_get(x_529, 0);
lean_inc(x_532);
x_533 = lean_ctor_get(x_529, 1);
lean_inc(x_533);
lean_dec(x_529);
x_466 = x_532;
x_467 = x_533;
goto block_497;
}
}
}
else
{
lean_object* x_534; lean_object* x_535; 
lean_dec(x_5);
x_534 = lean_ctor_get(x_524, 0);
lean_inc(x_534);
x_535 = lean_ctor_get(x_524, 1);
lean_inc(x_535);
lean_dec(x_524);
x_466 = x_534;
x_467 = x_535;
goto block_497;
}
}
else
{
lean_object* x_536; lean_object* x_537; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_536 = lean_ctor_get(x_521, 0);
lean_inc(x_536);
x_537 = lean_ctor_get(x_521, 1);
lean_inc(x_537);
lean_dec(x_521);
x_466 = x_536;
x_467 = x_537;
goto block_497;
}
block_497:
{
if (lean_obj_tag(x_466) == 0)
{
lean_object* x_468; uint8_t x_469; 
lean_dec(x_465);
x_468 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_467);
x_469 = !lean_is_exclusive(x_468);
if (x_469 == 0)
{
lean_object* x_470; lean_object* x_471; lean_object* x_472; uint8_t x_473; 
x_470 = lean_ctor_get(x_468, 0);
x_471 = lean_ctor_get(x_468, 1);
x_472 = l_Lean_Elab_Term_SavedState_restore(x_463, x_10, x_11, x_12, x_13, x_14, x_15, x_471);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_473 = !lean_is_exclusive(x_472);
if (x_473 == 0)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_474 = lean_ctor_get(x_472, 1);
x_475 = lean_ctor_get(x_472, 0);
lean_dec(x_475);
lean_ctor_set_tag(x_472, 1);
lean_ctor_set(x_472, 1, x_470);
lean_ctor_set(x_472, 0, x_466);
x_476 = lean_array_push(x_9, x_472);
lean_ctor_set(x_468, 1, x_474);
lean_ctor_set(x_468, 0, x_476);
return x_468;
}
else
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; 
x_477 = lean_ctor_get(x_472, 1);
lean_inc(x_477);
lean_dec(x_472);
x_478 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_478, 0, x_466);
lean_ctor_set(x_478, 1, x_470);
x_479 = lean_array_push(x_9, x_478);
lean_ctor_set(x_468, 1, x_477);
lean_ctor_set(x_468, 0, x_479);
return x_468;
}
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; 
x_480 = lean_ctor_get(x_468, 0);
x_481 = lean_ctor_get(x_468, 1);
lean_inc(x_481);
lean_inc(x_480);
lean_dec(x_468);
x_482 = l_Lean_Elab_Term_SavedState_restore(x_463, x_10, x_11, x_12, x_13, x_14, x_15, x_481);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_483 = lean_ctor_get(x_482, 1);
lean_inc(x_483);
if (lean_is_exclusive(x_482)) {
 lean_ctor_release(x_482, 0);
 lean_ctor_release(x_482, 1);
 x_484 = x_482;
} else {
 lean_dec_ref(x_482);
 x_484 = lean_box(0);
}
if (lean_is_scalar(x_484)) {
 x_485 = lean_alloc_ctor(1, 2, 0);
} else {
 x_485 = x_484;
 lean_ctor_set_tag(x_485, 1);
}
lean_ctor_set(x_485, 0, x_466);
lean_ctor_set(x_485, 1, x_480);
x_486 = lean_array_push(x_9, x_485);
x_487 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_487, 0, x_486);
lean_ctor_set(x_487, 1, x_483);
return x_487;
}
}
else
{
lean_object* x_488; lean_object* x_489; uint8_t x_490; 
lean_dec(x_9);
x_488 = lean_ctor_get(x_466, 0);
lean_inc(x_488);
x_489 = l_Lean_Elab_postponeExceptionId;
x_490 = lean_nat_dec_eq(x_488, x_489);
lean_dec(x_488);
if (x_490 == 0)
{
lean_object* x_491; 
lean_dec(x_463);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_465)) {
 x_491 = lean_alloc_ctor(1, 2, 0);
} else {
 x_491 = x_465;
 lean_ctor_set_tag(x_491, 1);
}
lean_ctor_set(x_491, 0, x_466);
lean_ctor_set(x_491, 1, x_467);
return x_491;
}
else
{
lean_object* x_492; uint8_t x_493; 
lean_dec(x_465);
x_492 = l_Lean_Elab_Term_SavedState_restore(x_463, x_10, x_11, x_12, x_13, x_14, x_15, x_467);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_493 = !lean_is_exclusive(x_492);
if (x_493 == 0)
{
lean_object* x_494; 
x_494 = lean_ctor_get(x_492, 0);
lean_dec(x_494);
lean_ctor_set_tag(x_492, 1);
lean_ctor_set(x_492, 0, x_466);
return x_492;
}
else
{
lean_object* x_495; lean_object* x_496; 
x_495 = lean_ctor_get(x_492, 1);
lean_inc(x_495);
lean_dec(x_492);
x_496 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_496, 0, x_466);
lean_ctor_set(x_496, 1, x_495);
return x_496;
}
}
}
}
block_520:
{
lean_object* x_500; uint8_t x_501; 
x_500 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_499);
x_501 = !lean_is_exclusive(x_500);
if (x_501 == 0)
{
lean_object* x_502; lean_object* x_503; lean_object* x_504; uint8_t x_505; 
x_502 = lean_ctor_get(x_500, 0);
x_503 = lean_ctor_get(x_500, 1);
x_504 = l_Lean_Elab_Term_SavedState_restore(x_463, x_10, x_11, x_12, x_13, x_14, x_15, x_503);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_505 = !lean_is_exclusive(x_504);
if (x_505 == 0)
{
lean_object* x_506; lean_object* x_507; lean_object* x_508; 
x_506 = lean_ctor_get(x_504, 1);
x_507 = lean_ctor_get(x_504, 0);
lean_dec(x_507);
lean_ctor_set(x_504, 1, x_502);
lean_ctor_set(x_504, 0, x_498);
x_508 = lean_array_push(x_9, x_504);
lean_ctor_set(x_500, 1, x_506);
lean_ctor_set(x_500, 0, x_508);
return x_500;
}
else
{
lean_object* x_509; lean_object* x_510; lean_object* x_511; 
x_509 = lean_ctor_get(x_504, 1);
lean_inc(x_509);
lean_dec(x_504);
x_510 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_510, 0, x_498);
lean_ctor_set(x_510, 1, x_502);
x_511 = lean_array_push(x_9, x_510);
lean_ctor_set(x_500, 1, x_509);
lean_ctor_set(x_500, 0, x_511);
return x_500;
}
}
else
{
lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; 
x_512 = lean_ctor_get(x_500, 0);
x_513 = lean_ctor_get(x_500, 1);
lean_inc(x_513);
lean_inc(x_512);
lean_dec(x_500);
x_514 = l_Lean_Elab_Term_SavedState_restore(x_463, x_10, x_11, x_12, x_13, x_14, x_15, x_513);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_515 = lean_ctor_get(x_514, 1);
lean_inc(x_515);
if (lean_is_exclusive(x_514)) {
 lean_ctor_release(x_514, 0);
 lean_ctor_release(x_514, 1);
 x_516 = x_514;
} else {
 lean_dec_ref(x_514);
 x_516 = lean_box(0);
}
if (lean_is_scalar(x_516)) {
 x_517 = lean_alloc_ctor(0, 2, 0);
} else {
 x_517 = x_516;
}
lean_ctor_set(x_517, 0, x_498);
lean_ctor_set(x_517, 1, x_512);
x_518 = lean_array_push(x_9, x_517);
x_519 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_519, 0, x_518);
lean_ctor_set(x_519, 1, x_515);
return x_519;
}
}
}
else
{
uint8_t x_538; 
x_538 = l_Array_isEmpty___rarg(x_4);
if (x_538 == 0)
{
lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_576; lean_object* x_577; lean_object* x_599; 
x_539 = lean_box(0);
x_540 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_541 = lean_ctor_get(x_540, 0);
lean_inc(x_541);
x_542 = lean_ctor_get(x_540, 1);
lean_inc(x_542);
if (lean_is_exclusive(x_540)) {
 lean_ctor_release(x_540, 0);
 lean_ctor_release(x_540, 1);
 x_543 = x_540;
} else {
 lean_dec_ref(x_540);
 x_543 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_599 = l_Lean_Elab_Term_elabTerm(x_1, x_539, x_382, x_10, x_11, x_12, x_13, x_14, x_15, x_542);
if (lean_obj_tag(x_599) == 0)
{
lean_object* x_600; lean_object* x_601; lean_object* x_602; 
x_600 = lean_ctor_get(x_599, 0);
lean_inc(x_600);
x_601 = lean_ctor_get(x_599, 1);
lean_inc(x_601);
lean_dec(x_599);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_602 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_600, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_601);
if (lean_obj_tag(x_602) == 0)
{
if (x_8 == 0)
{
lean_object* x_603; lean_object* x_604; 
lean_dec(x_543);
lean_dec(x_5);
x_603 = lean_ctor_get(x_602, 0);
lean_inc(x_603);
x_604 = lean_ctor_get(x_602, 1);
lean_inc(x_604);
lean_dec(x_602);
x_576 = x_603;
x_577 = x_604;
goto block_598;
}
else
{
lean_object* x_605; lean_object* x_606; lean_object* x_607; 
x_605 = lean_ctor_get(x_602, 0);
lean_inc(x_605);
x_606 = lean_ctor_get(x_602, 1);
lean_inc(x_606);
lean_dec(x_602);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_607 = l_Lean_Elab_Term_ensureHasType(x_5, x_605, x_539, x_10, x_11, x_12, x_13, x_14, x_15, x_606);
if (lean_obj_tag(x_607) == 0)
{
lean_object* x_608; lean_object* x_609; 
lean_dec(x_543);
x_608 = lean_ctor_get(x_607, 0);
lean_inc(x_608);
x_609 = lean_ctor_get(x_607, 1);
lean_inc(x_609);
lean_dec(x_607);
x_576 = x_608;
x_577 = x_609;
goto block_598;
}
else
{
lean_object* x_610; lean_object* x_611; 
x_610 = lean_ctor_get(x_607, 0);
lean_inc(x_610);
x_611 = lean_ctor_get(x_607, 1);
lean_inc(x_611);
lean_dec(x_607);
x_544 = x_610;
x_545 = x_611;
goto block_575;
}
}
}
else
{
lean_object* x_612; lean_object* x_613; 
lean_dec(x_5);
x_612 = lean_ctor_get(x_602, 0);
lean_inc(x_612);
x_613 = lean_ctor_get(x_602, 1);
lean_inc(x_613);
lean_dec(x_602);
x_544 = x_612;
x_545 = x_613;
goto block_575;
}
}
else
{
lean_object* x_614; lean_object* x_615; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_614 = lean_ctor_get(x_599, 0);
lean_inc(x_614);
x_615 = lean_ctor_get(x_599, 1);
lean_inc(x_615);
lean_dec(x_599);
x_544 = x_614;
x_545 = x_615;
goto block_575;
}
block_575:
{
if (lean_obj_tag(x_544) == 0)
{
lean_object* x_546; uint8_t x_547; 
lean_dec(x_543);
x_546 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_545);
x_547 = !lean_is_exclusive(x_546);
if (x_547 == 0)
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; uint8_t x_551; 
x_548 = lean_ctor_get(x_546, 0);
x_549 = lean_ctor_get(x_546, 1);
x_550 = l_Lean_Elab_Term_SavedState_restore(x_541, x_10, x_11, x_12, x_13, x_14, x_15, x_549);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_551 = !lean_is_exclusive(x_550);
if (x_551 == 0)
{
lean_object* x_552; lean_object* x_553; lean_object* x_554; 
x_552 = lean_ctor_get(x_550, 1);
x_553 = lean_ctor_get(x_550, 0);
lean_dec(x_553);
lean_ctor_set_tag(x_550, 1);
lean_ctor_set(x_550, 1, x_548);
lean_ctor_set(x_550, 0, x_544);
x_554 = lean_array_push(x_9, x_550);
lean_ctor_set(x_546, 1, x_552);
lean_ctor_set(x_546, 0, x_554);
return x_546;
}
else
{
lean_object* x_555; lean_object* x_556; lean_object* x_557; 
x_555 = lean_ctor_get(x_550, 1);
lean_inc(x_555);
lean_dec(x_550);
x_556 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_556, 0, x_544);
lean_ctor_set(x_556, 1, x_548);
x_557 = lean_array_push(x_9, x_556);
lean_ctor_set(x_546, 1, x_555);
lean_ctor_set(x_546, 0, x_557);
return x_546;
}
}
else
{
lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; 
x_558 = lean_ctor_get(x_546, 0);
x_559 = lean_ctor_get(x_546, 1);
lean_inc(x_559);
lean_inc(x_558);
lean_dec(x_546);
x_560 = l_Lean_Elab_Term_SavedState_restore(x_541, x_10, x_11, x_12, x_13, x_14, x_15, x_559);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_561 = lean_ctor_get(x_560, 1);
lean_inc(x_561);
if (lean_is_exclusive(x_560)) {
 lean_ctor_release(x_560, 0);
 lean_ctor_release(x_560, 1);
 x_562 = x_560;
} else {
 lean_dec_ref(x_560);
 x_562 = lean_box(0);
}
if (lean_is_scalar(x_562)) {
 x_563 = lean_alloc_ctor(1, 2, 0);
} else {
 x_563 = x_562;
 lean_ctor_set_tag(x_563, 1);
}
lean_ctor_set(x_563, 0, x_544);
lean_ctor_set(x_563, 1, x_558);
x_564 = lean_array_push(x_9, x_563);
x_565 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_565, 0, x_564);
lean_ctor_set(x_565, 1, x_561);
return x_565;
}
}
else
{
lean_object* x_566; lean_object* x_567; uint8_t x_568; 
lean_dec(x_9);
x_566 = lean_ctor_get(x_544, 0);
lean_inc(x_566);
x_567 = l_Lean_Elab_postponeExceptionId;
x_568 = lean_nat_dec_eq(x_566, x_567);
lean_dec(x_566);
if (x_568 == 0)
{
lean_object* x_569; 
lean_dec(x_541);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_543)) {
 x_569 = lean_alloc_ctor(1, 2, 0);
} else {
 x_569 = x_543;
 lean_ctor_set_tag(x_569, 1);
}
lean_ctor_set(x_569, 0, x_544);
lean_ctor_set(x_569, 1, x_545);
return x_569;
}
else
{
lean_object* x_570; uint8_t x_571; 
lean_dec(x_543);
x_570 = l_Lean_Elab_Term_SavedState_restore(x_541, x_10, x_11, x_12, x_13, x_14, x_15, x_545);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_571 = !lean_is_exclusive(x_570);
if (x_571 == 0)
{
lean_object* x_572; 
x_572 = lean_ctor_get(x_570, 0);
lean_dec(x_572);
lean_ctor_set_tag(x_570, 1);
lean_ctor_set(x_570, 0, x_544);
return x_570;
}
else
{
lean_object* x_573; lean_object* x_574; 
x_573 = lean_ctor_get(x_570, 1);
lean_inc(x_573);
lean_dec(x_570);
x_574 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_574, 0, x_544);
lean_ctor_set(x_574, 1, x_573);
return x_574;
}
}
}
}
block_598:
{
lean_object* x_578; uint8_t x_579; 
x_578 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_577);
x_579 = !lean_is_exclusive(x_578);
if (x_579 == 0)
{
lean_object* x_580; lean_object* x_581; lean_object* x_582; uint8_t x_583; 
x_580 = lean_ctor_get(x_578, 0);
x_581 = lean_ctor_get(x_578, 1);
x_582 = l_Lean_Elab_Term_SavedState_restore(x_541, x_10, x_11, x_12, x_13, x_14, x_15, x_581);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_583 = !lean_is_exclusive(x_582);
if (x_583 == 0)
{
lean_object* x_584; lean_object* x_585; lean_object* x_586; 
x_584 = lean_ctor_get(x_582, 1);
x_585 = lean_ctor_get(x_582, 0);
lean_dec(x_585);
lean_ctor_set(x_582, 1, x_580);
lean_ctor_set(x_582, 0, x_576);
x_586 = lean_array_push(x_9, x_582);
lean_ctor_set(x_578, 1, x_584);
lean_ctor_set(x_578, 0, x_586);
return x_578;
}
else
{
lean_object* x_587; lean_object* x_588; lean_object* x_589; 
x_587 = lean_ctor_get(x_582, 1);
lean_inc(x_587);
lean_dec(x_582);
x_588 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_588, 0, x_576);
lean_ctor_set(x_588, 1, x_580);
x_589 = lean_array_push(x_9, x_588);
lean_ctor_set(x_578, 1, x_587);
lean_ctor_set(x_578, 0, x_589);
return x_578;
}
}
else
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; 
x_590 = lean_ctor_get(x_578, 0);
x_591 = lean_ctor_get(x_578, 1);
lean_inc(x_591);
lean_inc(x_590);
lean_dec(x_578);
x_592 = l_Lean_Elab_Term_SavedState_restore(x_541, x_10, x_11, x_12, x_13, x_14, x_15, x_591);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_593 = lean_ctor_get(x_592, 1);
lean_inc(x_593);
if (lean_is_exclusive(x_592)) {
 lean_ctor_release(x_592, 0);
 lean_ctor_release(x_592, 1);
 x_594 = x_592;
} else {
 lean_dec_ref(x_592);
 x_594 = lean_box(0);
}
if (lean_is_scalar(x_594)) {
 x_595 = lean_alloc_ctor(0, 2, 0);
} else {
 x_595 = x_594;
}
lean_ctor_set(x_595, 0, x_576);
lean_ctor_set(x_595, 1, x_590);
x_596 = lean_array_push(x_9, x_595);
x_597 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_597, 0, x_596);
lean_ctor_set(x_597, 1, x_593);
return x_597;
}
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (x_8 == 0)
{
lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; uint8_t x_643; lean_object* x_644; 
x_616 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_617 = lean_ctor_get(x_616, 0);
lean_inc(x_617);
x_618 = lean_ctor_get(x_616, 1);
lean_inc(x_618);
if (lean_is_exclusive(x_616)) {
 lean_ctor_release(x_616, 0);
 lean_ctor_release(x_616, 1);
 x_619 = x_616;
} else {
 lean_dec_ref(x_616);
 x_619 = lean_box(0);
}
x_643 = 1;
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_644 = l_Lean_Elab_Term_elabTerm(x_1, x_5, x_643, x_10, x_11, x_12, x_13, x_14, x_15, x_618);
if (lean_obj_tag(x_644) == 0)
{
lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; uint8_t x_651; 
lean_dec(x_619);
x_645 = lean_ctor_get(x_644, 0);
lean_inc(x_645);
x_646 = lean_ctor_get(x_644, 1);
lean_inc(x_646);
lean_dec(x_644);
x_647 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_646);
x_648 = lean_ctor_get(x_647, 0);
lean_inc(x_648);
x_649 = lean_ctor_get(x_647, 1);
lean_inc(x_649);
lean_dec(x_647);
x_650 = l_Lean_Elab_Term_SavedState_restore(x_617, x_10, x_11, x_12, x_13, x_14, x_15, x_649);
x_651 = !lean_is_exclusive(x_650);
if (x_651 == 0)
{
lean_object* x_652; lean_object* x_653; lean_object* x_654; 
x_652 = lean_ctor_get(x_650, 1);
x_653 = lean_ctor_get(x_650, 0);
lean_dec(x_653);
lean_ctor_set(x_650, 1, x_648);
lean_ctor_set(x_650, 0, x_645);
x_654 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_650, x_10, x_11, x_12, x_13, x_14, x_15, x_652);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_654;
}
else
{
lean_object* x_655; lean_object* x_656; lean_object* x_657; 
x_655 = lean_ctor_get(x_650, 1);
lean_inc(x_655);
lean_dec(x_650);
x_656 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_656, 0, x_645);
lean_ctor_set(x_656, 1, x_648);
x_657 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_656, x_10, x_11, x_12, x_13, x_14, x_15, x_655);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_657;
}
}
else
{
lean_object* x_658; lean_object* x_659; 
x_658 = lean_ctor_get(x_644, 0);
lean_inc(x_658);
x_659 = lean_ctor_get(x_644, 1);
lean_inc(x_659);
lean_dec(x_644);
x_620 = x_658;
x_621 = x_659;
goto block_642;
}
block_642:
{
if (lean_obj_tag(x_620) == 0)
{
lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; uint8_t x_626; 
lean_dec(x_619);
x_622 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_621);
x_623 = lean_ctor_get(x_622, 0);
lean_inc(x_623);
x_624 = lean_ctor_get(x_622, 1);
lean_inc(x_624);
lean_dec(x_622);
x_625 = l_Lean_Elab_Term_SavedState_restore(x_617, x_10, x_11, x_12, x_13, x_14, x_15, x_624);
x_626 = !lean_is_exclusive(x_625);
if (x_626 == 0)
{
lean_object* x_627; lean_object* x_628; lean_object* x_629; 
x_627 = lean_ctor_get(x_625, 1);
x_628 = lean_ctor_get(x_625, 0);
lean_dec(x_628);
lean_ctor_set_tag(x_625, 1);
lean_ctor_set(x_625, 1, x_623);
lean_ctor_set(x_625, 0, x_620);
x_629 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_625, x_10, x_11, x_12, x_13, x_14, x_15, x_627);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_629;
}
else
{
lean_object* x_630; lean_object* x_631; lean_object* x_632; 
x_630 = lean_ctor_get(x_625, 1);
lean_inc(x_630);
lean_dec(x_625);
x_631 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_631, 0, x_620);
lean_ctor_set(x_631, 1, x_623);
x_632 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_631, x_10, x_11, x_12, x_13, x_14, x_15, x_630);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_632;
}
}
else
{
lean_object* x_633; lean_object* x_634; uint8_t x_635; 
lean_dec(x_9);
x_633 = lean_ctor_get(x_620, 0);
lean_inc(x_633);
x_634 = l_Lean_Elab_postponeExceptionId;
x_635 = lean_nat_dec_eq(x_633, x_634);
lean_dec(x_633);
if (x_635 == 0)
{
lean_object* x_636; 
lean_dec(x_617);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_619)) {
 x_636 = lean_alloc_ctor(1, 2, 0);
} else {
 x_636 = x_619;
 lean_ctor_set_tag(x_636, 1);
}
lean_ctor_set(x_636, 0, x_620);
lean_ctor_set(x_636, 1, x_621);
return x_636;
}
else
{
lean_object* x_637; uint8_t x_638; 
lean_dec(x_619);
x_637 = l_Lean_Elab_Term_SavedState_restore(x_617, x_10, x_11, x_12, x_13, x_14, x_15, x_621);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_638 = !lean_is_exclusive(x_637);
if (x_638 == 0)
{
lean_object* x_639; 
x_639 = lean_ctor_get(x_637, 0);
lean_dec(x_639);
lean_ctor_set_tag(x_637, 1);
lean_ctor_set(x_637, 0, x_620);
return x_637;
}
else
{
lean_object* x_640; lean_object* x_641; 
x_640 = lean_ctor_get(x_637, 1);
lean_inc(x_640);
lean_dec(x_637);
x_641 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_641, 0, x_620);
lean_ctor_set(x_641, 1, x_640);
return x_641;
}
}
}
}
}
else
{
lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_688; 
x_660 = lean_box(0);
x_661 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_662 = lean_ctor_get(x_661, 0);
lean_inc(x_662);
x_663 = lean_ctor_get(x_661, 1);
lean_inc(x_663);
if (lean_is_exclusive(x_661)) {
 lean_ctor_release(x_661, 0);
 lean_ctor_release(x_661, 1);
 x_664 = x_661;
} else {
 lean_dec_ref(x_661);
 x_664 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_688 = l_Lean_Elab_Term_elabTermEnsuringType(x_1, x_5, x_382, x_660, x_10, x_11, x_12, x_13, x_14, x_15, x_663);
if (lean_obj_tag(x_688) == 0)
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; uint8_t x_695; 
lean_dec(x_664);
x_689 = lean_ctor_get(x_688, 0);
lean_inc(x_689);
x_690 = lean_ctor_get(x_688, 1);
lean_inc(x_690);
lean_dec(x_688);
x_691 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_690);
x_692 = lean_ctor_get(x_691, 0);
lean_inc(x_692);
x_693 = lean_ctor_get(x_691, 1);
lean_inc(x_693);
lean_dec(x_691);
x_694 = l_Lean_Elab_Term_SavedState_restore(x_662, x_10, x_11, x_12, x_13, x_14, x_15, x_693);
x_695 = !lean_is_exclusive(x_694);
if (x_695 == 0)
{
lean_object* x_696; lean_object* x_697; lean_object* x_698; 
x_696 = lean_ctor_get(x_694, 1);
x_697 = lean_ctor_get(x_694, 0);
lean_dec(x_697);
lean_ctor_set(x_694, 1, x_692);
lean_ctor_set(x_694, 0, x_689);
x_698 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_694, x_10, x_11, x_12, x_13, x_14, x_15, x_696);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_698;
}
else
{
lean_object* x_699; lean_object* x_700; lean_object* x_701; 
x_699 = lean_ctor_get(x_694, 1);
lean_inc(x_699);
lean_dec(x_694);
x_700 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_700, 0, x_689);
lean_ctor_set(x_700, 1, x_692);
x_701 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_700, x_10, x_11, x_12, x_13, x_14, x_15, x_699);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_701;
}
}
else
{
lean_object* x_702; lean_object* x_703; 
x_702 = lean_ctor_get(x_688, 0);
lean_inc(x_702);
x_703 = lean_ctor_get(x_688, 1);
lean_inc(x_703);
lean_dec(x_688);
x_665 = x_702;
x_666 = x_703;
goto block_687;
}
block_687:
{
if (lean_obj_tag(x_665) == 0)
{
lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; uint8_t x_671; 
lean_dec(x_664);
x_667 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_666);
x_668 = lean_ctor_get(x_667, 0);
lean_inc(x_668);
x_669 = lean_ctor_get(x_667, 1);
lean_inc(x_669);
lean_dec(x_667);
x_670 = l_Lean_Elab_Term_SavedState_restore(x_662, x_10, x_11, x_12, x_13, x_14, x_15, x_669);
x_671 = !lean_is_exclusive(x_670);
if (x_671 == 0)
{
lean_object* x_672; lean_object* x_673; lean_object* x_674; 
x_672 = lean_ctor_get(x_670, 1);
x_673 = lean_ctor_get(x_670, 0);
lean_dec(x_673);
lean_ctor_set_tag(x_670, 1);
lean_ctor_set(x_670, 1, x_668);
lean_ctor_set(x_670, 0, x_665);
x_674 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_670, x_10, x_11, x_12, x_13, x_14, x_15, x_672);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_674;
}
else
{
lean_object* x_675; lean_object* x_676; lean_object* x_677; 
x_675 = lean_ctor_get(x_670, 1);
lean_inc(x_675);
lean_dec(x_670);
x_676 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_676, 0, x_665);
lean_ctor_set(x_676, 1, x_668);
x_677 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_676, x_10, x_11, x_12, x_13, x_14, x_15, x_675);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_677;
}
}
else
{
lean_object* x_678; lean_object* x_679; uint8_t x_680; 
lean_dec(x_9);
x_678 = lean_ctor_get(x_665, 0);
lean_inc(x_678);
x_679 = l_Lean_Elab_postponeExceptionId;
x_680 = lean_nat_dec_eq(x_678, x_679);
lean_dec(x_678);
if (x_680 == 0)
{
lean_object* x_681; 
lean_dec(x_662);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_664)) {
 x_681 = lean_alloc_ctor(1, 2, 0);
} else {
 x_681 = x_664;
 lean_ctor_set_tag(x_681, 1);
}
lean_ctor_set(x_681, 0, x_665);
lean_ctor_set(x_681, 1, x_666);
return x_681;
}
else
{
lean_object* x_682; uint8_t x_683; 
lean_dec(x_664);
x_682 = l_Lean_Elab_Term_SavedState_restore(x_662, x_10, x_11, x_12, x_13, x_14, x_15, x_666);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_683 = !lean_is_exclusive(x_682);
if (x_683 == 0)
{
lean_object* x_684; 
x_684 = lean_ctor_get(x_682, 0);
lean_dec(x_684);
lean_ctor_set_tag(x_682, 1);
lean_ctor_set(x_682, 0, x_665);
return x_682;
}
else
{
lean_object* x_685; lean_object* x_686; 
x_685 = lean_ctor_get(x_682, 1);
lean_inc(x_685);
lean_dec(x_682);
x_686 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_686, 0, x_665);
lean_ctor_set(x_686, 1, x_685);
return x_686;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; 
x_707 = lean_unsigned_to_nat(2u);
x_708 = l_Lean_Syntax_getArg(x_1, x_707);
lean_dec(x_1);
x_709 = l_Lean_Syntax_getArgs(x_708);
lean_dec(x_708);
x_710 = l_Lean_Syntax_SepArray_getElems___rarg(x_709);
lean_dec(x_709);
x_711 = l_Lean_Elab_Term_elabExplicitUnivs(x_710, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_710);
if (lean_obj_tag(x_711) == 0)
{
lean_object* x_712; lean_object* x_713; lean_object* x_714; 
x_712 = lean_ctor_get(x_711, 0);
lean_inc(x_712);
x_713 = lean_ctor_get(x_711, 1);
lean_inc(x_713);
lean_dec(x_711);
x_714 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId(x_379, x_712, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_713);
return x_714;
}
else
{
uint8_t x_715; 
lean_dec(x_379);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_715 = !lean_is_exclusive(x_711);
if (x_715 == 0)
{
return x_711;
}
else
{
lean_object* x_716; lean_object* x_717; lean_object* x_718; 
x_716 = lean_ctor_get(x_711, 0);
x_717 = lean_ctor_get(x_711, 1);
lean_inc(x_717);
lean_inc(x_716);
lean_dec(x_711);
x_718 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_718, 0, x_716);
lean_ctor_set(x_718, 1, x_717);
return x_718;
}
}
}
}
}
else
{
lean_object* x_719; lean_object* x_720; 
x_719 = lean_box(0);
x_720 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFnId(x_1, x_719, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_720;
}
}
else
{
lean_object* x_721; lean_object* x_722; lean_object* x_723; uint8_t x_724; 
x_721 = lean_unsigned_to_nat(0u);
x_722 = l_Lean_Syntax_getArg(x_1, x_721);
x_723 = l_Lean_identKind___closed__2;
x_724 = l_Lean_Syntax_isOfKind(x_722, x_723);
if (x_724 == 0)
{
uint8_t x_725; uint8_t x_726; 
x_725 = l_List_isEmpty___rarg(x_2);
if (x_8 == 0)
{
uint8_t x_1049; 
x_1049 = 1;
x_726 = x_1049;
goto block_1048;
}
else
{
uint8_t x_1050; 
x_1050 = 0;
x_726 = x_1050;
goto block_1048;
}
block_1048:
{
if (x_725 == 0)
{
lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_764; lean_object* x_765; lean_object* x_787; 
x_727 = lean_box(0);
x_728 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_729 = lean_ctor_get(x_728, 0);
lean_inc(x_729);
x_730 = lean_ctor_get(x_728, 1);
lean_inc(x_730);
if (lean_is_exclusive(x_728)) {
 lean_ctor_release(x_728, 0);
 lean_ctor_release(x_728, 1);
 x_731 = x_728;
} else {
 lean_dec_ref(x_728);
 x_731 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_787 = l_Lean_Elab_Term_elabTerm(x_1, x_727, x_726, x_10, x_11, x_12, x_13, x_14, x_15, x_730);
if (lean_obj_tag(x_787) == 0)
{
lean_object* x_788; lean_object* x_789; lean_object* x_790; 
x_788 = lean_ctor_get(x_787, 0);
lean_inc(x_788);
x_789 = lean_ctor_get(x_787, 1);
lean_inc(x_789);
lean_dec(x_787);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_790 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_788, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_789);
if (lean_obj_tag(x_790) == 0)
{
if (x_8 == 0)
{
lean_object* x_791; lean_object* x_792; 
lean_dec(x_731);
lean_dec(x_5);
x_791 = lean_ctor_get(x_790, 0);
lean_inc(x_791);
x_792 = lean_ctor_get(x_790, 1);
lean_inc(x_792);
lean_dec(x_790);
x_764 = x_791;
x_765 = x_792;
goto block_786;
}
else
{
lean_object* x_793; lean_object* x_794; lean_object* x_795; 
x_793 = lean_ctor_get(x_790, 0);
lean_inc(x_793);
x_794 = lean_ctor_get(x_790, 1);
lean_inc(x_794);
lean_dec(x_790);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_795 = l_Lean_Elab_Term_ensureHasType(x_5, x_793, x_727, x_10, x_11, x_12, x_13, x_14, x_15, x_794);
if (lean_obj_tag(x_795) == 0)
{
lean_object* x_796; lean_object* x_797; 
lean_dec(x_731);
x_796 = lean_ctor_get(x_795, 0);
lean_inc(x_796);
x_797 = lean_ctor_get(x_795, 1);
lean_inc(x_797);
lean_dec(x_795);
x_764 = x_796;
x_765 = x_797;
goto block_786;
}
else
{
lean_object* x_798; lean_object* x_799; 
x_798 = lean_ctor_get(x_795, 0);
lean_inc(x_798);
x_799 = lean_ctor_get(x_795, 1);
lean_inc(x_799);
lean_dec(x_795);
x_732 = x_798;
x_733 = x_799;
goto block_763;
}
}
}
else
{
lean_object* x_800; lean_object* x_801; 
lean_dec(x_5);
x_800 = lean_ctor_get(x_790, 0);
lean_inc(x_800);
x_801 = lean_ctor_get(x_790, 1);
lean_inc(x_801);
lean_dec(x_790);
x_732 = x_800;
x_733 = x_801;
goto block_763;
}
}
else
{
lean_object* x_802; lean_object* x_803; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_802 = lean_ctor_get(x_787, 0);
lean_inc(x_802);
x_803 = lean_ctor_get(x_787, 1);
lean_inc(x_803);
lean_dec(x_787);
x_732 = x_802;
x_733 = x_803;
goto block_763;
}
block_763:
{
if (lean_obj_tag(x_732) == 0)
{
lean_object* x_734; uint8_t x_735; 
lean_dec(x_731);
x_734 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_733);
x_735 = !lean_is_exclusive(x_734);
if (x_735 == 0)
{
lean_object* x_736; lean_object* x_737; lean_object* x_738; uint8_t x_739; 
x_736 = lean_ctor_get(x_734, 0);
x_737 = lean_ctor_get(x_734, 1);
x_738 = l_Lean_Elab_Term_SavedState_restore(x_729, x_10, x_11, x_12, x_13, x_14, x_15, x_737);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_739 = !lean_is_exclusive(x_738);
if (x_739 == 0)
{
lean_object* x_740; lean_object* x_741; lean_object* x_742; 
x_740 = lean_ctor_get(x_738, 1);
x_741 = lean_ctor_get(x_738, 0);
lean_dec(x_741);
lean_ctor_set_tag(x_738, 1);
lean_ctor_set(x_738, 1, x_736);
lean_ctor_set(x_738, 0, x_732);
x_742 = lean_array_push(x_9, x_738);
lean_ctor_set(x_734, 1, x_740);
lean_ctor_set(x_734, 0, x_742);
return x_734;
}
else
{
lean_object* x_743; lean_object* x_744; lean_object* x_745; 
x_743 = lean_ctor_get(x_738, 1);
lean_inc(x_743);
lean_dec(x_738);
x_744 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_744, 0, x_732);
lean_ctor_set(x_744, 1, x_736);
x_745 = lean_array_push(x_9, x_744);
lean_ctor_set(x_734, 1, x_743);
lean_ctor_set(x_734, 0, x_745);
return x_734;
}
}
else
{
lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; 
x_746 = lean_ctor_get(x_734, 0);
x_747 = lean_ctor_get(x_734, 1);
lean_inc(x_747);
lean_inc(x_746);
lean_dec(x_734);
x_748 = l_Lean_Elab_Term_SavedState_restore(x_729, x_10, x_11, x_12, x_13, x_14, x_15, x_747);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_749 = lean_ctor_get(x_748, 1);
lean_inc(x_749);
if (lean_is_exclusive(x_748)) {
 lean_ctor_release(x_748, 0);
 lean_ctor_release(x_748, 1);
 x_750 = x_748;
} else {
 lean_dec_ref(x_748);
 x_750 = lean_box(0);
}
if (lean_is_scalar(x_750)) {
 x_751 = lean_alloc_ctor(1, 2, 0);
} else {
 x_751 = x_750;
 lean_ctor_set_tag(x_751, 1);
}
lean_ctor_set(x_751, 0, x_732);
lean_ctor_set(x_751, 1, x_746);
x_752 = lean_array_push(x_9, x_751);
x_753 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_753, 0, x_752);
lean_ctor_set(x_753, 1, x_749);
return x_753;
}
}
else
{
lean_object* x_754; lean_object* x_755; uint8_t x_756; 
lean_dec(x_9);
x_754 = lean_ctor_get(x_732, 0);
lean_inc(x_754);
x_755 = l_Lean_Elab_postponeExceptionId;
x_756 = lean_nat_dec_eq(x_754, x_755);
lean_dec(x_754);
if (x_756 == 0)
{
lean_object* x_757; 
lean_dec(x_729);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_731)) {
 x_757 = lean_alloc_ctor(1, 2, 0);
} else {
 x_757 = x_731;
 lean_ctor_set_tag(x_757, 1);
}
lean_ctor_set(x_757, 0, x_732);
lean_ctor_set(x_757, 1, x_733);
return x_757;
}
else
{
lean_object* x_758; uint8_t x_759; 
lean_dec(x_731);
x_758 = l_Lean_Elab_Term_SavedState_restore(x_729, x_10, x_11, x_12, x_13, x_14, x_15, x_733);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_759 = !lean_is_exclusive(x_758);
if (x_759 == 0)
{
lean_object* x_760; 
x_760 = lean_ctor_get(x_758, 0);
lean_dec(x_760);
lean_ctor_set_tag(x_758, 1);
lean_ctor_set(x_758, 0, x_732);
return x_758;
}
else
{
lean_object* x_761; lean_object* x_762; 
x_761 = lean_ctor_get(x_758, 1);
lean_inc(x_761);
lean_dec(x_758);
x_762 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_762, 0, x_732);
lean_ctor_set(x_762, 1, x_761);
return x_762;
}
}
}
}
block_786:
{
lean_object* x_766; uint8_t x_767; 
x_766 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_765);
x_767 = !lean_is_exclusive(x_766);
if (x_767 == 0)
{
lean_object* x_768; lean_object* x_769; lean_object* x_770; uint8_t x_771; 
x_768 = lean_ctor_get(x_766, 0);
x_769 = lean_ctor_get(x_766, 1);
x_770 = l_Lean_Elab_Term_SavedState_restore(x_729, x_10, x_11, x_12, x_13, x_14, x_15, x_769);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_771 = !lean_is_exclusive(x_770);
if (x_771 == 0)
{
lean_object* x_772; lean_object* x_773; lean_object* x_774; 
x_772 = lean_ctor_get(x_770, 1);
x_773 = lean_ctor_get(x_770, 0);
lean_dec(x_773);
lean_ctor_set(x_770, 1, x_768);
lean_ctor_set(x_770, 0, x_764);
x_774 = lean_array_push(x_9, x_770);
lean_ctor_set(x_766, 1, x_772);
lean_ctor_set(x_766, 0, x_774);
return x_766;
}
else
{
lean_object* x_775; lean_object* x_776; lean_object* x_777; 
x_775 = lean_ctor_get(x_770, 1);
lean_inc(x_775);
lean_dec(x_770);
x_776 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_776, 0, x_764);
lean_ctor_set(x_776, 1, x_768);
x_777 = lean_array_push(x_9, x_776);
lean_ctor_set(x_766, 1, x_775);
lean_ctor_set(x_766, 0, x_777);
return x_766;
}
}
else
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; 
x_778 = lean_ctor_get(x_766, 0);
x_779 = lean_ctor_get(x_766, 1);
lean_inc(x_779);
lean_inc(x_778);
lean_dec(x_766);
x_780 = l_Lean_Elab_Term_SavedState_restore(x_729, x_10, x_11, x_12, x_13, x_14, x_15, x_779);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_781 = lean_ctor_get(x_780, 1);
lean_inc(x_781);
if (lean_is_exclusive(x_780)) {
 lean_ctor_release(x_780, 0);
 lean_ctor_release(x_780, 1);
 x_782 = x_780;
} else {
 lean_dec_ref(x_780);
 x_782 = lean_box(0);
}
if (lean_is_scalar(x_782)) {
 x_783 = lean_alloc_ctor(0, 2, 0);
} else {
 x_783 = x_782;
}
lean_ctor_set(x_783, 0, x_764);
lean_ctor_set(x_783, 1, x_778);
x_784 = lean_array_push(x_9, x_783);
x_785 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_785, 0, x_784);
lean_ctor_set(x_785, 1, x_781);
return x_785;
}
}
}
else
{
uint8_t x_804; 
x_804 = l_Array_isEmpty___rarg(x_3);
if (x_804 == 0)
{
lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_842; lean_object* x_843; lean_object* x_865; 
x_805 = lean_box(0);
x_806 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_807 = lean_ctor_get(x_806, 0);
lean_inc(x_807);
x_808 = lean_ctor_get(x_806, 1);
lean_inc(x_808);
if (lean_is_exclusive(x_806)) {
 lean_ctor_release(x_806, 0);
 lean_ctor_release(x_806, 1);
 x_809 = x_806;
} else {
 lean_dec_ref(x_806);
 x_809 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_865 = l_Lean_Elab_Term_elabTerm(x_1, x_805, x_726, x_10, x_11, x_12, x_13, x_14, x_15, x_808);
if (lean_obj_tag(x_865) == 0)
{
lean_object* x_866; lean_object* x_867; lean_object* x_868; 
x_866 = lean_ctor_get(x_865, 0);
lean_inc(x_866);
x_867 = lean_ctor_get(x_865, 1);
lean_inc(x_867);
lean_dec(x_865);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_868 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_866, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_867);
if (lean_obj_tag(x_868) == 0)
{
if (x_8 == 0)
{
lean_object* x_869; lean_object* x_870; 
lean_dec(x_809);
lean_dec(x_5);
x_869 = lean_ctor_get(x_868, 0);
lean_inc(x_869);
x_870 = lean_ctor_get(x_868, 1);
lean_inc(x_870);
lean_dec(x_868);
x_842 = x_869;
x_843 = x_870;
goto block_864;
}
else
{
lean_object* x_871; lean_object* x_872; lean_object* x_873; 
x_871 = lean_ctor_get(x_868, 0);
lean_inc(x_871);
x_872 = lean_ctor_get(x_868, 1);
lean_inc(x_872);
lean_dec(x_868);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_873 = l_Lean_Elab_Term_ensureHasType(x_5, x_871, x_805, x_10, x_11, x_12, x_13, x_14, x_15, x_872);
if (lean_obj_tag(x_873) == 0)
{
lean_object* x_874; lean_object* x_875; 
lean_dec(x_809);
x_874 = lean_ctor_get(x_873, 0);
lean_inc(x_874);
x_875 = lean_ctor_get(x_873, 1);
lean_inc(x_875);
lean_dec(x_873);
x_842 = x_874;
x_843 = x_875;
goto block_864;
}
else
{
lean_object* x_876; lean_object* x_877; 
x_876 = lean_ctor_get(x_873, 0);
lean_inc(x_876);
x_877 = lean_ctor_get(x_873, 1);
lean_inc(x_877);
lean_dec(x_873);
x_810 = x_876;
x_811 = x_877;
goto block_841;
}
}
}
else
{
lean_object* x_878; lean_object* x_879; 
lean_dec(x_5);
x_878 = lean_ctor_get(x_868, 0);
lean_inc(x_878);
x_879 = lean_ctor_get(x_868, 1);
lean_inc(x_879);
lean_dec(x_868);
x_810 = x_878;
x_811 = x_879;
goto block_841;
}
}
else
{
lean_object* x_880; lean_object* x_881; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_880 = lean_ctor_get(x_865, 0);
lean_inc(x_880);
x_881 = lean_ctor_get(x_865, 1);
lean_inc(x_881);
lean_dec(x_865);
x_810 = x_880;
x_811 = x_881;
goto block_841;
}
block_841:
{
if (lean_obj_tag(x_810) == 0)
{
lean_object* x_812; uint8_t x_813; 
lean_dec(x_809);
x_812 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_811);
x_813 = !lean_is_exclusive(x_812);
if (x_813 == 0)
{
lean_object* x_814; lean_object* x_815; lean_object* x_816; uint8_t x_817; 
x_814 = lean_ctor_get(x_812, 0);
x_815 = lean_ctor_get(x_812, 1);
x_816 = l_Lean_Elab_Term_SavedState_restore(x_807, x_10, x_11, x_12, x_13, x_14, x_15, x_815);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_817 = !lean_is_exclusive(x_816);
if (x_817 == 0)
{
lean_object* x_818; lean_object* x_819; lean_object* x_820; 
x_818 = lean_ctor_get(x_816, 1);
x_819 = lean_ctor_get(x_816, 0);
lean_dec(x_819);
lean_ctor_set_tag(x_816, 1);
lean_ctor_set(x_816, 1, x_814);
lean_ctor_set(x_816, 0, x_810);
x_820 = lean_array_push(x_9, x_816);
lean_ctor_set(x_812, 1, x_818);
lean_ctor_set(x_812, 0, x_820);
return x_812;
}
else
{
lean_object* x_821; lean_object* x_822; lean_object* x_823; 
x_821 = lean_ctor_get(x_816, 1);
lean_inc(x_821);
lean_dec(x_816);
x_822 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_822, 0, x_810);
lean_ctor_set(x_822, 1, x_814);
x_823 = lean_array_push(x_9, x_822);
lean_ctor_set(x_812, 1, x_821);
lean_ctor_set(x_812, 0, x_823);
return x_812;
}
}
else
{
lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; 
x_824 = lean_ctor_get(x_812, 0);
x_825 = lean_ctor_get(x_812, 1);
lean_inc(x_825);
lean_inc(x_824);
lean_dec(x_812);
x_826 = l_Lean_Elab_Term_SavedState_restore(x_807, x_10, x_11, x_12, x_13, x_14, x_15, x_825);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_827 = lean_ctor_get(x_826, 1);
lean_inc(x_827);
if (lean_is_exclusive(x_826)) {
 lean_ctor_release(x_826, 0);
 lean_ctor_release(x_826, 1);
 x_828 = x_826;
} else {
 lean_dec_ref(x_826);
 x_828 = lean_box(0);
}
if (lean_is_scalar(x_828)) {
 x_829 = lean_alloc_ctor(1, 2, 0);
} else {
 x_829 = x_828;
 lean_ctor_set_tag(x_829, 1);
}
lean_ctor_set(x_829, 0, x_810);
lean_ctor_set(x_829, 1, x_824);
x_830 = lean_array_push(x_9, x_829);
x_831 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_831, 0, x_830);
lean_ctor_set(x_831, 1, x_827);
return x_831;
}
}
else
{
lean_object* x_832; lean_object* x_833; uint8_t x_834; 
lean_dec(x_9);
x_832 = lean_ctor_get(x_810, 0);
lean_inc(x_832);
x_833 = l_Lean_Elab_postponeExceptionId;
x_834 = lean_nat_dec_eq(x_832, x_833);
lean_dec(x_832);
if (x_834 == 0)
{
lean_object* x_835; 
lean_dec(x_807);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_809)) {
 x_835 = lean_alloc_ctor(1, 2, 0);
} else {
 x_835 = x_809;
 lean_ctor_set_tag(x_835, 1);
}
lean_ctor_set(x_835, 0, x_810);
lean_ctor_set(x_835, 1, x_811);
return x_835;
}
else
{
lean_object* x_836; uint8_t x_837; 
lean_dec(x_809);
x_836 = l_Lean_Elab_Term_SavedState_restore(x_807, x_10, x_11, x_12, x_13, x_14, x_15, x_811);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_837 = !lean_is_exclusive(x_836);
if (x_837 == 0)
{
lean_object* x_838; 
x_838 = lean_ctor_get(x_836, 0);
lean_dec(x_838);
lean_ctor_set_tag(x_836, 1);
lean_ctor_set(x_836, 0, x_810);
return x_836;
}
else
{
lean_object* x_839; lean_object* x_840; 
x_839 = lean_ctor_get(x_836, 1);
lean_inc(x_839);
lean_dec(x_836);
x_840 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_840, 0, x_810);
lean_ctor_set(x_840, 1, x_839);
return x_840;
}
}
}
}
block_864:
{
lean_object* x_844; uint8_t x_845; 
x_844 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_843);
x_845 = !lean_is_exclusive(x_844);
if (x_845 == 0)
{
lean_object* x_846; lean_object* x_847; lean_object* x_848; uint8_t x_849; 
x_846 = lean_ctor_get(x_844, 0);
x_847 = lean_ctor_get(x_844, 1);
x_848 = l_Lean_Elab_Term_SavedState_restore(x_807, x_10, x_11, x_12, x_13, x_14, x_15, x_847);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_849 = !lean_is_exclusive(x_848);
if (x_849 == 0)
{
lean_object* x_850; lean_object* x_851; lean_object* x_852; 
x_850 = lean_ctor_get(x_848, 1);
x_851 = lean_ctor_get(x_848, 0);
lean_dec(x_851);
lean_ctor_set(x_848, 1, x_846);
lean_ctor_set(x_848, 0, x_842);
x_852 = lean_array_push(x_9, x_848);
lean_ctor_set(x_844, 1, x_850);
lean_ctor_set(x_844, 0, x_852);
return x_844;
}
else
{
lean_object* x_853; lean_object* x_854; lean_object* x_855; 
x_853 = lean_ctor_get(x_848, 1);
lean_inc(x_853);
lean_dec(x_848);
x_854 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_854, 0, x_842);
lean_ctor_set(x_854, 1, x_846);
x_855 = lean_array_push(x_9, x_854);
lean_ctor_set(x_844, 1, x_853);
lean_ctor_set(x_844, 0, x_855);
return x_844;
}
}
else
{
lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; 
x_856 = lean_ctor_get(x_844, 0);
x_857 = lean_ctor_get(x_844, 1);
lean_inc(x_857);
lean_inc(x_856);
lean_dec(x_844);
x_858 = l_Lean_Elab_Term_SavedState_restore(x_807, x_10, x_11, x_12, x_13, x_14, x_15, x_857);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_859 = lean_ctor_get(x_858, 1);
lean_inc(x_859);
if (lean_is_exclusive(x_858)) {
 lean_ctor_release(x_858, 0);
 lean_ctor_release(x_858, 1);
 x_860 = x_858;
} else {
 lean_dec_ref(x_858);
 x_860 = lean_box(0);
}
if (lean_is_scalar(x_860)) {
 x_861 = lean_alloc_ctor(0, 2, 0);
} else {
 x_861 = x_860;
}
lean_ctor_set(x_861, 0, x_842);
lean_ctor_set(x_861, 1, x_856);
x_862 = lean_array_push(x_9, x_861);
x_863 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_863, 0, x_862);
lean_ctor_set(x_863, 1, x_859);
return x_863;
}
}
}
else
{
uint8_t x_882; 
x_882 = l_Array_isEmpty___rarg(x_4);
if (x_882 == 0)
{
lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_920; lean_object* x_921; lean_object* x_943; 
x_883 = lean_box(0);
x_884 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_885 = lean_ctor_get(x_884, 0);
lean_inc(x_885);
x_886 = lean_ctor_get(x_884, 1);
lean_inc(x_886);
if (lean_is_exclusive(x_884)) {
 lean_ctor_release(x_884, 0);
 lean_ctor_release(x_884, 1);
 x_887 = x_884;
} else {
 lean_dec_ref(x_884);
 x_887 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_943 = l_Lean_Elab_Term_elabTerm(x_1, x_883, x_726, x_10, x_11, x_12, x_13, x_14, x_15, x_886);
if (lean_obj_tag(x_943) == 0)
{
lean_object* x_944; lean_object* x_945; lean_object* x_946; 
x_944 = lean_ctor_get(x_943, 0);
lean_inc(x_944);
x_945 = lean_ctor_get(x_943, 1);
lean_inc(x_945);
lean_dec(x_943);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_946 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_944, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_945);
if (lean_obj_tag(x_946) == 0)
{
if (x_8 == 0)
{
lean_object* x_947; lean_object* x_948; 
lean_dec(x_887);
lean_dec(x_5);
x_947 = lean_ctor_get(x_946, 0);
lean_inc(x_947);
x_948 = lean_ctor_get(x_946, 1);
lean_inc(x_948);
lean_dec(x_946);
x_920 = x_947;
x_921 = x_948;
goto block_942;
}
else
{
lean_object* x_949; lean_object* x_950; lean_object* x_951; 
x_949 = lean_ctor_get(x_946, 0);
lean_inc(x_949);
x_950 = lean_ctor_get(x_946, 1);
lean_inc(x_950);
lean_dec(x_946);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_951 = l_Lean_Elab_Term_ensureHasType(x_5, x_949, x_883, x_10, x_11, x_12, x_13, x_14, x_15, x_950);
if (lean_obj_tag(x_951) == 0)
{
lean_object* x_952; lean_object* x_953; 
lean_dec(x_887);
x_952 = lean_ctor_get(x_951, 0);
lean_inc(x_952);
x_953 = lean_ctor_get(x_951, 1);
lean_inc(x_953);
lean_dec(x_951);
x_920 = x_952;
x_921 = x_953;
goto block_942;
}
else
{
lean_object* x_954; lean_object* x_955; 
x_954 = lean_ctor_get(x_951, 0);
lean_inc(x_954);
x_955 = lean_ctor_get(x_951, 1);
lean_inc(x_955);
lean_dec(x_951);
x_888 = x_954;
x_889 = x_955;
goto block_919;
}
}
}
else
{
lean_object* x_956; lean_object* x_957; 
lean_dec(x_5);
x_956 = lean_ctor_get(x_946, 0);
lean_inc(x_956);
x_957 = lean_ctor_get(x_946, 1);
lean_inc(x_957);
lean_dec(x_946);
x_888 = x_956;
x_889 = x_957;
goto block_919;
}
}
else
{
lean_object* x_958; lean_object* x_959; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_958 = lean_ctor_get(x_943, 0);
lean_inc(x_958);
x_959 = lean_ctor_get(x_943, 1);
lean_inc(x_959);
lean_dec(x_943);
x_888 = x_958;
x_889 = x_959;
goto block_919;
}
block_919:
{
if (lean_obj_tag(x_888) == 0)
{
lean_object* x_890; uint8_t x_891; 
lean_dec(x_887);
x_890 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_889);
x_891 = !lean_is_exclusive(x_890);
if (x_891 == 0)
{
lean_object* x_892; lean_object* x_893; lean_object* x_894; uint8_t x_895; 
x_892 = lean_ctor_get(x_890, 0);
x_893 = lean_ctor_get(x_890, 1);
x_894 = l_Lean_Elab_Term_SavedState_restore(x_885, x_10, x_11, x_12, x_13, x_14, x_15, x_893);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_895 = !lean_is_exclusive(x_894);
if (x_895 == 0)
{
lean_object* x_896; lean_object* x_897; lean_object* x_898; 
x_896 = lean_ctor_get(x_894, 1);
x_897 = lean_ctor_get(x_894, 0);
lean_dec(x_897);
lean_ctor_set_tag(x_894, 1);
lean_ctor_set(x_894, 1, x_892);
lean_ctor_set(x_894, 0, x_888);
x_898 = lean_array_push(x_9, x_894);
lean_ctor_set(x_890, 1, x_896);
lean_ctor_set(x_890, 0, x_898);
return x_890;
}
else
{
lean_object* x_899; lean_object* x_900; lean_object* x_901; 
x_899 = lean_ctor_get(x_894, 1);
lean_inc(x_899);
lean_dec(x_894);
x_900 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_900, 0, x_888);
lean_ctor_set(x_900, 1, x_892);
x_901 = lean_array_push(x_9, x_900);
lean_ctor_set(x_890, 1, x_899);
lean_ctor_set(x_890, 0, x_901);
return x_890;
}
}
else
{
lean_object* x_902; lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; 
x_902 = lean_ctor_get(x_890, 0);
x_903 = lean_ctor_get(x_890, 1);
lean_inc(x_903);
lean_inc(x_902);
lean_dec(x_890);
x_904 = l_Lean_Elab_Term_SavedState_restore(x_885, x_10, x_11, x_12, x_13, x_14, x_15, x_903);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_905 = lean_ctor_get(x_904, 1);
lean_inc(x_905);
if (lean_is_exclusive(x_904)) {
 lean_ctor_release(x_904, 0);
 lean_ctor_release(x_904, 1);
 x_906 = x_904;
} else {
 lean_dec_ref(x_904);
 x_906 = lean_box(0);
}
if (lean_is_scalar(x_906)) {
 x_907 = lean_alloc_ctor(1, 2, 0);
} else {
 x_907 = x_906;
 lean_ctor_set_tag(x_907, 1);
}
lean_ctor_set(x_907, 0, x_888);
lean_ctor_set(x_907, 1, x_902);
x_908 = lean_array_push(x_9, x_907);
x_909 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_909, 0, x_908);
lean_ctor_set(x_909, 1, x_905);
return x_909;
}
}
else
{
lean_object* x_910; lean_object* x_911; uint8_t x_912; 
lean_dec(x_9);
x_910 = lean_ctor_get(x_888, 0);
lean_inc(x_910);
x_911 = l_Lean_Elab_postponeExceptionId;
x_912 = lean_nat_dec_eq(x_910, x_911);
lean_dec(x_910);
if (x_912 == 0)
{
lean_object* x_913; 
lean_dec(x_885);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_887)) {
 x_913 = lean_alloc_ctor(1, 2, 0);
} else {
 x_913 = x_887;
 lean_ctor_set_tag(x_913, 1);
}
lean_ctor_set(x_913, 0, x_888);
lean_ctor_set(x_913, 1, x_889);
return x_913;
}
else
{
lean_object* x_914; uint8_t x_915; 
lean_dec(x_887);
x_914 = l_Lean_Elab_Term_SavedState_restore(x_885, x_10, x_11, x_12, x_13, x_14, x_15, x_889);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_915 = !lean_is_exclusive(x_914);
if (x_915 == 0)
{
lean_object* x_916; 
x_916 = lean_ctor_get(x_914, 0);
lean_dec(x_916);
lean_ctor_set_tag(x_914, 1);
lean_ctor_set(x_914, 0, x_888);
return x_914;
}
else
{
lean_object* x_917; lean_object* x_918; 
x_917 = lean_ctor_get(x_914, 1);
lean_inc(x_917);
lean_dec(x_914);
x_918 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_918, 0, x_888);
lean_ctor_set(x_918, 1, x_917);
return x_918;
}
}
}
}
block_942:
{
lean_object* x_922; uint8_t x_923; 
x_922 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_921);
x_923 = !lean_is_exclusive(x_922);
if (x_923 == 0)
{
lean_object* x_924; lean_object* x_925; lean_object* x_926; uint8_t x_927; 
x_924 = lean_ctor_get(x_922, 0);
x_925 = lean_ctor_get(x_922, 1);
x_926 = l_Lean_Elab_Term_SavedState_restore(x_885, x_10, x_11, x_12, x_13, x_14, x_15, x_925);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_927 = !lean_is_exclusive(x_926);
if (x_927 == 0)
{
lean_object* x_928; lean_object* x_929; lean_object* x_930; 
x_928 = lean_ctor_get(x_926, 1);
x_929 = lean_ctor_get(x_926, 0);
lean_dec(x_929);
lean_ctor_set(x_926, 1, x_924);
lean_ctor_set(x_926, 0, x_920);
x_930 = lean_array_push(x_9, x_926);
lean_ctor_set(x_922, 1, x_928);
lean_ctor_set(x_922, 0, x_930);
return x_922;
}
else
{
lean_object* x_931; lean_object* x_932; lean_object* x_933; 
x_931 = lean_ctor_get(x_926, 1);
lean_inc(x_931);
lean_dec(x_926);
x_932 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_932, 0, x_920);
lean_ctor_set(x_932, 1, x_924);
x_933 = lean_array_push(x_9, x_932);
lean_ctor_set(x_922, 1, x_931);
lean_ctor_set(x_922, 0, x_933);
return x_922;
}
}
else
{
lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; 
x_934 = lean_ctor_get(x_922, 0);
x_935 = lean_ctor_get(x_922, 1);
lean_inc(x_935);
lean_inc(x_934);
lean_dec(x_922);
x_936 = l_Lean_Elab_Term_SavedState_restore(x_885, x_10, x_11, x_12, x_13, x_14, x_15, x_935);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_937 = lean_ctor_get(x_936, 1);
lean_inc(x_937);
if (lean_is_exclusive(x_936)) {
 lean_ctor_release(x_936, 0);
 lean_ctor_release(x_936, 1);
 x_938 = x_936;
} else {
 lean_dec_ref(x_936);
 x_938 = lean_box(0);
}
if (lean_is_scalar(x_938)) {
 x_939 = lean_alloc_ctor(0, 2, 0);
} else {
 x_939 = x_938;
}
lean_ctor_set(x_939, 0, x_920);
lean_ctor_set(x_939, 1, x_934);
x_940 = lean_array_push(x_9, x_939);
x_941 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_941, 0, x_940);
lean_ctor_set(x_941, 1, x_937);
return x_941;
}
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (x_8 == 0)
{
lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; uint8_t x_987; lean_object* x_988; 
x_960 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_961 = lean_ctor_get(x_960, 0);
lean_inc(x_961);
x_962 = lean_ctor_get(x_960, 1);
lean_inc(x_962);
if (lean_is_exclusive(x_960)) {
 lean_ctor_release(x_960, 0);
 lean_ctor_release(x_960, 1);
 x_963 = x_960;
} else {
 lean_dec_ref(x_960);
 x_963 = lean_box(0);
}
x_987 = 1;
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_988 = l_Lean_Elab_Term_elabTerm(x_1, x_5, x_987, x_10, x_11, x_12, x_13, x_14, x_15, x_962);
if (lean_obj_tag(x_988) == 0)
{
lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; uint8_t x_995; 
lean_dec(x_963);
x_989 = lean_ctor_get(x_988, 0);
lean_inc(x_989);
x_990 = lean_ctor_get(x_988, 1);
lean_inc(x_990);
lean_dec(x_988);
x_991 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_990);
x_992 = lean_ctor_get(x_991, 0);
lean_inc(x_992);
x_993 = lean_ctor_get(x_991, 1);
lean_inc(x_993);
lean_dec(x_991);
x_994 = l_Lean_Elab_Term_SavedState_restore(x_961, x_10, x_11, x_12, x_13, x_14, x_15, x_993);
x_995 = !lean_is_exclusive(x_994);
if (x_995 == 0)
{
lean_object* x_996; lean_object* x_997; lean_object* x_998; 
x_996 = lean_ctor_get(x_994, 1);
x_997 = lean_ctor_get(x_994, 0);
lean_dec(x_997);
lean_ctor_set(x_994, 1, x_992);
lean_ctor_set(x_994, 0, x_989);
x_998 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_994, x_10, x_11, x_12, x_13, x_14, x_15, x_996);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_998;
}
else
{
lean_object* x_999; lean_object* x_1000; lean_object* x_1001; 
x_999 = lean_ctor_get(x_994, 1);
lean_inc(x_999);
lean_dec(x_994);
x_1000 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1000, 0, x_989);
lean_ctor_set(x_1000, 1, x_992);
x_1001 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1000, x_10, x_11, x_12, x_13, x_14, x_15, x_999);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1001;
}
}
else
{
lean_object* x_1002; lean_object* x_1003; 
x_1002 = lean_ctor_get(x_988, 0);
lean_inc(x_1002);
x_1003 = lean_ctor_get(x_988, 1);
lean_inc(x_1003);
lean_dec(x_988);
x_964 = x_1002;
x_965 = x_1003;
goto block_986;
}
block_986:
{
if (lean_obj_tag(x_964) == 0)
{
lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; uint8_t x_970; 
lean_dec(x_963);
x_966 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_965);
x_967 = lean_ctor_get(x_966, 0);
lean_inc(x_967);
x_968 = lean_ctor_get(x_966, 1);
lean_inc(x_968);
lean_dec(x_966);
x_969 = l_Lean_Elab_Term_SavedState_restore(x_961, x_10, x_11, x_12, x_13, x_14, x_15, x_968);
x_970 = !lean_is_exclusive(x_969);
if (x_970 == 0)
{
lean_object* x_971; lean_object* x_972; lean_object* x_973; 
x_971 = lean_ctor_get(x_969, 1);
x_972 = lean_ctor_get(x_969, 0);
lean_dec(x_972);
lean_ctor_set_tag(x_969, 1);
lean_ctor_set(x_969, 1, x_967);
lean_ctor_set(x_969, 0, x_964);
x_973 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_969, x_10, x_11, x_12, x_13, x_14, x_15, x_971);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_973;
}
else
{
lean_object* x_974; lean_object* x_975; lean_object* x_976; 
x_974 = lean_ctor_get(x_969, 1);
lean_inc(x_974);
lean_dec(x_969);
x_975 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_975, 0, x_964);
lean_ctor_set(x_975, 1, x_967);
x_976 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_975, x_10, x_11, x_12, x_13, x_14, x_15, x_974);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_976;
}
}
else
{
lean_object* x_977; lean_object* x_978; uint8_t x_979; 
lean_dec(x_9);
x_977 = lean_ctor_get(x_964, 0);
lean_inc(x_977);
x_978 = l_Lean_Elab_postponeExceptionId;
x_979 = lean_nat_dec_eq(x_977, x_978);
lean_dec(x_977);
if (x_979 == 0)
{
lean_object* x_980; 
lean_dec(x_961);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_963)) {
 x_980 = lean_alloc_ctor(1, 2, 0);
} else {
 x_980 = x_963;
 lean_ctor_set_tag(x_980, 1);
}
lean_ctor_set(x_980, 0, x_964);
lean_ctor_set(x_980, 1, x_965);
return x_980;
}
else
{
lean_object* x_981; uint8_t x_982; 
lean_dec(x_963);
x_981 = l_Lean_Elab_Term_SavedState_restore(x_961, x_10, x_11, x_12, x_13, x_14, x_15, x_965);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_982 = !lean_is_exclusive(x_981);
if (x_982 == 0)
{
lean_object* x_983; 
x_983 = lean_ctor_get(x_981, 0);
lean_dec(x_983);
lean_ctor_set_tag(x_981, 1);
lean_ctor_set(x_981, 0, x_964);
return x_981;
}
else
{
lean_object* x_984; lean_object* x_985; 
x_984 = lean_ctor_get(x_981, 1);
lean_inc(x_984);
lean_dec(x_981);
x_985 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_985, 0, x_964);
lean_ctor_set(x_985, 1, x_984);
return x_985;
}
}
}
}
}
else
{
lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1032; 
x_1004 = lean_box(0);
x_1005 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_1006 = lean_ctor_get(x_1005, 0);
lean_inc(x_1006);
x_1007 = lean_ctor_get(x_1005, 1);
lean_inc(x_1007);
if (lean_is_exclusive(x_1005)) {
 lean_ctor_release(x_1005, 0);
 lean_ctor_release(x_1005, 1);
 x_1008 = x_1005;
} else {
 lean_dec_ref(x_1005);
 x_1008 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_1032 = l_Lean_Elab_Term_elabTermEnsuringType(x_1, x_5, x_726, x_1004, x_10, x_11, x_12, x_13, x_14, x_15, x_1007);
if (lean_obj_tag(x_1032) == 0)
{
lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; uint8_t x_1039; 
lean_dec(x_1008);
x_1033 = lean_ctor_get(x_1032, 0);
lean_inc(x_1033);
x_1034 = lean_ctor_get(x_1032, 1);
lean_inc(x_1034);
lean_dec(x_1032);
x_1035 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1034);
x_1036 = lean_ctor_get(x_1035, 0);
lean_inc(x_1036);
x_1037 = lean_ctor_get(x_1035, 1);
lean_inc(x_1037);
lean_dec(x_1035);
x_1038 = l_Lean_Elab_Term_SavedState_restore(x_1006, x_10, x_11, x_12, x_13, x_14, x_15, x_1037);
x_1039 = !lean_is_exclusive(x_1038);
if (x_1039 == 0)
{
lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; 
x_1040 = lean_ctor_get(x_1038, 1);
x_1041 = lean_ctor_get(x_1038, 0);
lean_dec(x_1041);
lean_ctor_set(x_1038, 1, x_1036);
lean_ctor_set(x_1038, 0, x_1033);
x_1042 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1038, x_10, x_11, x_12, x_13, x_14, x_15, x_1040);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1042;
}
else
{
lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; 
x_1043 = lean_ctor_get(x_1038, 1);
lean_inc(x_1043);
lean_dec(x_1038);
x_1044 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1044, 0, x_1033);
lean_ctor_set(x_1044, 1, x_1036);
x_1045 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1044, x_10, x_11, x_12, x_13, x_14, x_15, x_1043);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1045;
}
}
else
{
lean_object* x_1046; lean_object* x_1047; 
x_1046 = lean_ctor_get(x_1032, 0);
lean_inc(x_1046);
x_1047 = lean_ctor_get(x_1032, 1);
lean_inc(x_1047);
lean_dec(x_1032);
x_1009 = x_1046;
x_1010 = x_1047;
goto block_1031;
}
block_1031:
{
if (lean_obj_tag(x_1009) == 0)
{
lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; uint8_t x_1015; 
lean_dec(x_1008);
x_1011 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1010);
x_1012 = lean_ctor_get(x_1011, 0);
lean_inc(x_1012);
x_1013 = lean_ctor_get(x_1011, 1);
lean_inc(x_1013);
lean_dec(x_1011);
x_1014 = l_Lean_Elab_Term_SavedState_restore(x_1006, x_10, x_11, x_12, x_13, x_14, x_15, x_1013);
x_1015 = !lean_is_exclusive(x_1014);
if (x_1015 == 0)
{
lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; 
x_1016 = lean_ctor_get(x_1014, 1);
x_1017 = lean_ctor_get(x_1014, 0);
lean_dec(x_1017);
lean_ctor_set_tag(x_1014, 1);
lean_ctor_set(x_1014, 1, x_1012);
lean_ctor_set(x_1014, 0, x_1009);
x_1018 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1014, x_10, x_11, x_12, x_13, x_14, x_15, x_1016);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1018;
}
else
{
lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; 
x_1019 = lean_ctor_get(x_1014, 1);
lean_inc(x_1019);
lean_dec(x_1014);
x_1020 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1020, 0, x_1009);
lean_ctor_set(x_1020, 1, x_1012);
x_1021 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1020, x_10, x_11, x_12, x_13, x_14, x_15, x_1019);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1021;
}
}
else
{
lean_object* x_1022; lean_object* x_1023; uint8_t x_1024; 
lean_dec(x_9);
x_1022 = lean_ctor_get(x_1009, 0);
lean_inc(x_1022);
x_1023 = l_Lean_Elab_postponeExceptionId;
x_1024 = lean_nat_dec_eq(x_1022, x_1023);
lean_dec(x_1022);
if (x_1024 == 0)
{
lean_object* x_1025; 
lean_dec(x_1006);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_1008)) {
 x_1025 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1025 = x_1008;
 lean_ctor_set_tag(x_1025, 1);
}
lean_ctor_set(x_1025, 0, x_1009);
lean_ctor_set(x_1025, 1, x_1010);
return x_1025;
}
else
{
lean_object* x_1026; uint8_t x_1027; 
lean_dec(x_1008);
x_1026 = l_Lean_Elab_Term_SavedState_restore(x_1006, x_10, x_11, x_12, x_13, x_14, x_15, x_1010);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1027 = !lean_is_exclusive(x_1026);
if (x_1027 == 0)
{
lean_object* x_1028; 
x_1028 = lean_ctor_get(x_1026, 0);
lean_dec(x_1028);
lean_ctor_set_tag(x_1026, 1);
lean_ctor_set(x_1026, 0, x_1009);
return x_1026;
}
else
{
lean_object* x_1029; lean_object* x_1030; 
x_1029 = lean_ctor_get(x_1026, 1);
lean_inc(x_1029);
lean_dec(x_1026);
x_1030 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1030, 0, x_1009);
lean_ctor_set(x_1030, 1, x_1029);
return x_1030;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_1051; lean_object* x_1052; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1051 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__6;
x_1052 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__1(x_1051, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_1052;
}
}
}
else
{
lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; 
x_1053 = lean_unsigned_to_nat(0u);
x_1054 = l_Lean_Syntax_getArg(x_1, x_1053);
x_1055 = lean_unsigned_to_nat(1u);
x_1056 = l_Lean_Syntax_getArg(x_1, x_1055);
x_1057 = lean_unsigned_to_nat(2u);
x_1058 = l_Lean_Syntax_getArg(x_1, x_1057);
lean_dec(x_1);
x_1059 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1059, 0, x_1056);
lean_ctor_set(x_1059, 1, x_1058);
x_1060 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1060, 0, x_1059);
lean_ctor_set(x_1060, 1, x_2);
x_1 = x_1054;
x_2 = x_1060;
goto _start;
}
}
else
{
lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; 
x_1062 = lean_unsigned_to_nat(0u);
x_1063 = l_Lean_Syntax_getArg(x_1, x_1062);
x_1064 = lean_unsigned_to_nat(2u);
x_1065 = l_Lean_Syntax_getArg(x_1, x_1064);
lean_dec(x_1);
x_1066 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_14, x_15, x_16);
x_1067 = lean_ctor_get(x_1066, 0);
lean_inc(x_1067);
x_1068 = lean_ctor_get(x_1066, 1);
lean_inc(x_1068);
lean_dec(x_1066);
x_1069 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_1068);
x_1070 = lean_ctor_get(x_1069, 1);
lean_inc(x_1070);
lean_dec(x_1069);
x_1071 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_1070);
x_1072 = lean_ctor_get(x_1071, 1);
lean_inc(x_1072);
lean_dec(x_1071);
x_1073 = l_Array_empty___closed__1;
x_1074 = lean_array_push(x_1073, x_1063);
x_1075 = l_Lean_Name_toString___closed__1;
x_1076 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1076, 0, x_1067);
lean_ctor_set(x_1076, 1, x_1075);
x_1077 = lean_array_push(x_1074, x_1076);
x_1078 = lean_array_push(x_1077, x_1065);
x_1079 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1079, 0, x_20);
lean_ctor_set(x_1079, 1, x_1078);
x_1 = x_1079;
x_16 = x_1072;
goto _start;
}
}
else
{
lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; uint8_t x_1086; 
x_1081 = lean_unsigned_to_nat(0u);
x_1082 = l_Lean_Syntax_getArg(x_1, x_1081);
x_1083 = lean_unsigned_to_nat(2u);
x_1084 = l_Lean_Syntax_getArg(x_1, x_1083);
x_1085 = l_Lean_fieldIdxKind___closed__2;
lean_inc(x_1084);
x_1086 = l_Lean_Syntax_isOfKind(x_1084, x_1085);
if (x_1086 == 0)
{
lean_object* x_1087; uint8_t x_1088; 
x_1087 = l_Lean_identKind___closed__2;
lean_inc(x_1084);
x_1088 = l_Lean_Syntax_isOfKind(x_1084, x_1087);
if (x_1088 == 0)
{
uint8_t x_1089; uint8_t x_1090; 
lean_dec(x_1084);
lean_dec(x_1082);
x_1089 = l_List_isEmpty___rarg(x_2);
if (x_8 == 0)
{
uint8_t x_1413; 
x_1413 = 1;
x_1090 = x_1413;
goto block_1412;
}
else
{
uint8_t x_1414; 
x_1414 = 0;
x_1090 = x_1414;
goto block_1412;
}
block_1412:
{
if (x_1089 == 0)
{
lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1128; lean_object* x_1129; lean_object* x_1151; 
x_1091 = lean_box(0);
x_1092 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_1093 = lean_ctor_get(x_1092, 0);
lean_inc(x_1093);
x_1094 = lean_ctor_get(x_1092, 1);
lean_inc(x_1094);
if (lean_is_exclusive(x_1092)) {
 lean_ctor_release(x_1092, 0);
 lean_ctor_release(x_1092, 1);
 x_1095 = x_1092;
} else {
 lean_dec_ref(x_1092);
 x_1095 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_1151 = l_Lean_Elab_Term_elabTerm(x_1, x_1091, x_1090, x_10, x_11, x_12, x_13, x_14, x_15, x_1094);
if (lean_obj_tag(x_1151) == 0)
{
lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; 
x_1152 = lean_ctor_get(x_1151, 0);
lean_inc(x_1152);
x_1153 = lean_ctor_get(x_1151, 1);
lean_inc(x_1153);
lean_dec(x_1151);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_1154 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_1152, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_1153);
if (lean_obj_tag(x_1154) == 0)
{
if (x_8 == 0)
{
lean_object* x_1155; lean_object* x_1156; 
lean_dec(x_1095);
lean_dec(x_5);
x_1155 = lean_ctor_get(x_1154, 0);
lean_inc(x_1155);
x_1156 = lean_ctor_get(x_1154, 1);
lean_inc(x_1156);
lean_dec(x_1154);
x_1128 = x_1155;
x_1129 = x_1156;
goto block_1150;
}
else
{
lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; 
x_1157 = lean_ctor_get(x_1154, 0);
lean_inc(x_1157);
x_1158 = lean_ctor_get(x_1154, 1);
lean_inc(x_1158);
lean_dec(x_1154);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_1159 = l_Lean_Elab_Term_ensureHasType(x_5, x_1157, x_1091, x_10, x_11, x_12, x_13, x_14, x_15, x_1158);
if (lean_obj_tag(x_1159) == 0)
{
lean_object* x_1160; lean_object* x_1161; 
lean_dec(x_1095);
x_1160 = lean_ctor_get(x_1159, 0);
lean_inc(x_1160);
x_1161 = lean_ctor_get(x_1159, 1);
lean_inc(x_1161);
lean_dec(x_1159);
x_1128 = x_1160;
x_1129 = x_1161;
goto block_1150;
}
else
{
lean_object* x_1162; lean_object* x_1163; 
x_1162 = lean_ctor_get(x_1159, 0);
lean_inc(x_1162);
x_1163 = lean_ctor_get(x_1159, 1);
lean_inc(x_1163);
lean_dec(x_1159);
x_1096 = x_1162;
x_1097 = x_1163;
goto block_1127;
}
}
}
else
{
lean_object* x_1164; lean_object* x_1165; 
lean_dec(x_5);
x_1164 = lean_ctor_get(x_1154, 0);
lean_inc(x_1164);
x_1165 = lean_ctor_get(x_1154, 1);
lean_inc(x_1165);
lean_dec(x_1154);
x_1096 = x_1164;
x_1097 = x_1165;
goto block_1127;
}
}
else
{
lean_object* x_1166; lean_object* x_1167; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1166 = lean_ctor_get(x_1151, 0);
lean_inc(x_1166);
x_1167 = lean_ctor_get(x_1151, 1);
lean_inc(x_1167);
lean_dec(x_1151);
x_1096 = x_1166;
x_1097 = x_1167;
goto block_1127;
}
block_1127:
{
if (lean_obj_tag(x_1096) == 0)
{
lean_object* x_1098; uint8_t x_1099; 
lean_dec(x_1095);
x_1098 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1097);
x_1099 = !lean_is_exclusive(x_1098);
if (x_1099 == 0)
{
lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; uint8_t x_1103; 
x_1100 = lean_ctor_get(x_1098, 0);
x_1101 = lean_ctor_get(x_1098, 1);
x_1102 = l_Lean_Elab_Term_SavedState_restore(x_1093, x_10, x_11, x_12, x_13, x_14, x_15, x_1101);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1103 = !lean_is_exclusive(x_1102);
if (x_1103 == 0)
{
lean_object* x_1104; lean_object* x_1105; lean_object* x_1106; 
x_1104 = lean_ctor_get(x_1102, 1);
x_1105 = lean_ctor_get(x_1102, 0);
lean_dec(x_1105);
lean_ctor_set_tag(x_1102, 1);
lean_ctor_set(x_1102, 1, x_1100);
lean_ctor_set(x_1102, 0, x_1096);
x_1106 = lean_array_push(x_9, x_1102);
lean_ctor_set(x_1098, 1, x_1104);
lean_ctor_set(x_1098, 0, x_1106);
return x_1098;
}
else
{
lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; 
x_1107 = lean_ctor_get(x_1102, 1);
lean_inc(x_1107);
lean_dec(x_1102);
x_1108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1108, 0, x_1096);
lean_ctor_set(x_1108, 1, x_1100);
x_1109 = lean_array_push(x_9, x_1108);
lean_ctor_set(x_1098, 1, x_1107);
lean_ctor_set(x_1098, 0, x_1109);
return x_1098;
}
}
else
{
lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; 
x_1110 = lean_ctor_get(x_1098, 0);
x_1111 = lean_ctor_get(x_1098, 1);
lean_inc(x_1111);
lean_inc(x_1110);
lean_dec(x_1098);
x_1112 = l_Lean_Elab_Term_SavedState_restore(x_1093, x_10, x_11, x_12, x_13, x_14, x_15, x_1111);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1113 = lean_ctor_get(x_1112, 1);
lean_inc(x_1113);
if (lean_is_exclusive(x_1112)) {
 lean_ctor_release(x_1112, 0);
 lean_ctor_release(x_1112, 1);
 x_1114 = x_1112;
} else {
 lean_dec_ref(x_1112);
 x_1114 = lean_box(0);
}
if (lean_is_scalar(x_1114)) {
 x_1115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1115 = x_1114;
 lean_ctor_set_tag(x_1115, 1);
}
lean_ctor_set(x_1115, 0, x_1096);
lean_ctor_set(x_1115, 1, x_1110);
x_1116 = lean_array_push(x_9, x_1115);
x_1117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1117, 0, x_1116);
lean_ctor_set(x_1117, 1, x_1113);
return x_1117;
}
}
else
{
lean_object* x_1118; lean_object* x_1119; uint8_t x_1120; 
lean_dec(x_9);
x_1118 = lean_ctor_get(x_1096, 0);
lean_inc(x_1118);
x_1119 = l_Lean_Elab_postponeExceptionId;
x_1120 = lean_nat_dec_eq(x_1118, x_1119);
lean_dec(x_1118);
if (x_1120 == 0)
{
lean_object* x_1121; 
lean_dec(x_1093);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_1095)) {
 x_1121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1121 = x_1095;
 lean_ctor_set_tag(x_1121, 1);
}
lean_ctor_set(x_1121, 0, x_1096);
lean_ctor_set(x_1121, 1, x_1097);
return x_1121;
}
else
{
lean_object* x_1122; uint8_t x_1123; 
lean_dec(x_1095);
x_1122 = l_Lean_Elab_Term_SavedState_restore(x_1093, x_10, x_11, x_12, x_13, x_14, x_15, x_1097);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1123 = !lean_is_exclusive(x_1122);
if (x_1123 == 0)
{
lean_object* x_1124; 
x_1124 = lean_ctor_get(x_1122, 0);
lean_dec(x_1124);
lean_ctor_set_tag(x_1122, 1);
lean_ctor_set(x_1122, 0, x_1096);
return x_1122;
}
else
{
lean_object* x_1125; lean_object* x_1126; 
x_1125 = lean_ctor_get(x_1122, 1);
lean_inc(x_1125);
lean_dec(x_1122);
x_1126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1126, 0, x_1096);
lean_ctor_set(x_1126, 1, x_1125);
return x_1126;
}
}
}
}
block_1150:
{
lean_object* x_1130; uint8_t x_1131; 
x_1130 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1129);
x_1131 = !lean_is_exclusive(x_1130);
if (x_1131 == 0)
{
lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; uint8_t x_1135; 
x_1132 = lean_ctor_get(x_1130, 0);
x_1133 = lean_ctor_get(x_1130, 1);
x_1134 = l_Lean_Elab_Term_SavedState_restore(x_1093, x_10, x_11, x_12, x_13, x_14, x_15, x_1133);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1135 = !lean_is_exclusive(x_1134);
if (x_1135 == 0)
{
lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; 
x_1136 = lean_ctor_get(x_1134, 1);
x_1137 = lean_ctor_get(x_1134, 0);
lean_dec(x_1137);
lean_ctor_set(x_1134, 1, x_1132);
lean_ctor_set(x_1134, 0, x_1128);
x_1138 = lean_array_push(x_9, x_1134);
lean_ctor_set(x_1130, 1, x_1136);
lean_ctor_set(x_1130, 0, x_1138);
return x_1130;
}
else
{
lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; 
x_1139 = lean_ctor_get(x_1134, 1);
lean_inc(x_1139);
lean_dec(x_1134);
x_1140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1140, 0, x_1128);
lean_ctor_set(x_1140, 1, x_1132);
x_1141 = lean_array_push(x_9, x_1140);
lean_ctor_set(x_1130, 1, x_1139);
lean_ctor_set(x_1130, 0, x_1141);
return x_1130;
}
}
else
{
lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; 
x_1142 = lean_ctor_get(x_1130, 0);
x_1143 = lean_ctor_get(x_1130, 1);
lean_inc(x_1143);
lean_inc(x_1142);
lean_dec(x_1130);
x_1144 = l_Lean_Elab_Term_SavedState_restore(x_1093, x_10, x_11, x_12, x_13, x_14, x_15, x_1143);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1145 = lean_ctor_get(x_1144, 1);
lean_inc(x_1145);
if (lean_is_exclusive(x_1144)) {
 lean_ctor_release(x_1144, 0);
 lean_ctor_release(x_1144, 1);
 x_1146 = x_1144;
} else {
 lean_dec_ref(x_1144);
 x_1146 = lean_box(0);
}
if (lean_is_scalar(x_1146)) {
 x_1147 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1147 = x_1146;
}
lean_ctor_set(x_1147, 0, x_1128);
lean_ctor_set(x_1147, 1, x_1142);
x_1148 = lean_array_push(x_9, x_1147);
x_1149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1149, 0, x_1148);
lean_ctor_set(x_1149, 1, x_1145);
return x_1149;
}
}
}
else
{
uint8_t x_1168; 
x_1168 = l_Array_isEmpty___rarg(x_3);
if (x_1168 == 0)
{
lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; lean_object* x_1175; lean_object* x_1206; lean_object* x_1207; lean_object* x_1229; 
x_1169 = lean_box(0);
x_1170 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_1171 = lean_ctor_get(x_1170, 0);
lean_inc(x_1171);
x_1172 = lean_ctor_get(x_1170, 1);
lean_inc(x_1172);
if (lean_is_exclusive(x_1170)) {
 lean_ctor_release(x_1170, 0);
 lean_ctor_release(x_1170, 1);
 x_1173 = x_1170;
} else {
 lean_dec_ref(x_1170);
 x_1173 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_1229 = l_Lean_Elab_Term_elabTerm(x_1, x_1169, x_1090, x_10, x_11, x_12, x_13, x_14, x_15, x_1172);
if (lean_obj_tag(x_1229) == 0)
{
lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; 
x_1230 = lean_ctor_get(x_1229, 0);
lean_inc(x_1230);
x_1231 = lean_ctor_get(x_1229, 1);
lean_inc(x_1231);
lean_dec(x_1229);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_1232 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_1230, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_1231);
if (lean_obj_tag(x_1232) == 0)
{
if (x_8 == 0)
{
lean_object* x_1233; lean_object* x_1234; 
lean_dec(x_1173);
lean_dec(x_5);
x_1233 = lean_ctor_get(x_1232, 0);
lean_inc(x_1233);
x_1234 = lean_ctor_get(x_1232, 1);
lean_inc(x_1234);
lean_dec(x_1232);
x_1206 = x_1233;
x_1207 = x_1234;
goto block_1228;
}
else
{
lean_object* x_1235; lean_object* x_1236; lean_object* x_1237; 
x_1235 = lean_ctor_get(x_1232, 0);
lean_inc(x_1235);
x_1236 = lean_ctor_get(x_1232, 1);
lean_inc(x_1236);
lean_dec(x_1232);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_1237 = l_Lean_Elab_Term_ensureHasType(x_5, x_1235, x_1169, x_10, x_11, x_12, x_13, x_14, x_15, x_1236);
if (lean_obj_tag(x_1237) == 0)
{
lean_object* x_1238; lean_object* x_1239; 
lean_dec(x_1173);
x_1238 = lean_ctor_get(x_1237, 0);
lean_inc(x_1238);
x_1239 = lean_ctor_get(x_1237, 1);
lean_inc(x_1239);
lean_dec(x_1237);
x_1206 = x_1238;
x_1207 = x_1239;
goto block_1228;
}
else
{
lean_object* x_1240; lean_object* x_1241; 
x_1240 = lean_ctor_get(x_1237, 0);
lean_inc(x_1240);
x_1241 = lean_ctor_get(x_1237, 1);
lean_inc(x_1241);
lean_dec(x_1237);
x_1174 = x_1240;
x_1175 = x_1241;
goto block_1205;
}
}
}
else
{
lean_object* x_1242; lean_object* x_1243; 
lean_dec(x_5);
x_1242 = lean_ctor_get(x_1232, 0);
lean_inc(x_1242);
x_1243 = lean_ctor_get(x_1232, 1);
lean_inc(x_1243);
lean_dec(x_1232);
x_1174 = x_1242;
x_1175 = x_1243;
goto block_1205;
}
}
else
{
lean_object* x_1244; lean_object* x_1245; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1244 = lean_ctor_get(x_1229, 0);
lean_inc(x_1244);
x_1245 = lean_ctor_get(x_1229, 1);
lean_inc(x_1245);
lean_dec(x_1229);
x_1174 = x_1244;
x_1175 = x_1245;
goto block_1205;
}
block_1205:
{
if (lean_obj_tag(x_1174) == 0)
{
lean_object* x_1176; uint8_t x_1177; 
lean_dec(x_1173);
x_1176 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1175);
x_1177 = !lean_is_exclusive(x_1176);
if (x_1177 == 0)
{
lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; uint8_t x_1181; 
x_1178 = lean_ctor_get(x_1176, 0);
x_1179 = lean_ctor_get(x_1176, 1);
x_1180 = l_Lean_Elab_Term_SavedState_restore(x_1171, x_10, x_11, x_12, x_13, x_14, x_15, x_1179);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1181 = !lean_is_exclusive(x_1180);
if (x_1181 == 0)
{
lean_object* x_1182; lean_object* x_1183; lean_object* x_1184; 
x_1182 = lean_ctor_get(x_1180, 1);
x_1183 = lean_ctor_get(x_1180, 0);
lean_dec(x_1183);
lean_ctor_set_tag(x_1180, 1);
lean_ctor_set(x_1180, 1, x_1178);
lean_ctor_set(x_1180, 0, x_1174);
x_1184 = lean_array_push(x_9, x_1180);
lean_ctor_set(x_1176, 1, x_1182);
lean_ctor_set(x_1176, 0, x_1184);
return x_1176;
}
else
{
lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; 
x_1185 = lean_ctor_get(x_1180, 1);
lean_inc(x_1185);
lean_dec(x_1180);
x_1186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1186, 0, x_1174);
lean_ctor_set(x_1186, 1, x_1178);
x_1187 = lean_array_push(x_9, x_1186);
lean_ctor_set(x_1176, 1, x_1185);
lean_ctor_set(x_1176, 0, x_1187);
return x_1176;
}
}
else
{
lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; 
x_1188 = lean_ctor_get(x_1176, 0);
x_1189 = lean_ctor_get(x_1176, 1);
lean_inc(x_1189);
lean_inc(x_1188);
lean_dec(x_1176);
x_1190 = l_Lean_Elab_Term_SavedState_restore(x_1171, x_10, x_11, x_12, x_13, x_14, x_15, x_1189);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1191 = lean_ctor_get(x_1190, 1);
lean_inc(x_1191);
if (lean_is_exclusive(x_1190)) {
 lean_ctor_release(x_1190, 0);
 lean_ctor_release(x_1190, 1);
 x_1192 = x_1190;
} else {
 lean_dec_ref(x_1190);
 x_1192 = lean_box(0);
}
if (lean_is_scalar(x_1192)) {
 x_1193 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1193 = x_1192;
 lean_ctor_set_tag(x_1193, 1);
}
lean_ctor_set(x_1193, 0, x_1174);
lean_ctor_set(x_1193, 1, x_1188);
x_1194 = lean_array_push(x_9, x_1193);
x_1195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1195, 0, x_1194);
lean_ctor_set(x_1195, 1, x_1191);
return x_1195;
}
}
else
{
lean_object* x_1196; lean_object* x_1197; uint8_t x_1198; 
lean_dec(x_9);
x_1196 = lean_ctor_get(x_1174, 0);
lean_inc(x_1196);
x_1197 = l_Lean_Elab_postponeExceptionId;
x_1198 = lean_nat_dec_eq(x_1196, x_1197);
lean_dec(x_1196);
if (x_1198 == 0)
{
lean_object* x_1199; 
lean_dec(x_1171);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_1173)) {
 x_1199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1199 = x_1173;
 lean_ctor_set_tag(x_1199, 1);
}
lean_ctor_set(x_1199, 0, x_1174);
lean_ctor_set(x_1199, 1, x_1175);
return x_1199;
}
else
{
lean_object* x_1200; uint8_t x_1201; 
lean_dec(x_1173);
x_1200 = l_Lean_Elab_Term_SavedState_restore(x_1171, x_10, x_11, x_12, x_13, x_14, x_15, x_1175);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1201 = !lean_is_exclusive(x_1200);
if (x_1201 == 0)
{
lean_object* x_1202; 
x_1202 = lean_ctor_get(x_1200, 0);
lean_dec(x_1202);
lean_ctor_set_tag(x_1200, 1);
lean_ctor_set(x_1200, 0, x_1174);
return x_1200;
}
else
{
lean_object* x_1203; lean_object* x_1204; 
x_1203 = lean_ctor_get(x_1200, 1);
lean_inc(x_1203);
lean_dec(x_1200);
x_1204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1204, 0, x_1174);
lean_ctor_set(x_1204, 1, x_1203);
return x_1204;
}
}
}
}
block_1228:
{
lean_object* x_1208; uint8_t x_1209; 
x_1208 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1207);
x_1209 = !lean_is_exclusive(x_1208);
if (x_1209 == 0)
{
lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; uint8_t x_1213; 
x_1210 = lean_ctor_get(x_1208, 0);
x_1211 = lean_ctor_get(x_1208, 1);
x_1212 = l_Lean_Elab_Term_SavedState_restore(x_1171, x_10, x_11, x_12, x_13, x_14, x_15, x_1211);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1213 = !lean_is_exclusive(x_1212);
if (x_1213 == 0)
{
lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; 
x_1214 = lean_ctor_get(x_1212, 1);
x_1215 = lean_ctor_get(x_1212, 0);
lean_dec(x_1215);
lean_ctor_set(x_1212, 1, x_1210);
lean_ctor_set(x_1212, 0, x_1206);
x_1216 = lean_array_push(x_9, x_1212);
lean_ctor_set(x_1208, 1, x_1214);
lean_ctor_set(x_1208, 0, x_1216);
return x_1208;
}
else
{
lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; 
x_1217 = lean_ctor_get(x_1212, 1);
lean_inc(x_1217);
lean_dec(x_1212);
x_1218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1218, 0, x_1206);
lean_ctor_set(x_1218, 1, x_1210);
x_1219 = lean_array_push(x_9, x_1218);
lean_ctor_set(x_1208, 1, x_1217);
lean_ctor_set(x_1208, 0, x_1219);
return x_1208;
}
}
else
{
lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; 
x_1220 = lean_ctor_get(x_1208, 0);
x_1221 = lean_ctor_get(x_1208, 1);
lean_inc(x_1221);
lean_inc(x_1220);
lean_dec(x_1208);
x_1222 = l_Lean_Elab_Term_SavedState_restore(x_1171, x_10, x_11, x_12, x_13, x_14, x_15, x_1221);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1223 = lean_ctor_get(x_1222, 1);
lean_inc(x_1223);
if (lean_is_exclusive(x_1222)) {
 lean_ctor_release(x_1222, 0);
 lean_ctor_release(x_1222, 1);
 x_1224 = x_1222;
} else {
 lean_dec_ref(x_1222);
 x_1224 = lean_box(0);
}
if (lean_is_scalar(x_1224)) {
 x_1225 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1225 = x_1224;
}
lean_ctor_set(x_1225, 0, x_1206);
lean_ctor_set(x_1225, 1, x_1220);
x_1226 = lean_array_push(x_9, x_1225);
x_1227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1227, 0, x_1226);
lean_ctor_set(x_1227, 1, x_1223);
return x_1227;
}
}
}
else
{
uint8_t x_1246; 
x_1246 = l_Array_isEmpty___rarg(x_4);
if (x_1246 == 0)
{
lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; lean_object* x_1284; lean_object* x_1285; lean_object* x_1307; 
x_1247 = lean_box(0);
x_1248 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_1249 = lean_ctor_get(x_1248, 0);
lean_inc(x_1249);
x_1250 = lean_ctor_get(x_1248, 1);
lean_inc(x_1250);
if (lean_is_exclusive(x_1248)) {
 lean_ctor_release(x_1248, 0);
 lean_ctor_release(x_1248, 1);
 x_1251 = x_1248;
} else {
 lean_dec_ref(x_1248);
 x_1251 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_1307 = l_Lean_Elab_Term_elabTerm(x_1, x_1247, x_1090, x_10, x_11, x_12, x_13, x_14, x_15, x_1250);
if (lean_obj_tag(x_1307) == 0)
{
lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; 
x_1308 = lean_ctor_get(x_1307, 0);
lean_inc(x_1308);
x_1309 = lean_ctor_get(x_1307, 1);
lean_inc(x_1309);
lean_dec(x_1307);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_1310 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals(x_1308, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12, x_13, x_14, x_15, x_1309);
if (lean_obj_tag(x_1310) == 0)
{
if (x_8 == 0)
{
lean_object* x_1311; lean_object* x_1312; 
lean_dec(x_1251);
lean_dec(x_5);
x_1311 = lean_ctor_get(x_1310, 0);
lean_inc(x_1311);
x_1312 = lean_ctor_get(x_1310, 1);
lean_inc(x_1312);
lean_dec(x_1310);
x_1284 = x_1311;
x_1285 = x_1312;
goto block_1306;
}
else
{
lean_object* x_1313; lean_object* x_1314; lean_object* x_1315; 
x_1313 = lean_ctor_get(x_1310, 0);
lean_inc(x_1313);
x_1314 = lean_ctor_get(x_1310, 1);
lean_inc(x_1314);
lean_dec(x_1310);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_1315 = l_Lean_Elab_Term_ensureHasType(x_5, x_1313, x_1247, x_10, x_11, x_12, x_13, x_14, x_15, x_1314);
if (lean_obj_tag(x_1315) == 0)
{
lean_object* x_1316; lean_object* x_1317; 
lean_dec(x_1251);
x_1316 = lean_ctor_get(x_1315, 0);
lean_inc(x_1316);
x_1317 = lean_ctor_get(x_1315, 1);
lean_inc(x_1317);
lean_dec(x_1315);
x_1284 = x_1316;
x_1285 = x_1317;
goto block_1306;
}
else
{
lean_object* x_1318; lean_object* x_1319; 
x_1318 = lean_ctor_get(x_1315, 0);
lean_inc(x_1318);
x_1319 = lean_ctor_get(x_1315, 1);
lean_inc(x_1319);
lean_dec(x_1315);
x_1252 = x_1318;
x_1253 = x_1319;
goto block_1283;
}
}
}
else
{
lean_object* x_1320; lean_object* x_1321; 
lean_dec(x_5);
x_1320 = lean_ctor_get(x_1310, 0);
lean_inc(x_1320);
x_1321 = lean_ctor_get(x_1310, 1);
lean_inc(x_1321);
lean_dec(x_1310);
x_1252 = x_1320;
x_1253 = x_1321;
goto block_1283;
}
}
else
{
lean_object* x_1322; lean_object* x_1323; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1322 = lean_ctor_get(x_1307, 0);
lean_inc(x_1322);
x_1323 = lean_ctor_get(x_1307, 1);
lean_inc(x_1323);
lean_dec(x_1307);
x_1252 = x_1322;
x_1253 = x_1323;
goto block_1283;
}
block_1283:
{
if (lean_obj_tag(x_1252) == 0)
{
lean_object* x_1254; uint8_t x_1255; 
lean_dec(x_1251);
x_1254 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1253);
x_1255 = !lean_is_exclusive(x_1254);
if (x_1255 == 0)
{
lean_object* x_1256; lean_object* x_1257; lean_object* x_1258; uint8_t x_1259; 
x_1256 = lean_ctor_get(x_1254, 0);
x_1257 = lean_ctor_get(x_1254, 1);
x_1258 = l_Lean_Elab_Term_SavedState_restore(x_1249, x_10, x_11, x_12, x_13, x_14, x_15, x_1257);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1259 = !lean_is_exclusive(x_1258);
if (x_1259 == 0)
{
lean_object* x_1260; lean_object* x_1261; lean_object* x_1262; 
x_1260 = lean_ctor_get(x_1258, 1);
x_1261 = lean_ctor_get(x_1258, 0);
lean_dec(x_1261);
lean_ctor_set_tag(x_1258, 1);
lean_ctor_set(x_1258, 1, x_1256);
lean_ctor_set(x_1258, 0, x_1252);
x_1262 = lean_array_push(x_9, x_1258);
lean_ctor_set(x_1254, 1, x_1260);
lean_ctor_set(x_1254, 0, x_1262);
return x_1254;
}
else
{
lean_object* x_1263; lean_object* x_1264; lean_object* x_1265; 
x_1263 = lean_ctor_get(x_1258, 1);
lean_inc(x_1263);
lean_dec(x_1258);
x_1264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1264, 0, x_1252);
lean_ctor_set(x_1264, 1, x_1256);
x_1265 = lean_array_push(x_9, x_1264);
lean_ctor_set(x_1254, 1, x_1263);
lean_ctor_set(x_1254, 0, x_1265);
return x_1254;
}
}
else
{
lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; 
x_1266 = lean_ctor_get(x_1254, 0);
x_1267 = lean_ctor_get(x_1254, 1);
lean_inc(x_1267);
lean_inc(x_1266);
lean_dec(x_1254);
x_1268 = l_Lean_Elab_Term_SavedState_restore(x_1249, x_10, x_11, x_12, x_13, x_14, x_15, x_1267);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1269 = lean_ctor_get(x_1268, 1);
lean_inc(x_1269);
if (lean_is_exclusive(x_1268)) {
 lean_ctor_release(x_1268, 0);
 lean_ctor_release(x_1268, 1);
 x_1270 = x_1268;
} else {
 lean_dec_ref(x_1268);
 x_1270 = lean_box(0);
}
if (lean_is_scalar(x_1270)) {
 x_1271 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1271 = x_1270;
 lean_ctor_set_tag(x_1271, 1);
}
lean_ctor_set(x_1271, 0, x_1252);
lean_ctor_set(x_1271, 1, x_1266);
x_1272 = lean_array_push(x_9, x_1271);
x_1273 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1273, 0, x_1272);
lean_ctor_set(x_1273, 1, x_1269);
return x_1273;
}
}
else
{
lean_object* x_1274; lean_object* x_1275; uint8_t x_1276; 
lean_dec(x_9);
x_1274 = lean_ctor_get(x_1252, 0);
lean_inc(x_1274);
x_1275 = l_Lean_Elab_postponeExceptionId;
x_1276 = lean_nat_dec_eq(x_1274, x_1275);
lean_dec(x_1274);
if (x_1276 == 0)
{
lean_object* x_1277; 
lean_dec(x_1249);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_1251)) {
 x_1277 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1277 = x_1251;
 lean_ctor_set_tag(x_1277, 1);
}
lean_ctor_set(x_1277, 0, x_1252);
lean_ctor_set(x_1277, 1, x_1253);
return x_1277;
}
else
{
lean_object* x_1278; uint8_t x_1279; 
lean_dec(x_1251);
x_1278 = l_Lean_Elab_Term_SavedState_restore(x_1249, x_10, x_11, x_12, x_13, x_14, x_15, x_1253);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1279 = !lean_is_exclusive(x_1278);
if (x_1279 == 0)
{
lean_object* x_1280; 
x_1280 = lean_ctor_get(x_1278, 0);
lean_dec(x_1280);
lean_ctor_set_tag(x_1278, 1);
lean_ctor_set(x_1278, 0, x_1252);
return x_1278;
}
else
{
lean_object* x_1281; lean_object* x_1282; 
x_1281 = lean_ctor_get(x_1278, 1);
lean_inc(x_1281);
lean_dec(x_1278);
x_1282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1282, 0, x_1252);
lean_ctor_set(x_1282, 1, x_1281);
return x_1282;
}
}
}
}
block_1306:
{
lean_object* x_1286; uint8_t x_1287; 
x_1286 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1285);
x_1287 = !lean_is_exclusive(x_1286);
if (x_1287 == 0)
{
lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; uint8_t x_1291; 
x_1288 = lean_ctor_get(x_1286, 0);
x_1289 = lean_ctor_get(x_1286, 1);
x_1290 = l_Lean_Elab_Term_SavedState_restore(x_1249, x_10, x_11, x_12, x_13, x_14, x_15, x_1289);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1291 = !lean_is_exclusive(x_1290);
if (x_1291 == 0)
{
lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; 
x_1292 = lean_ctor_get(x_1290, 1);
x_1293 = lean_ctor_get(x_1290, 0);
lean_dec(x_1293);
lean_ctor_set(x_1290, 1, x_1288);
lean_ctor_set(x_1290, 0, x_1284);
x_1294 = lean_array_push(x_9, x_1290);
lean_ctor_set(x_1286, 1, x_1292);
lean_ctor_set(x_1286, 0, x_1294);
return x_1286;
}
else
{
lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; 
x_1295 = lean_ctor_get(x_1290, 1);
lean_inc(x_1295);
lean_dec(x_1290);
x_1296 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1296, 0, x_1284);
lean_ctor_set(x_1296, 1, x_1288);
x_1297 = lean_array_push(x_9, x_1296);
lean_ctor_set(x_1286, 1, x_1295);
lean_ctor_set(x_1286, 0, x_1297);
return x_1286;
}
}
else
{
lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; lean_object* x_1304; lean_object* x_1305; 
x_1298 = lean_ctor_get(x_1286, 0);
x_1299 = lean_ctor_get(x_1286, 1);
lean_inc(x_1299);
lean_inc(x_1298);
lean_dec(x_1286);
x_1300 = l_Lean_Elab_Term_SavedState_restore(x_1249, x_10, x_11, x_12, x_13, x_14, x_15, x_1299);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1301 = lean_ctor_get(x_1300, 1);
lean_inc(x_1301);
if (lean_is_exclusive(x_1300)) {
 lean_ctor_release(x_1300, 0);
 lean_ctor_release(x_1300, 1);
 x_1302 = x_1300;
} else {
 lean_dec_ref(x_1300);
 x_1302 = lean_box(0);
}
if (lean_is_scalar(x_1302)) {
 x_1303 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1303 = x_1302;
}
lean_ctor_set(x_1303, 0, x_1284);
lean_ctor_set(x_1303, 1, x_1298);
x_1304 = lean_array_push(x_9, x_1303);
x_1305 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1305, 0, x_1304);
lean_ctor_set(x_1305, 1, x_1301);
return x_1305;
}
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (x_8 == 0)
{
lean_object* x_1324; lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; uint8_t x_1351; lean_object* x_1352; 
x_1324 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_1325 = lean_ctor_get(x_1324, 0);
lean_inc(x_1325);
x_1326 = lean_ctor_get(x_1324, 1);
lean_inc(x_1326);
if (lean_is_exclusive(x_1324)) {
 lean_ctor_release(x_1324, 0);
 lean_ctor_release(x_1324, 1);
 x_1327 = x_1324;
} else {
 lean_dec_ref(x_1324);
 x_1327 = lean_box(0);
}
x_1351 = 1;
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_1352 = l_Lean_Elab_Term_elabTerm(x_1, x_5, x_1351, x_10, x_11, x_12, x_13, x_14, x_15, x_1326);
if (lean_obj_tag(x_1352) == 0)
{
lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; lean_object* x_1357; lean_object* x_1358; uint8_t x_1359; 
lean_dec(x_1327);
x_1353 = lean_ctor_get(x_1352, 0);
lean_inc(x_1353);
x_1354 = lean_ctor_get(x_1352, 1);
lean_inc(x_1354);
lean_dec(x_1352);
x_1355 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1354);
x_1356 = lean_ctor_get(x_1355, 0);
lean_inc(x_1356);
x_1357 = lean_ctor_get(x_1355, 1);
lean_inc(x_1357);
lean_dec(x_1355);
x_1358 = l_Lean_Elab_Term_SavedState_restore(x_1325, x_10, x_11, x_12, x_13, x_14, x_15, x_1357);
x_1359 = !lean_is_exclusive(x_1358);
if (x_1359 == 0)
{
lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; 
x_1360 = lean_ctor_get(x_1358, 1);
x_1361 = lean_ctor_get(x_1358, 0);
lean_dec(x_1361);
lean_ctor_set(x_1358, 1, x_1356);
lean_ctor_set(x_1358, 0, x_1353);
x_1362 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1358, x_10, x_11, x_12, x_13, x_14, x_15, x_1360);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1362;
}
else
{
lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; 
x_1363 = lean_ctor_get(x_1358, 1);
lean_inc(x_1363);
lean_dec(x_1358);
x_1364 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1364, 0, x_1353);
lean_ctor_set(x_1364, 1, x_1356);
x_1365 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1364, x_10, x_11, x_12, x_13, x_14, x_15, x_1363);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1365;
}
}
else
{
lean_object* x_1366; lean_object* x_1367; 
x_1366 = lean_ctor_get(x_1352, 0);
lean_inc(x_1366);
x_1367 = lean_ctor_get(x_1352, 1);
lean_inc(x_1367);
lean_dec(x_1352);
x_1328 = x_1366;
x_1329 = x_1367;
goto block_1350;
}
block_1350:
{
if (lean_obj_tag(x_1328) == 0)
{
lean_object* x_1330; lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; uint8_t x_1334; 
lean_dec(x_1327);
x_1330 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1329);
x_1331 = lean_ctor_get(x_1330, 0);
lean_inc(x_1331);
x_1332 = lean_ctor_get(x_1330, 1);
lean_inc(x_1332);
lean_dec(x_1330);
x_1333 = l_Lean_Elab_Term_SavedState_restore(x_1325, x_10, x_11, x_12, x_13, x_14, x_15, x_1332);
x_1334 = !lean_is_exclusive(x_1333);
if (x_1334 == 0)
{
lean_object* x_1335; lean_object* x_1336; lean_object* x_1337; 
x_1335 = lean_ctor_get(x_1333, 1);
x_1336 = lean_ctor_get(x_1333, 0);
lean_dec(x_1336);
lean_ctor_set_tag(x_1333, 1);
lean_ctor_set(x_1333, 1, x_1331);
lean_ctor_set(x_1333, 0, x_1328);
x_1337 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1333, x_10, x_11, x_12, x_13, x_14, x_15, x_1335);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1337;
}
else
{
lean_object* x_1338; lean_object* x_1339; lean_object* x_1340; 
x_1338 = lean_ctor_get(x_1333, 1);
lean_inc(x_1338);
lean_dec(x_1333);
x_1339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1339, 0, x_1328);
lean_ctor_set(x_1339, 1, x_1331);
x_1340 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1339, x_10, x_11, x_12, x_13, x_14, x_15, x_1338);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1340;
}
}
else
{
lean_object* x_1341; lean_object* x_1342; uint8_t x_1343; 
lean_dec(x_9);
x_1341 = lean_ctor_get(x_1328, 0);
lean_inc(x_1341);
x_1342 = l_Lean_Elab_postponeExceptionId;
x_1343 = lean_nat_dec_eq(x_1341, x_1342);
lean_dec(x_1341);
if (x_1343 == 0)
{
lean_object* x_1344; 
lean_dec(x_1325);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_1327)) {
 x_1344 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1344 = x_1327;
 lean_ctor_set_tag(x_1344, 1);
}
lean_ctor_set(x_1344, 0, x_1328);
lean_ctor_set(x_1344, 1, x_1329);
return x_1344;
}
else
{
lean_object* x_1345; uint8_t x_1346; 
lean_dec(x_1327);
x_1345 = l_Lean_Elab_Term_SavedState_restore(x_1325, x_10, x_11, x_12, x_13, x_14, x_15, x_1329);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1346 = !lean_is_exclusive(x_1345);
if (x_1346 == 0)
{
lean_object* x_1347; 
x_1347 = lean_ctor_get(x_1345, 0);
lean_dec(x_1347);
lean_ctor_set_tag(x_1345, 1);
lean_ctor_set(x_1345, 0, x_1328);
return x_1345;
}
else
{
lean_object* x_1348; lean_object* x_1349; 
x_1348 = lean_ctor_get(x_1345, 1);
lean_inc(x_1348);
lean_dec(x_1345);
x_1349 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1349, 0, x_1328);
lean_ctor_set(x_1349, 1, x_1348);
return x_1349;
}
}
}
}
}
else
{
lean_object* x_1368; lean_object* x_1369; lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; lean_object* x_1373; lean_object* x_1374; lean_object* x_1396; 
x_1368 = lean_box(0);
x_1369 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_1370 = lean_ctor_get(x_1369, 0);
lean_inc(x_1370);
x_1371 = lean_ctor_get(x_1369, 1);
lean_inc(x_1371);
if (lean_is_exclusive(x_1369)) {
 lean_ctor_release(x_1369, 0);
 lean_ctor_release(x_1369, 1);
 x_1372 = x_1369;
} else {
 lean_dec_ref(x_1369);
 x_1372 = lean_box(0);
}
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_1396 = l_Lean_Elab_Term_elabTermEnsuringType(x_1, x_5, x_1090, x_1368, x_10, x_11, x_12, x_13, x_14, x_15, x_1371);
if (lean_obj_tag(x_1396) == 0)
{
lean_object* x_1397; lean_object* x_1398; lean_object* x_1399; lean_object* x_1400; lean_object* x_1401; lean_object* x_1402; uint8_t x_1403; 
lean_dec(x_1372);
x_1397 = lean_ctor_get(x_1396, 0);
lean_inc(x_1397);
x_1398 = lean_ctor_get(x_1396, 1);
lean_inc(x_1398);
lean_dec(x_1396);
x_1399 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1398);
x_1400 = lean_ctor_get(x_1399, 0);
lean_inc(x_1400);
x_1401 = lean_ctor_get(x_1399, 1);
lean_inc(x_1401);
lean_dec(x_1399);
x_1402 = l_Lean_Elab_Term_SavedState_restore(x_1370, x_10, x_11, x_12, x_13, x_14, x_15, x_1401);
x_1403 = !lean_is_exclusive(x_1402);
if (x_1403 == 0)
{
lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; 
x_1404 = lean_ctor_get(x_1402, 1);
x_1405 = lean_ctor_get(x_1402, 0);
lean_dec(x_1405);
lean_ctor_set(x_1402, 1, x_1400);
lean_ctor_set(x_1402, 0, x_1397);
x_1406 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1402, x_10, x_11, x_12, x_13, x_14, x_15, x_1404);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1406;
}
else
{
lean_object* x_1407; lean_object* x_1408; lean_object* x_1409; 
x_1407 = lean_ctor_get(x_1402, 1);
lean_inc(x_1407);
lean_dec(x_1402);
x_1408 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1408, 0, x_1397);
lean_ctor_set(x_1408, 1, x_1400);
x_1409 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1408, x_10, x_11, x_12, x_13, x_14, x_15, x_1407);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1409;
}
}
else
{
lean_object* x_1410; lean_object* x_1411; 
x_1410 = lean_ctor_get(x_1396, 0);
lean_inc(x_1410);
x_1411 = lean_ctor_get(x_1396, 1);
lean_inc(x_1411);
lean_dec(x_1396);
x_1373 = x_1410;
x_1374 = x_1411;
goto block_1395;
}
block_1395:
{
if (lean_obj_tag(x_1373) == 0)
{
lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; uint8_t x_1379; 
lean_dec(x_1372);
x_1375 = l_Lean_Elab_Term_saveAllState___rarg(x_11, x_12, x_13, x_14, x_15, x_1374);
x_1376 = lean_ctor_get(x_1375, 0);
lean_inc(x_1376);
x_1377 = lean_ctor_get(x_1375, 1);
lean_inc(x_1377);
lean_dec(x_1375);
x_1378 = l_Lean_Elab_Term_SavedState_restore(x_1370, x_10, x_11, x_12, x_13, x_14, x_15, x_1377);
x_1379 = !lean_is_exclusive(x_1378);
if (x_1379 == 0)
{
lean_object* x_1380; lean_object* x_1381; lean_object* x_1382; 
x_1380 = lean_ctor_get(x_1378, 1);
x_1381 = lean_ctor_get(x_1378, 0);
lean_dec(x_1381);
lean_ctor_set_tag(x_1378, 1);
lean_ctor_set(x_1378, 1, x_1376);
lean_ctor_set(x_1378, 0, x_1373);
x_1382 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1378, x_10, x_11, x_12, x_13, x_14, x_15, x_1380);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1382;
}
else
{
lean_object* x_1383; lean_object* x_1384; lean_object* x_1385; 
x_1383 = lean_ctor_get(x_1378, 1);
lean_inc(x_1383);
lean_dec(x_1378);
x_1384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1384, 0, x_1373);
lean_ctor_set(x_1384, 1, x_1376);
x_1385 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_9, x_1384, x_10, x_11, x_12, x_13, x_14, x_15, x_1383);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_1385;
}
}
else
{
lean_object* x_1386; lean_object* x_1387; uint8_t x_1388; 
lean_dec(x_9);
x_1386 = lean_ctor_get(x_1373, 0);
lean_inc(x_1386);
x_1387 = l_Lean_Elab_postponeExceptionId;
x_1388 = lean_nat_dec_eq(x_1386, x_1387);
lean_dec(x_1386);
if (x_1388 == 0)
{
lean_object* x_1389; 
lean_dec(x_1370);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_scalar(x_1372)) {
 x_1389 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1389 = x_1372;
 lean_ctor_set_tag(x_1389, 1);
}
lean_ctor_set(x_1389, 0, x_1373);
lean_ctor_set(x_1389, 1, x_1374);
return x_1389;
}
else
{
lean_object* x_1390; uint8_t x_1391; 
lean_dec(x_1372);
x_1390 = l_Lean_Elab_Term_SavedState_restore(x_1370, x_10, x_11, x_12, x_13, x_14, x_15, x_1374);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_1391 = !lean_is_exclusive(x_1390);
if (x_1391 == 0)
{
lean_object* x_1392; 
x_1392 = lean_ctor_get(x_1390, 0);
lean_dec(x_1392);
lean_ctor_set_tag(x_1390, 1);
lean_ctor_set(x_1390, 0, x_1373);
return x_1390;
}
else
{
lean_object* x_1393; lean_object* x_1394; 
x_1393 = lean_ctor_get(x_1390, 1);
lean_inc(x_1393);
lean_dec(x_1390);
x_1394 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1394, 0, x_1373);
lean_ctor_set(x_1394, 1, x_1393);
return x_1394;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_1415; lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; lean_object* x_1419; 
lean_dec(x_1);
x_1415 = l_Lean_Syntax_getId(x_1084);
x_1416 = lean_erase_macro_scopes(x_1415);
x_1417 = l_Lean_Name_components(x_1416);
x_1418 = l_List_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__3(x_1084, x_1417);
x_1419 = l_List_append___rarg(x_1418, x_2);
x_1 = x_1082;
x_2 = x_1419;
goto _start;
}
}
else
{
lean_object* x_1421; lean_object* x_1422; 
lean_dec(x_1);
x_1421 = l_Lean_fieldIdxKind;
x_1422 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_1421, x_1084);
if (lean_obj_tag(x_1422) == 0)
{
lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; lean_object* x_1427; 
x_1423 = l_instInhabitedNat;
x_1424 = l_Option_get_x21___rarg___closed__4;
x_1425 = lean_panic_fn(x_1423, x_1424);
x_1426 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1426, 0, x_1084);
lean_ctor_set(x_1426, 1, x_1425);
x_1427 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1427, 0, x_1426);
lean_ctor_set(x_1427, 1, x_2);
x_1 = x_1082;
x_2 = x_1427;
goto _start;
}
else
{
lean_object* x_1429; lean_object* x_1430; lean_object* x_1431; 
x_1429 = lean_ctor_get(x_1422, 0);
lean_inc(x_1429);
lean_dec(x_1422);
x_1430 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1430, 0, x_1084);
lean_ctor_set(x_1430, 1, x_1429);
x_1431 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1431, 0, x_1430);
lean_ctor_set(x_1431, 1, x_2);
x_1 = x_1082;
x_2 = x_1431;
goto _start;
}
}
}
}
else
{
lean_object* x_1433; lean_object* x_1434; lean_object* x_1435; uint8_t x_1436; 
x_1433 = l_Lean_Syntax_getArgs(x_1);
lean_dec(x_1);
x_1434 = lean_array_get_size(x_1433);
x_1435 = lean_unsigned_to_nat(0u);
x_1436 = lean_nat_dec_lt(x_1435, x_1434);
if (x_1436 == 0)
{
lean_object* x_1437; 
lean_dec(x_1434);
lean_dec(x_1433);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1437 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1437, 0, x_9);
lean_ctor_set(x_1437, 1, x_16);
return x_1437;
}
else
{
uint8_t x_1438; 
x_1438 = !lean_is_exclusive(x_10);
if (x_1438 == 0)
{
uint8_t x_1439; uint8_t x_1440; 
x_1439 = 0;
lean_ctor_set_uint8(x_10, sizeof(void*)*8 + 1, x_1439);
x_1440 = lean_nat_dec_le(x_1434, x_1434);
if (x_1440 == 0)
{
lean_object* x_1441; 
lean_dec(x_10);
lean_dec(x_1434);
lean_dec(x_1433);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1441 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1441, 0, x_9);
lean_ctor_set(x_1441, 1, x_16);
return x_1441;
}
else
{
size_t x_1442; size_t x_1443; lean_object* x_1444; 
x_1442 = 0;
x_1443 = lean_usize_of_nat(x_1434);
lean_dec(x_1434);
x_1444 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_1433, x_1442, x_1443, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_1433);
return x_1444;
}
}
else
{
lean_object* x_1445; lean_object* x_1446; lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; uint8_t x_1450; uint8_t x_1451; lean_object* x_1452; lean_object* x_1453; lean_object* x_1454; uint8_t x_1455; lean_object* x_1456; uint8_t x_1457; 
x_1445 = lean_ctor_get(x_10, 0);
x_1446 = lean_ctor_get(x_10, 1);
x_1447 = lean_ctor_get(x_10, 2);
x_1448 = lean_ctor_get(x_10, 3);
x_1449 = lean_ctor_get(x_10, 4);
x_1450 = lean_ctor_get_uint8(x_10, sizeof(void*)*8);
x_1451 = lean_ctor_get_uint8(x_10, sizeof(void*)*8 + 2);
x_1452 = lean_ctor_get(x_10, 5);
x_1453 = lean_ctor_get(x_10, 6);
x_1454 = lean_ctor_get(x_10, 7);
lean_inc(x_1454);
lean_inc(x_1453);
lean_inc(x_1452);
lean_inc(x_1449);
lean_inc(x_1448);
lean_inc(x_1447);
lean_inc(x_1446);
lean_inc(x_1445);
lean_dec(x_10);
x_1455 = 0;
x_1456 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_1456, 0, x_1445);
lean_ctor_set(x_1456, 1, x_1446);
lean_ctor_set(x_1456, 2, x_1447);
lean_ctor_set(x_1456, 3, x_1448);
lean_ctor_set(x_1456, 4, x_1449);
lean_ctor_set(x_1456, 5, x_1452);
lean_ctor_set(x_1456, 6, x_1453);
lean_ctor_set(x_1456, 7, x_1454);
lean_ctor_set_uint8(x_1456, sizeof(void*)*8, x_1450);
lean_ctor_set_uint8(x_1456, sizeof(void*)*8 + 1, x_1455);
lean_ctor_set_uint8(x_1456, sizeof(void*)*8 + 2, x_1451);
x_1457 = lean_nat_dec_le(x_1434, x_1434);
if (x_1457 == 0)
{
lean_object* x_1458; 
lean_dec(x_1456);
lean_dec(x_1434);
lean_dec(x_1433);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1458 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1458, 0, x_9);
lean_ctor_set(x_1458, 1, x_16);
return x_1458;
}
else
{
size_t x_1459; size_t x_1460; lean_object* x_1461; 
x_1459 = 0;
x_1460 = lean_usize_of_nat(x_1434);
lean_dec(x_1434);
x_1461 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_1433, x_1459, x_1460, x_9, x_1456, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_1433);
return x_1461;
}
}
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__4___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; uint8_t x_19; size_t x_20; size_t x_21; lean_object* x_22; 
x_18 = lean_unbox(x_5);
lean_dec(x_5);
x_19 = lean_unbox(x_6);
lean_dec(x_6);
x_20 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_21 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_22 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___spec__4(x_1, x_2, x_3, x_4, x_18, x_19, x_7, x_20, x_21, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_7);
return x_22;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = lean_unbox(x_7);
lean_dec(x_7);
x_19 = lean_unbox(x_8);
lean_dec(x_8);
x_20 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn(x_1, x_2, x_3, x_4, x_5, x_17, x_18, x_19, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_20;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l___private_Lean_Elab_App_0__Lean_Elab_Term_isSuccess(x_6);
x_8 = 1;
x_9 = x_2 + x_8;
if (x_7 == 0)
{
lean_dec(x_6);
x_2 = x_9;
goto _start;
}
else
{
lean_object* x_11; 
x_11 = lean_array_push(x_4, x_6);
x_2 = x_9;
x_4 = x_11;
goto _start;
}
}
else
{
return x_4;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = l_Array_empty___closed__1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_2, x_2);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = l_Array_empty___closed__1;
return x_7;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_10 = l_Array_empty___closed__1;
x_11 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess___spec__1(x_1, x_8, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = 0;
x_6 = l_Lean_Syntax_getPos_x3f(x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
}
}
lean_object* l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1___rarg___boxed), 3, 0);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Init_Notation___hyg_13855____closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1___rarg(x_6, x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_Exception_getRef(x_1);
x_13 = 0;
x_14 = l_Lean_Syntax_getPos_x3f(x_12, x_13);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_dec(x_11);
x_15 = l_Lean_Exception_toMessageData(x_1);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_nat_dec_eq(x_11, x_16);
lean_dec(x_11);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_18 = lean_ctor_get(x_2, 1);
x_19 = l_Lean_FileMap_toPosition(x_18, x_16);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_20);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = l_Lean_KernelException_toMessageData___closed__15;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___closed__1;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_dec(x_19);
x_28 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_27);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_Meta_withMVarContext___at_Lean_Meta_substCore___spec__6___at_Lean_Meta_substCore___spec__7___lambda__1___closed__3;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_Exception_toMessageData(x_1);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_23);
lean_ctor_set(x_9, 0, x_35);
return x_9;
}
else
{
lean_object* x_36; 
lean_dec(x_16);
x_36 = l_Lean_Exception_toMessageData(x_1);
lean_ctor_set(x_9, 0, x_36);
return x_9;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_9, 0);
x_38 = lean_ctor_get(x_9, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_9);
x_39 = l_Lean_Exception_getRef(x_1);
x_40 = 0;
x_41 = l_Lean_Syntax_getPos_x3f(x_39, x_40);
lean_dec(x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_37);
x_42 = l_Lean_Exception_toMessageData(x_1);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_38);
return x_43;
}
else
{
lean_object* x_44; uint8_t x_45; 
x_44 = lean_ctor_get(x_41, 0);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_nat_dec_eq(x_37, x_44);
lean_dec(x_37);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_46 = lean_ctor_get(x_2, 1);
x_47 = l_Lean_FileMap_toPosition(x_46, x_44);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_48);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = l_Lean_KernelException_toMessageData___closed__15;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___closed__1;
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_ctor_get(x_47, 1);
lean_inc(x_55);
lean_dec(x_47);
x_56 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_55);
x_57 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_54);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_Meta_withMVarContext___at_Lean_Meta_substCore___spec__6___at_Lean_Meta_substCore___spec__7___lambda__1___closed__3;
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = l_Lean_Exception_toMessageData(x_1);
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_51);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_38);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_44);
x_65 = l_Lean_Exception_toMessageData(x_1);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_38);
return x_66;
}
}
}
}
}
lean_object* l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_getRefPos___at___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageList(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_array_to_list(lean_box(0), x_1);
x_3 = l_Lean_Elab_goalsToMessageData___closed__2;
x_4 = l_Lean_MessageData_joinSep(x_2, x_3);
lean_dec(x_2);
x_5 = l_Lean_indentD(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.App");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Elab.App.0.Lean.Elab.Term.mergeFailures");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__1;
x_2 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__2;
x_3 = lean_unsigned_to_nat(859u);
x_4 = lean_unsigned_to_nat(35u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_17);
x_18 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_19 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__3;
x_20 = lean_panic_fn(x_18, x_19);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_21 = lean_apply_7(x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 1;
x_25 = x_2 + x_24;
x_26 = x_22;
x_27 = lean_array_uset(x_16, x_2, x_26);
x_2 = x_25;
x_3 = x_27;
x_10 = x_23;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_17, 0);
lean_inc(x_33);
lean_dec(x_17);
x_34 = l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData(x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = 1;
x_38 = x_2 + x_37;
x_39 = x_35;
x_40 = lean_array_uset(x_16, x_2, x_39);
x_2 = x_38;
x_3 = x_40;
x_10 = x_36;
goto _start;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__2___rarg___boxed), 8, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("overloaded, errors ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = x_1;
x_12 = lean_box_usize(x_10);
x_13 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___boxed__const__1;
x_14 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___boxed), 10, 3);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
lean_closure_set(x_14, 2, x_11);
x_15 = x_14;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_16 = lean_apply_7(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageList(x_17);
x_20 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_Lean_KernelException_toMessageData___closed__15;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__2___rarg(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_16);
if (x_25 == 0)
{
return x_16;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Elab.App.0.Lean.Elab.Term.elabAppAux");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__1;
x_2 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__1;
x_3 = lean_unsigned_to_nat(877u);
x_4 = lean_unsigned_to_nat(35u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = 1;
x_13 = x_4 + x_12;
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_2);
lean_inc(x_1);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_1);
lean_ctor_set(x_20, 3, x_2);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_16);
x_22 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = x_22;
x_24 = lean_array_uset(x_10, x_4, x_23);
x_4 = x_13;
x_5 = x_24;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_11);
x_26 = l_Lean_instInhabitedMessageData;
x_27 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__2;
x_28 = lean_panic_fn(x_26, x_27);
x_29 = x_28;
x_30 = lean_array_uset(x_10, x_4, x_29);
x_4 = x_13;
x_5 = x_30;
goto _start;
}
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_22 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_18);
lean_ctor_set(x_23, 5, x_19);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_21);
x_24 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ambiguous, possible interpretations ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_instInhabitedExpr;
x_2 = l_Lean_Elab_Term_instInhabitedTermElabResult___rarg(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_box(0);
x_14 = 0;
x_15 = l_Array_empty___closed__1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_16 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn(x_1, x_13, x_2, x_3, x_5, x_14, x_4, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_get_size(x_17);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_dec_eq(x_19, x_20);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = l___private_Lean_Elab_App_0__Lean_Elab_Term_getSuccess(x_17);
x_23 = lean_array_get_size(x_22);
x_24 = lean_nat_dec_eq(x_23, x_20);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = lean_nat_dec_lt(x_20, x_23);
if (x_25 == 0)
{
uint8_t x_26; 
lean_dec(x_23);
lean_dec(x_22);
x_26 = !lean_is_exclusive(x_10);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_10, 3);
x_28 = l_Lean_replaceRef(x_1, x_27);
lean_dec(x_27);
lean_dec(x_1);
lean_ctor_set(x_10, 3, x_28);
x_29 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg(x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
x_32 = lean_ctor_get(x_10, 2);
x_33 = lean_ctor_get(x_10, 3);
x_34 = lean_ctor_get(x_10, 4);
x_35 = lean_ctor_get(x_10, 5);
x_36 = lean_ctor_get(x_10, 6);
x_37 = lean_ctor_get(x_10, 7);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_38 = l_Lean_replaceRef(x_1, x_33);
lean_dec(x_33);
lean_dec(x_1);
x_39 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_31);
lean_ctor_set(x_39, 2, x_32);
lean_ctor_set(x_39, 3, x_38);
lean_ctor_set(x_39, 4, x_34);
lean_ctor_set(x_39, 5, x_35);
lean_ctor_set(x_39, 6, x_36);
lean_ctor_set(x_39, 7, x_37);
x_40 = l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg(x_17, x_6, x_7, x_8, x_9, x_39, x_11, x_18);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_17);
x_41 = lean_ctor_get(x_8, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_10, 0);
lean_inc(x_42);
x_43 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_44 = 0;
x_45 = x_22;
x_46 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1(x_41, x_42, x_43, x_44, x_45);
x_47 = x_46;
x_48 = l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageList(x_47);
x_49 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__2;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_Lean_KernelException_toMessageData___closed__15;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_throwErrorAt___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__2(x_1, x_52, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_23);
lean_dec(x_17);
lean_dec(x_1);
x_54 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__3;
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_array_get(x_54, x_22, x_55);
lean_dec(x_22);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_Elab_Term_SavedState_restore(x_58, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_59, 0);
lean_dec(x_61);
lean_ctor_set(x_59, 0, x_57);
return x_59;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_57);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_64 = lean_ctor_get(x_56, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_56, 1);
lean_inc(x_65);
lean_dec(x_56);
x_66 = l_Lean_Elab_Term_SavedState_restore(x_65, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_66, 0);
lean_dec(x_68);
lean_ctor_set_tag(x_66, 1);
lean_ctor_set(x_66, 0, x_64);
return x_66;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_64);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_1);
x_71 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__3;
x_72 = lean_unsigned_to_nat(0u);
x_73 = lean_array_get(x_71, x_17, x_72);
lean_dec(x_17);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_Lean_Elab_Term_SavedState_restore(x_75, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
lean_object* x_78; 
x_78 = lean_ctor_get(x_76, 0);
lean_dec(x_78);
lean_ctor_set(x_76, 0, x_74);
return x_76;
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_dec(x_76);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_74);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = lean_ctor_get(x_73, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_73, 1);
lean_inc(x_82);
lean_dec(x_73);
x_83 = l_Lean_Elab_Term_SavedState_restore(x_82, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; 
x_85 = lean_ctor_get(x_83, 0);
lean_dec(x_85);
lean_ctor_set_tag(x_83, 1);
lean_ctor_set(x_83, 0, x_81);
return x_83;
}
else
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
lean_dec(x_83);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_81);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_16);
if (x_88 == 0)
{
return x_16;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_16, 0);
x_90 = lean_ctor_get(x_16, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_16);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_expandApp_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandApp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandApp_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandApp_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandApp_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandApp_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_expandApp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_expandApp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_expandApp___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_22 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_18);
lean_ctor_set(x_23, 5, x_19);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_21);
x_24 = l_Lean_throwError___at_Lean_Elab_Term_expandApp___spec__2(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected '..'");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_uget(x_1, x_2);
x_14 = !lean_is_exclusive(x_4);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_4, 0);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
x_17 = l_Lean_Syntax_getKind(x_13);
x_18 = l_Lean_Parser_Term_namedArgument___elambda__1___closed__2;
x_19 = lean_name_eq(x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_Parser_Term_ellipsis___elambda__1___closed__2;
x_21 = lean_name_eq(x_17, x_20);
lean_dec(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; 
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_13);
x_23 = lean_array_push(x_16, x_22);
lean_ctor_set(x_4, 1, x_23);
x_24 = 1;
x_25 = x_2 + x_24;
x_2 = x_25;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_free_object(x_4);
lean_dec(x_16);
lean_dec(x_15);
x_27 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__3;
x_28 = l_Lean_throwErrorAt___at_Lean_Elab_Term_expandApp___spec__1(x_13, x_27, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_13);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
return x_28;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_28);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_17);
x_33 = lean_unsigned_to_nat(1u);
x_34 = l_Lean_Syntax_getArg(x_13, x_33);
x_35 = l_Lean_Syntax_getId(x_34);
lean_dec(x_34);
x_36 = lean_erase_macro_scopes(x_35);
x_37 = lean_unsigned_to_nat(3u);
x_38 = l_Lean_Syntax_getArg(x_13, x_37);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_13);
lean_ctor_set(x_40, 1, x_36);
lean_ctor_set(x_40, 2, x_39);
lean_inc(x_5);
x_41 = l_Lean_Elab_Term_addNamedArg(x_15, x_40, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
lean_ctor_set(x_4, 0, x_42);
x_44 = 1;
x_45 = x_2 + x_44;
x_2 = x_45;
x_11 = x_43;
goto _start;
}
else
{
uint8_t x_47; 
lean_free_object(x_4);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_5);
x_47 = !lean_is_exclusive(x_41);
if (x_47 == 0)
{
return x_41;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_41, 0);
x_49 = lean_ctor_get(x_41, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_41);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_4, 0);
x_52 = lean_ctor_get(x_4, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_4);
lean_inc(x_13);
x_53 = l_Lean_Syntax_getKind(x_13);
x_54 = l_Lean_Parser_Term_namedArgument___elambda__1___closed__2;
x_55 = lean_name_eq(x_53, x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; 
x_56 = l_Lean_Parser_Term_ellipsis___elambda__1___closed__2;
x_57 = lean_name_eq(x_53, x_56);
lean_dec(x_53);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; size_t x_61; size_t x_62; 
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_13);
x_59 = lean_array_push(x_52, x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_51);
lean_ctor_set(x_60, 1, x_59);
x_61 = 1;
x_62 = x_2 + x_61;
x_2 = x_62;
x_4 = x_60;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_52);
lean_dec(x_51);
x_64 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__3;
x_65 = l_Lean_throwErrorAt___at_Lean_Elab_Term_expandApp___spec__1(x_13, x_64, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_13);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_68 = x_65;
} else {
 lean_dec_ref(x_65);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_53);
x_70 = lean_unsigned_to_nat(1u);
x_71 = l_Lean_Syntax_getArg(x_13, x_70);
x_72 = l_Lean_Syntax_getId(x_71);
lean_dec(x_71);
x_73 = lean_erase_macro_scopes(x_72);
x_74 = lean_unsigned_to_nat(3u);
x_75 = l_Lean_Syntax_getArg(x_13, x_74);
x_76 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_77, 0, x_13);
lean_ctor_set(x_77, 1, x_73);
lean_ctor_set(x_77, 2, x_76);
lean_inc(x_5);
x_78 = l_Lean_Elab_Term_addNamedArg(x_51, x_77, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; size_t x_82; size_t x_83; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_52);
x_82 = 1;
x_83 = x_2 + x_82;
x_2 = x_83;
x_4 = x_81;
x_11 = x_80;
goto _start;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_52);
lean_dec(x_9);
lean_dec(x_5);
x_85 = lean_ctor_get(x_78, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_78, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_87 = x_78;
} else {
 lean_dec_ref(x_78);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
}
else
{
lean_object* x_89; 
lean_dec(x_9);
lean_dec(x_5);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_4);
lean_ctor_set(x_89, 1, x_11);
return x_89;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_expandApp___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_empty___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandApp(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_87 = lean_unsigned_to_nat(1u);
x_88 = l_Lean_Syntax_getArg(x_1, x_87);
x_89 = l_Lean_Syntax_getArgs(x_88);
lean_dec(x_88);
x_90 = l_Array_isEmpty___rarg(x_89);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_91 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_89);
x_92 = l_Lean_Parser_Term_ellipsis___elambda__1___closed__2;
x_93 = l_Lean_Syntax_isOfKind(x_91, x_92);
if (x_93 == 0)
{
uint8_t x_94; lean_object* x_95; lean_object* x_96; 
x_94 = 0;
x_95 = lean_box(x_94);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_89);
lean_ctor_set(x_96, 1, x_95);
x_12 = x_96;
goto block_86;
}
else
{
lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; 
x_97 = lean_array_pop(x_89);
x_98 = 1;
x_99 = lean_box(x_98);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_99);
x_12 = x_100;
goto block_86;
}
}
else
{
uint8_t x_101; lean_object* x_102; lean_object* x_103; 
x_101 = 0;
x_102 = lean_box(x_101);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_89);
lean_ctor_set(x_103, 1, x_102);
x_12 = x_103;
goto block_86;
}
block_86:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_array_get_size(x_14);
x_17 = lean_nat_dec_lt(x_10, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_3);
x_18 = l_Array_empty___closed__1;
lean_ctor_set(x_12, 0, x_18);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_12);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_11);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_9);
return x_21;
}
else
{
uint8_t x_22; 
x_22 = lean_nat_dec_le(x_16, x_16);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_3);
x_23 = l_Array_empty___closed__1;
lean_ctor_set(x_12, 0, x_23);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_12);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_11);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_9);
return x_26;
}
else
{
size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; 
x_27 = 0;
x_28 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_29 = l_Lean_Elab_Term_expandApp___closed__1;
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3(x_14, x_27, x_28, x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_14);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_32, 1);
lean_ctor_set(x_32, 1, x_15);
lean_ctor_set(x_32, 0, x_35);
lean_ctor_set(x_12, 1, x_32);
lean_ctor_set(x_12, 0, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_11);
lean_ctor_set(x_36, 1, x_12);
lean_ctor_set(x_30, 0, x_36);
return x_30;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_32, 0);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_32);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_15);
lean_ctor_set(x_12, 1, x_39);
lean_ctor_set(x_12, 0, x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_11);
lean_ctor_set(x_40, 1, x_12);
lean_ctor_set(x_30, 0, x_40);
return x_30;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_30, 0);
x_42 = lean_ctor_get(x_30, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_30);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_45 = x_41;
} else {
 lean_dec_ref(x_41);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_15);
lean_ctor_set(x_12, 1, x_46);
lean_ctor_set(x_12, 0, x_43);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_11);
lean_ctor_set(x_47, 1, x_12);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_42);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_free_object(x_12);
lean_dec(x_15);
lean_dec(x_11);
x_49 = !lean_is_exclusive(x_30);
if (x_49 == 0)
{
return x_30;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_30, 0);
x_51 = lean_ctor_get(x_30, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_30);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_53 = lean_ctor_get(x_12, 0);
x_54 = lean_ctor_get(x_12, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_12);
x_55 = lean_array_get_size(x_53);
x_56 = lean_nat_dec_lt(x_10, x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_7);
lean_dec(x_3);
x_57 = l_Array_empty___closed__1;
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_54);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_11);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_9);
return x_61;
}
else
{
uint8_t x_62; 
x_62 = lean_nat_dec_le(x_55, x_55);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_7);
lean_dec(x_3);
x_63 = l_Array_empty___closed__1;
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_54);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_11);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_9);
return x_67;
}
else
{
size_t x_68; size_t x_69; lean_object* x_70; lean_object* x_71; 
x_68 = 0;
x_69 = lean_usize_of_nat(x_55);
lean_dec(x_55);
x_70 = l_Lean_Elab_Term_expandApp___closed__1;
x_71 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3(x_53, x_68, x_69, x_70, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_53);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_74 = x_71;
} else {
 lean_dec_ref(x_71);
 x_74 = lean_box(0);
}
x_75 = lean_ctor_get(x_72, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_72, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_77 = x_72;
} else {
 lean_dec_ref(x_72);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_54);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_75);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_11);
lean_ctor_set(x_80, 1, x_79);
if (lean_is_scalar(x_74)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_74;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_73);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_54);
lean_dec(x_11);
x_82 = lean_ctor_get(x_71, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_71, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_84 = x_71;
} else {
 lean_dec_ref(x_71);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_expandApp___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_expandApp___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_expandApp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at_Lean_Elab_Term_expandApp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_expandApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Elab_Term_expandApp(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabApp_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_apply_4(x_2, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabApp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabApp_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withoutPostponingUniverseConstraintsImp___at_Lean_Elab_Term_elabApp___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 0);
lean_inc(x_12);
lean_dec(x_4);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
x_17 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux(x_12, x_13, x_14, x_16, x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9);
return x_17;
}
}
lean_object* l_Lean_Meta_withoutPostponingUniverseConstraintsImp___at_Lean_Elab_Term_elabApp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_10 = 0;
x_11 = lean_box(x_10);
lean_inc(x_4);
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandApp___boxed), 9, 4);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_11);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_withoutPostponingUniverseConstraintsImp___at_Lean_Elab_Term_elabApp___spec__1___lambda__1), 9, 3);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_3);
lean_closure_set(x_13, 2, x_4);
x_19 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getResetPostponed(x_5, x_6, x_7, x_8, x_9);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_22 = l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(x_12, x_13, x_5, x_6, x_7, x_8, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_25 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponed(x_10, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_23);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Lean_Meta_getPostponed___rarg(x_6, x_7, x_8, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_MessageData_nil;
x_33 = l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponedToMessageData___spec__1(x_30, x_32);
lean_dec(x_30);
x_34 = lean_unsigned_to_nat(2u);
x_35 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Meta_withoutPostponingUniverseConstraintsImp___rarg___closed__16;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_Lean_KernelException_toMessageData___closed__15;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_throwError___at_Lean_Meta_addDefaultInstance___spec__1(x_39, x_5, x_6, x_7, x_8, x_31);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Meta_setPostponed(x_20, x_5, x_6, x_7, x_8, x_42);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_43, 0);
lean_dec(x_45);
lean_ctor_set_tag(x_43, 1);
lean_ctor_set(x_43, 0, x_41);
return x_43;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_ctor_get(x_25, 1);
lean_inc(x_48);
lean_dec(x_25);
x_49 = lean_box(0);
x_50 = l_Lean_Meta_withoutPostponingUniverseConstraintsImp___rarg___lambda__1(x_20, x_23, x_49, x_5, x_6, x_7, x_8, x_48);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_14 = x_51;
x_15 = x_52;
goto block_18;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_dec(x_23);
x_53 = lean_ctor_get(x_25, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_25, 1);
lean_inc(x_54);
lean_dec(x_25);
x_55 = l_Lean_Meta_setPostponed(x_20, x_5, x_6, x_7, x_8, x_54);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_55, 0);
lean_dec(x_57);
lean_ctor_set_tag(x_55, 1);
lean_ctor_set(x_55, 0, x_53);
return x_55;
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_53);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_22, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_22, 1);
lean_inc(x_61);
lean_dec(x_22);
x_62 = l_Lean_Meta_setPostponed(x_20, x_5, x_6, x_7, x_8, x_61);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_62, 0);
lean_dec(x_64);
lean_ctor_set_tag(x_62, 1);
lean_ctor_set(x_62, 0, x_60);
return x_62;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_65);
lean_dec(x_62);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_60);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
block_18:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
lean_object* l_Lean_Elab_Term_elabApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_withoutPostponingUniverseConstraintsImp___at_Lean_Elab_Term_elabApp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabApp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabApp), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabApp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_myMacro____x40_Init_Notation___hyg_2191____closed__4;
x_4 = l___regBuiltin_Lean_Elab_Term_elabApp___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = l_Array_empty___closed__1;
x_11 = 0;
x_12 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux(x_1, x_10, x_10, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabIdent___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabIdent), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabIdent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_identKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabIdent___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabNamedPattern(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNamedPattern___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabNamedPattern), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabNamedPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabNamedPattern___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabExplicitUniv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabExplicitUniv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabExplicitUniv), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabExplicitUniv(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabExplicitUniv___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandPipeProj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandPipeProj___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandPipeProj), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandPipeProj(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_pipeProj___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandPipeProj___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabExplicit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_myMacro____x40_Init_NotationExtra___hyg_5658____closed__34;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_identKind___closed__2;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
lean_inc(x_14);
x_18 = l_Lean_Syntax_isOfKind(x_14, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_1);
x_19 = l_myMacro____x40_Init_Notation___hyg_12336____closed__8;
lean_inc(x_14);
x_20 = l_Lean_Syntax_isOfKind(x_14, x_19);
if (x_20 == 0)
{
uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_21 = 1;
x_22 = 0;
x_23 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux(x_2, x_21, x_22, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_Lean_Syntax_getArg(x_14, x_13);
x_25 = l_Lean_nullKind___closed__2;
lean_inc(x_24);
x_26 = l_Lean_Syntax_isOfKind(x_24, x_25);
if (x_26 == 0)
{
uint8_t x_27; uint8_t x_28; lean_object* x_29; 
lean_dec(x_24);
x_27 = 1;
x_28 = 0;
x_29 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux(x_2, x_27, x_28, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = l_Lean_Syntax_getArgs(x_24);
x_31 = lean_array_get_size(x_30);
lean_dec(x_30);
x_32 = lean_unsigned_to_nat(2u);
x_33 = lean_nat_dec_eq(x_31, x_32);
lean_dec(x_31);
if (x_33 == 0)
{
uint8_t x_34; uint8_t x_35; lean_object* x_36; 
lean_dec(x_24);
x_34 = 1;
x_35 = 0;
x_36 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux(x_2, x_34, x_35, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Lean_Syntax_getArg(x_24, x_37);
x_39 = l_Lean_Syntax_getArg(x_24, x_13);
lean_dec(x_24);
lean_inc(x_39);
x_40 = l_Lean_Syntax_isOfKind(x_39, x_25);
if (x_40 == 0)
{
uint8_t x_41; uint8_t x_42; lean_object* x_43; 
lean_dec(x_39);
lean_dec(x_38);
x_41 = 1;
x_42 = 0;
x_43 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux(x_2, x_41, x_42, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = l_Lean_Syntax_getArgs(x_39);
lean_dec(x_39);
x_45 = lean_array_get_size(x_44);
lean_dec(x_44);
x_46 = lean_nat_dec_eq(x_45, x_37);
lean_dec(x_45);
if (x_46 == 0)
{
uint8_t x_47; uint8_t x_48; lean_object* x_49; 
lean_dec(x_38);
x_47 = 1;
x_48 = 0;
x_49 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux(x_2, x_47, x_48, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_49;
}
else
{
uint8_t x_50; uint8_t x_51; lean_object* x_52; 
lean_dec(x_14);
x_50 = 1;
x_51 = 0;
x_52 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux(x_2, x_50, x_51, x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_52;
}
}
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_53 = lean_unsigned_to_nat(0u);
x_54 = l_Lean_Syntax_getArg(x_14, x_53);
x_55 = l_Lean_Syntax_isOfKind(x_54, x_15);
if (x_55 == 0)
{
uint8_t x_56; uint8_t x_57; lean_object* x_58; 
lean_dec(x_1);
x_56 = 1;
x_57 = 0;
x_58 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux(x_2, x_56, x_57, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_58;
}
else
{
lean_object* x_59; 
lean_dec(x_14);
x_59 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_59;
}
}
}
else
{
lean_object* x_60; 
lean_dec(x_14);
x_60 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_60;
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabExplicit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabExplicit), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabExplicit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_myMacro____x40_Init_NotationExtra___hyg_5658____closed__34;
x_4 = l___regBuiltin_Lean_Elab_Term_elabExplicit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabChoice(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabChoice___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabChoice), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabChoice(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_choiceKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabChoice___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabProj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabProj___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabProj), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabProj(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_proj___elambda__1___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_elabProj___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabArrayRef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrayRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabArrayRef), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrayRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_arrayRef___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabArrayRef___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_8448_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__1;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_FindMVar(lean_object*);
lean_object* initialize_Lean_Elab_Term(lean_object*);
lean_object* initialize_Lean_Elab_Binders(lean_object*);
lean_object* initialize_Lean_Elab_SyntheticMVars(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_App(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FindMVar(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Binders(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__1 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__1();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__1);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__2 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__2();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__2);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__3 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__3();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4____closed__3);
res = l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Term_elabWithoutExpectedTypeAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Term_elabWithoutExpectedTypeAttr);
lean_dec_ref(res);
l_Lean_Elab_Term_instInhabitedArg___closed__1 = _init_l_Lean_Elab_Term_instInhabitedArg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedArg___closed__1);
l_Lean_Elab_Term_instInhabitedArg = _init_l_Lean_Elab_Term_instInhabitedArg();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedArg);
l_Lean_Elab_Term_NamedArg_ref___default = _init_l_Lean_Elab_Term_NamedArg_ref___default();
lean_mark_persistent(l_Lean_Elab_Term_NamedArg_ref___default);
l_Lean_Elab_Term_instInhabitedNamedArg___closed__1 = _init_l_Lean_Elab_Term_instInhabitedNamedArg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedNamedArg___closed__1);
l_Lean_Elab_Term_instInhabitedNamedArg = _init_l_Lean_Elab_Term_instInhabitedNamedArg();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedNamedArg);
l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__1 = _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__1);
l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__2 = _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__2);
l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__3 = _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__3);
l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__4 = _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__4);
l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__5 = _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__5);
l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__6 = _init_l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_throwInvalidNamedArg___rarg___closed__6);
l_Lean_Elab_Term_addNamedArg___closed__1 = _init_l_Lean_Elab_Term_addNamedArg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__1);
l_Lean_Elab_Term_addNamedArg___closed__2 = _init_l_Lean_Elab_Term_addNamedArg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__2);
l_Lean_Elab_Term_addNamedArg___closed__3 = _init_l_Lean_Elab_Term_addNamedArg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__3);
l_Lean_Elab_Term_addNamedArg___closed__4 = _init_l_Lean_Elab_Term_addNamedArg___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__4);
l_Lean_Elab_Term_ElabAppArgs_State_ellipsis___default = _init_l_Lean_Elab_Term_ElabAppArgs_State_ellipsis___default();
l_Lean_Elab_Term_ElabAppArgs_State_etaArgs___default = _init_l_Lean_Elab_Term_ElabAppArgs_State_etaArgs___default();
lean_mark_persistent(l_Lean_Elab_Term_ElabAppArgs_State_etaArgs___default);
l_Lean_Elab_Term_ElabAppArgs_State_toSetErrorCtx___default = _init_l_Lean_Elab_Term_ElabAppArgs_State_toSetErrorCtx___default();
lean_mark_persistent(l_Lean_Elab_Term_ElabAppArgs_State_toSetErrorCtx___default);
l_Lean_Elab_Term_ElabAppArgs_State_instMVars___default = _init_l_Lean_Elab_Term_ElabAppArgs_State_instMVars___default();
lean_mark_persistent(l_Lean_Elab_Term_ElabAppArgs_State_instMVars___default);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__3);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__4 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__4();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_synthesizePendingAndNormalizeFunType___closed__4);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__3);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__4 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__4();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__4);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__5 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__5();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__5);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__6 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__6();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__6);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__7 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__7();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__7);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__8 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__8();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__8);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__9 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__9();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_propagateExpectedType___closed__9);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___lambda__2___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_finalize___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_anyNamedArgDependsOnCurrent___lambda__2___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__3);
l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__4 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_ElabAppArgs_processExplictArg___closed__4);
l_Lean_Elab_Term_ElabAppArgs_main___closed__1 = _init_l_Lean_Elab_Term_ElabAppArgs_main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_ElabAppArgs_main___closed__1);
l_Lean_Elab_Term_elabAppArgs___closed__1 = _init_l_Lean_Elab_Term_elabAppArgs___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabAppArgs___closed__1);
l_Lean_Elab_Term_elabAppArgs___closed__2 = _init_l_Lean_Elab_Term_elabAppArgs___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabAppArgs___closed__2);
l_Lean_Elab_Term_elabAppArgs___closed__3 = _init_l_Lean_Elab_Term_elabAppArgs___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabAppArgs___closed__3);
l_Lean_Elab_Term_elabAppArgs___closed__4 = _init_l_Lean_Elab_Term_elabAppArgs___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabAppArgs___closed__4);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__3);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__4 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__4();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__1___closed__4);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___lambda__2___closed__3);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__3);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__4 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__4();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__4);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__5 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__5();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__5);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__6 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__6();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__6);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__7 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__7();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__7);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__8 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__8();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__8);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__9 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__9();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__9);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__10 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__10();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__10);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__11);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__12 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__12();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__12);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__13);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__14 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__14();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__14);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__15 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__15();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__15);
l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__16 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__16();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_resolveLValAux___closed__16);
l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__1 = _init_l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__1();
lean_mark_persistent(l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__1);
l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2 = _init_l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2();
lean_mark_persistent(l_List_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___spec__1___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_mkBaseProjections___closed__3);
l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__1 = _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__1);
l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__2 = _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__2);
l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__3 = _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__3();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__3);
l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__4 = _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__4();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__4);
l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__5 = _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__5();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__5);
l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__6 = _init_l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__6();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__1___closed__6);
l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__1 = _init_l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__1);
l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__2 = _init_l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__2);
l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__3 = _init_l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__3);
l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__4 = _init_l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Meta_forallTelescopeReducing___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__4___at___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___spec__5___lambda__1___closed__4);
l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_addLValArg___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLVals___closed__3);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__3);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__4 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__4();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__4);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__5 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__5();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__5);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__6 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__6();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__6);
l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_toMessageData___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__2);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__3 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__3();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___spec__1___closed__3);
l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___boxed__const__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_mergeFailures___rarg___boxed__const__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___spec__1___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__1 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__1);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__2 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__2);
l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__3 = _init_l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppAux___closed__3);
l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__1);
l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__2 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__2);
l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__3 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_expandApp___spec__3___closed__3);
l_Lean_Elab_Term_expandApp___closed__1 = _init_l_Lean_Elab_Term_expandApp___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandApp___closed__1);
l___regBuiltin_Lean_Elab_Term_elabApp___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabApp___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabApp___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabApp(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabIdent___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabIdent___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabIdent___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabIdent(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabNamedPattern___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabNamedPattern___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNamedPattern___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabNamedPattern(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabExplicitUniv___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabExplicitUniv___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabExplicitUniv___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabExplicitUniv(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandPipeProj___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandPipeProj___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandPipeProj___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandPipeProj(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabExplicit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabExplicit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabExplicit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabExplicit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabChoice___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabChoice___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabChoice___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabChoice(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabProj___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabProj___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabProj___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabProj(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabArrayRef___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabArrayRef___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrayRef___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabArrayRef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Term_initFn____x40_Lean_Elab_App___hyg_8448_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
