/*
 * @Author: lihaobo
 * @Date: 2023-03-16 14:56:39
 * @LastEditors: lihaobo
 * @LastEditTime: 2023-03-20 11:01:36
 * @Description: 请填写简介
 */
#ifndef TINYTENSOR_INFER_INCLUDE_OPS_EXPRESSION_OP_HPP_
#define TINYTENSOR_INFER_INCLUDE_OPS_EXPRESSION_OP_HPP_

#include "op.hpp"
#include <string>
#include <vector>
#include "parser/parse_expression.hpp"
namespace TinyTensor
{
class ExpressionOp :public Operator
{
private:
    /* data */
    std::string expr_;
    std::vector<std::shared_ptr<TokenNode>> nodes_;
    std::shared_ptr<ExpressionParser> parser_;

public:
    explicit ExpressionOp(const std::string &expr);
    std::vector<std::shared_ptr<TokenNode>> Generate();

};





} // namespace TinyTensor




#endif //TINYTENSOR_INFER_INCLUDE_OPS_EXPRESSION_OP_HPP_