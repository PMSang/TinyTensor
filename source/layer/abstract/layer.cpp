/*
 * @Author: lihaobo
 * @Date: 2023-05-10 01:39:47
 * @LastEditors: lihaobo
 * @LastEditTime: 2023-05-10 08:31:03
 * @Description:
 */
#include "layer/abstract/layer.hpp"
namespace TinyTensor
{

/* 构造成员函数定义 */
const std::vector<std::shared_ptr<Tensor<float>>> &Layer::weights() const
{
    LOG(FATAL) << this->layer_name_ << " layer not implement yet!";
}

/* 偏移成员函数定义 */
const std::vector<std::shared_ptr<Tensor<float>>> &Layer::bias() const
{
    LOG(FATAL) << this->layer_name_ << " layer not implement yet!";
}

/* 设置便宜成员函数定义 */
void Layer::set_bias(const std::vector<float> &bias)
{
    LOG(FATAL) << this->layer_name_ << " layer not implement yet!";
}

void Layer::set_bias(const std::vector<std::shared_ptr<Tensor<float>>> &bias)
{
    LOG(FATAL) << this->layer_name_ << " layer not implement yet!";
}

/* 设置权重成员函数定义 */
void Layer::set_weights(const std::vector<float> &weights)
{
    LOG(FATAL) << this->layer_name_ << " layer not implement yet!";
}
void Layer::set_weights(const std::vector<std::shared_ptr<Tensor<float>>> &weights)
{
    LOG(FATAL) << this->layer_name_ << " layer not implement yet!";
}

/* 前馈成员函数定义 */
InferStatus Layer::Forward(const std::vector<std::shared_ptr<Tensor<float>>> &inputs, std::vector<std::shared_ptr<Tensor<float>>> &outputs)
{
    LOG(FATAL) << this->layer_name_ << " layer not implement yet!";
}

}