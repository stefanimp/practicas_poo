//
// Created by stefan on 13/05/2023.
//

#include "RackAlmacenamiento.h"

RackAlamacenamiento::RackAlamacenamiento(std::string descripcion, float consumoTotal, int capacidadTotal): Dispositivo(descripcion,consumoTotal), capacidadTotal(capacidadTotal) {
}

RackAlamacenamiento::~RackAlamacenamiento() noexcept {
}

void RackAlamacenamiento::setCapacidadTotal(int capacidadTotal) {
    this->capacidadTotal = capacidadTotal;
}

int RackAlamacenamiento::getCapacidadTotal() const {
    return capacidadTotal;
}

std::string RackAlamacenamiento::getDescripcion() const {

}